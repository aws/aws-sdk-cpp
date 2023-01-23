/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class VersionInformation
  {
  public:
    AWS_GREENGRASS_API VersionInformation();
    AWS_GREENGRASS_API VersionInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API VersionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * The ID of the parent definition that the version is associated with.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline VersionInformation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline VersionInformation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the parent definition that the version is associated with.
     */
    inline VersionInformation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The ID of the version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * The ID of the version.
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * The ID of the version.
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * The ID of the version.
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * The ID of the version.
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * The ID of the version.
     */
    inline VersionInformation& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * The ID of the version.
     */
    inline VersionInformation& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * The ID of the version.
     */
    inline VersionInformation& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
