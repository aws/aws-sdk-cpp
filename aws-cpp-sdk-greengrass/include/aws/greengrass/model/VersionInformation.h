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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a version.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/VersionInformation">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API VersionInformation
  {
  public:
    VersionInformation();
    VersionInformation(Aws::Utils::Json::JsonView jsonValue);
    VersionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the version.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the version.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The ARN of the version.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The ARN of the version.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The ARN of the version.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The ARN of the version.
     */
    inline VersionInformation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the version.
     */
    inline VersionInformation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the version.
     */
    inline VersionInformation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline VersionInformation& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline VersionInformation& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the version was created.
     */
    inline VersionInformation& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * The ID of the version.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the version.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the version.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the version.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the version.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the version.
     */
    inline VersionInformation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the version.
     */
    inline VersionInformation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the version.
     */
    inline VersionInformation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The unique ID of the version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * The unique ID of the version.
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * The unique ID of the version.
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * The unique ID of the version.
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * The unique ID of the version.
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * The unique ID of the version.
     */
    inline VersionInformation& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * The unique ID of the version.
     */
    inline VersionInformation& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * The unique ID of the version.
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
