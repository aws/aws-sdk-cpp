/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information on the group<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GroupInformation">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API GroupInformation
  {
  public:
    GroupInformation();
    GroupInformation(const Aws::Utils::Json::JsonValue& jsonValue);
    GroupInformation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Arn of a group.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Arn of a group.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * Arn of a group.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * Arn of a group.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * Arn of a group.
     */
    inline GroupInformation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Arn of a group.
     */
    inline GroupInformation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Arn of a group.
     */
    inline GroupInformation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Timestamp of when the group was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * Timestamp of when the group was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * Timestamp of when the group was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * Timestamp of when the group was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp.assign(value); }

    /**
     * Timestamp of when the group was created.
     */
    inline GroupInformation& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * Timestamp of when the group was created.
     */
    inline GroupInformation& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * Timestamp of when the group was created.
     */
    inline GroupInformation& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * Id of a group.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Id of a group.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Id of a group.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Id of a group.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Id of a group.
     */
    inline GroupInformation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Id of a group.
     */
    inline GroupInformation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Id of a group.
     */
    inline GroupInformation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Last updated timestamp of the group.
     */
    inline const Aws::String& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * Last updated timestamp of the group.
     */
    inline void SetLastUpdatedTimestamp(const Aws::String& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * Last updated timestamp of the group.
     */
    inline void SetLastUpdatedTimestamp(Aws::String&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * Last updated timestamp of the group.
     */
    inline void SetLastUpdatedTimestamp(const char* value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp.assign(value); }

    /**
     * Last updated timestamp of the group.
     */
    inline GroupInformation& WithLastUpdatedTimestamp(const Aws::String& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * Last updated timestamp of the group.
     */
    inline GroupInformation& WithLastUpdatedTimestamp(Aws::String&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

    /**
     * Last updated timestamp of the group.
     */
    inline GroupInformation& WithLastUpdatedTimestamp(const char* value) { SetLastUpdatedTimestamp(value); return *this;}


    /**
     * Last version of the group.
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }

    /**
     * Last version of the group.
     */
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }

    /**
     * Last version of the group.
     */
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::move(value); }

    /**
     * Last version of the group.
     */
    inline void SetLatestVersion(const char* value) { m_latestVersionHasBeenSet = true; m_latestVersion.assign(value); }

    /**
     * Last version of the group.
     */
    inline GroupInformation& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}

    /**
     * Last version of the group.
     */
    inline GroupInformation& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}

    /**
     * Last version of the group.
     */
    inline GroupInformation& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}


    /**
     * Latest version arn of the group.
     */
    inline const Aws::String& GetLatestVersionArn() const{ return m_latestVersionArn; }

    /**
     * Latest version arn of the group.
     */
    inline void SetLatestVersionArn(const Aws::String& value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn = value; }

    /**
     * Latest version arn of the group.
     */
    inline void SetLatestVersionArn(Aws::String&& value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn = std::move(value); }

    /**
     * Latest version arn of the group.
     */
    inline void SetLatestVersionArn(const char* value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn.assign(value); }

    /**
     * Latest version arn of the group.
     */
    inline GroupInformation& WithLatestVersionArn(const Aws::String& value) { SetLatestVersionArn(value); return *this;}

    /**
     * Latest version arn of the group.
     */
    inline GroupInformation& WithLatestVersionArn(Aws::String&& value) { SetLatestVersionArn(std::move(value)); return *this;}

    /**
     * Latest version arn of the group.
     */
    inline GroupInformation& WithLatestVersionArn(const char* value) { SetLatestVersionArn(value); return *this;}


    /**
     * Name of a group.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name of a group.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Name of a group.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Name of a group.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Name of a group.
     */
    inline GroupInformation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name of a group.
     */
    inline GroupInformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name of a group.
     */
    inline GroupInformation& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_creationTimestamp;
    bool m_creationTimestampHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet;

    Aws::String m_latestVersion;
    bool m_latestVersionHasBeenSet;

    Aws::String m_latestVersionArn;
    bool m_latestVersionArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
