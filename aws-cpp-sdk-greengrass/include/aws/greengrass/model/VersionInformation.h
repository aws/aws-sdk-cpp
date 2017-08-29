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
   * Information on the version<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/VersionInformation">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API VersionInformation
  {
  public:
    VersionInformation();
    VersionInformation(const Aws::Utils::Json::JsonValue& jsonValue);
    VersionInformation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Arn of the version.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Arn of the version.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * Arn of the version.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * Arn of the version.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * Arn of the version.
     */
    inline VersionInformation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Arn of the version.
     */
    inline VersionInformation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Arn of the version.
     */
    inline VersionInformation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Timestamp of when the version was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * Timestamp of when the version was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * Timestamp of when the version was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * Timestamp of when the version was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp.assign(value); }

    /**
     * Timestamp of when the version was created.
     */
    inline VersionInformation& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * Timestamp of when the version was created.
     */
    inline VersionInformation& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * Timestamp of when the version was created.
     */
    inline VersionInformation& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * Id of the resource container.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Id of the resource container.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Id of the resource container.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Id of the resource container.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Id of the resource container.
     */
    inline VersionInformation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Id of the resource container.
     */
    inline VersionInformation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Id of the resource container.
     */
    inline VersionInformation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Unique Id of a version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * Unique Id of a version.
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * Unique Id of a version.
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * Unique Id of a version.
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * Unique Id of a version.
     */
    inline VersionInformation& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * Unique Id of a version.
     */
    inline VersionInformation& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * Unique Id of a version.
     */
    inline VersionInformation& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_creationTimestamp;
    bool m_creationTimestampHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
