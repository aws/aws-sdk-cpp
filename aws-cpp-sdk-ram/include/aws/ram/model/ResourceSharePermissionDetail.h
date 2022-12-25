/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Information about an RAM permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceSharePermissionDetail">AWS
   * API Reference</a></p>
   */
  class ResourceSharePermissionDetail
  {
  public:
    AWS_RAM_API ResourceSharePermissionDetail();
    AWS_RAM_API ResourceSharePermissionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API ResourceSharePermissionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of this RAM permission.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of this RAM permission.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of this RAM permission.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of this RAM permission.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of this RAM permission.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of this RAM permission.</p>
     */
    inline ResourceSharePermissionDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of this RAM permission.</p>
     */
    inline ResourceSharePermissionDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of this RAM permission.</p>
     */
    inline ResourceSharePermissionDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline ResourceSharePermissionDetail& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline ResourceSharePermissionDetail& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the permission represented in this structure.</p>
     */
    inline ResourceSharePermissionDetail& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for this permission.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for this permission.</p>
     */
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for this permission.</p>
     */
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for this permission.</p>
     */
    inline ResourceSharePermissionDetail& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}


    /**
     * <p>The name of this permission.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this permission.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this permission.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this permission.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this permission.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this permission.</p>
     */
    inline ResourceSharePermissionDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this permission.</p>
     */
    inline ResourceSharePermissionDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this permission.</p>
     */
    inline ResourceSharePermissionDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline ResourceSharePermissionDetail& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline ResourceSharePermissionDetail& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type to which this permission applies.</p>
     */
    inline ResourceSharePermissionDetail& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline const Aws::String& GetPermission() const{ return m_permission; }

    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline void SetPermission(const Aws::String& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline void SetPermission(Aws::String&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline void SetPermission(const char* value) { m_permissionHasBeenSet = true; m_permission.assign(value); }

    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline ResourceSharePermissionDetail& WithPermission(const Aws::String& value) { SetPermission(value); return *this;}

    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline ResourceSharePermissionDetail& WithPermission(Aws::String&& value) { SetPermission(std::move(value)); return *this;}

    /**
     * <p>The permission's effect and actions in JSON format. The <code>effect</code>
     * indicates whether the specified actions are allowed or denied. The
     * <code>actions</code> list the operations to which the principal is granted or
     * denied access.</p>
     */
    inline ResourceSharePermissionDetail& WithPermission(const char* value) { SetPermission(value); return *this;}


    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline ResourceSharePermissionDetail& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time when the permission was created.</p>
     */
    inline ResourceSharePermissionDetail& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline ResourceSharePermissionDetail& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time when the permission was last updated.</p>
     */
    inline ResourceSharePermissionDetail& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for all resources of this resource type.</p>
     */
    inline bool GetIsResourceTypeDefault() const{ return m_isResourceTypeDefault; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for all resources of this resource type.</p>
     */
    inline bool IsResourceTypeDefaultHasBeenSet() const { return m_isResourceTypeDefaultHasBeenSet; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for all resources of this resource type.</p>
     */
    inline void SetIsResourceTypeDefault(bool value) { m_isResourceTypeDefaultHasBeenSet = true; m_isResourceTypeDefault = value; }

    /**
     * <p>Specifies whether the version of the permission represented in this structure
     * is the default version for all resources of this resource type.</p>
     */
    inline ResourceSharePermissionDetail& WithIsResourceTypeDefault(bool value) { SetIsResourceTypeDefault(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    bool m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_permission;
    bool m_permissionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    bool m_isResourceTypeDefault;
    bool m_isResourceTypeDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
