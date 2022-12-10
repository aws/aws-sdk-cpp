/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class RegisterResourceRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API RegisterResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterResource"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline RegisterResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline RegisterResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline RegisterResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Designates an Identity and Access Management (IAM) service-linked role by
     * registering this role with the Data Catalog. A service-linked role is a unique
     * type of IAM role that is linked directly to Lake Formation.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/service-linked-roles.html">Using
     * Service-Linked Roles for Lake Formation</a>.</p>
     */
    inline bool GetUseServiceLinkedRole() const{ return m_useServiceLinkedRole; }

    /**
     * <p>Designates an Identity and Access Management (IAM) service-linked role by
     * registering this role with the Data Catalog. A service-linked role is a unique
     * type of IAM role that is linked directly to Lake Formation.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/service-linked-roles.html">Using
     * Service-Linked Roles for Lake Formation</a>.</p>
     */
    inline bool UseServiceLinkedRoleHasBeenSet() const { return m_useServiceLinkedRoleHasBeenSet; }

    /**
     * <p>Designates an Identity and Access Management (IAM) service-linked role by
     * registering this role with the Data Catalog. A service-linked role is a unique
     * type of IAM role that is linked directly to Lake Formation.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/service-linked-roles.html">Using
     * Service-Linked Roles for Lake Formation</a>.</p>
     */
    inline void SetUseServiceLinkedRole(bool value) { m_useServiceLinkedRoleHasBeenSet = true; m_useServiceLinkedRole = value; }

    /**
     * <p>Designates an Identity and Access Management (IAM) service-linked role by
     * registering this role with the Data Catalog. A service-linked role is a unique
     * type of IAM role that is linked directly to Lake Formation.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/service-linked-roles.html">Using
     * Service-Linked Roles for Lake Formation</a>.</p>
     */
    inline RegisterResourceRequest& WithUseServiceLinkedRole(bool value) { SetUseServiceLinkedRole(value); return *this;}


    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline RegisterResourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline RegisterResourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline RegisterResourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    bool m_useServiceLinkedRole;
    bool m_useServiceLinkedRoleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
