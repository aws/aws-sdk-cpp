/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class GetPermissionRequest : public RAMRequest
  {
  public:
    AWS_RAM_API GetPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPermission"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission whose contents you want to retrieve. To
     * find the ARN for a permission, use either the <a>ListPermissions</a> operation
     * or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline const Aws::String& GetPermissionArn() const{ return m_permissionArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission whose contents you want to retrieve. To
     * find the ARN for a permission, use either the <a>ListPermissions</a> operation
     * or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission whose contents you want to retrieve. To
     * find the ARN for a permission, use either the <a>ListPermissions</a> operation
     * or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline void SetPermissionArn(const Aws::String& value) { m_permissionArnHasBeenSet = true; m_permissionArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission whose contents you want to retrieve. To
     * find the ARN for a permission, use either the <a>ListPermissions</a> operation
     * or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline void SetPermissionArn(Aws::String&& value) { m_permissionArnHasBeenSet = true; m_permissionArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission whose contents you want to retrieve. To
     * find the ARN for a permission, use either the <a>ListPermissions</a> operation
     * or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline void SetPermissionArn(const char* value) { m_permissionArnHasBeenSet = true; m_permissionArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission whose contents you want to retrieve. To
     * find the ARN for a permission, use either the <a>ListPermissions</a> operation
     * or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline GetPermissionRequest& WithPermissionArn(const Aws::String& value) { SetPermissionArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission whose contents you want to retrieve. To
     * find the ARN for a permission, use either the <a>ListPermissions</a> operation
     * or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline GetPermissionRequest& WithPermissionArn(Aws::String&& value) { SetPermissionArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the permission whose contents you want to retrieve. To
     * find the ARN for a permission, use either the <a>ListPermissions</a> operation
     * or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline GetPermissionRequest& WithPermissionArn(const char* value) { SetPermissionArn(value); return *this;}


    /**
     * <p>Specifies identifier for the version of the RAM permission to retrieve. If
     * you don't specify this parameter, the operation retrieves the default
     * version.</p>
     */
    inline int GetPermissionVersion() const{ return m_permissionVersion; }

    /**
     * <p>Specifies identifier for the version of the RAM permission to retrieve. If
     * you don't specify this parameter, the operation retrieves the default
     * version.</p>
     */
    inline bool PermissionVersionHasBeenSet() const { return m_permissionVersionHasBeenSet; }

    /**
     * <p>Specifies identifier for the version of the RAM permission to retrieve. If
     * you don't specify this parameter, the operation retrieves the default
     * version.</p>
     */
    inline void SetPermissionVersion(int value) { m_permissionVersionHasBeenSet = true; m_permissionVersion = value; }

    /**
     * <p>Specifies identifier for the version of the RAM permission to retrieve. If
     * you don't specify this parameter, the operation retrieves the default
     * version.</p>
     */
    inline GetPermissionRequest& WithPermissionVersion(int value) { SetPermissionVersion(value); return *this;}

  private:

    Aws::String m_permissionArn;
    bool m_permissionArnHasBeenSet = false;

    int m_permissionVersion;
    bool m_permissionVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
