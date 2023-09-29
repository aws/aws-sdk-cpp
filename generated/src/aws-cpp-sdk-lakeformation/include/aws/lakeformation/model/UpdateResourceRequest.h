﻿/**
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
  class UpdateResourceRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API UpdateResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResource"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline UpdateResourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline UpdateResourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline UpdateResourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The resource ARN.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The resource ARN.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The resource ARN.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The resource ARN.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The resource ARN.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The resource ARN.</p>
     */
    inline UpdateResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The resource ARN.</p>
     */
    inline UpdateResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The resource ARN.</p>
     */
    inline UpdateResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Whether or not the resource is a federated resource.</p>
     */
    inline bool GetWithFederation() const{ return m_withFederation; }

    /**
     * <p>Whether or not the resource is a federated resource.</p>
     */
    inline bool WithFederationHasBeenSet() const { return m_withFederationHasBeenSet; }

    /**
     * <p>Whether or not the resource is a federated resource.</p>
     */
    inline void SetWithFederation(bool value) { m_withFederationHasBeenSet = true; m_withFederation = value; }

    /**
     * <p>Whether or not the resource is a federated resource.</p>
     */
    inline UpdateResourceRequest& WithWithFederation(bool value) { SetWithFederation(value); return *this;}


    /**
     * <p> Specifies whether the data access of tables pointing to the location can be
     * managed by both Lake Formation permissions as well as Amazon S3 bucket policies.
     * </p>
     */
    inline bool GetHybridAccessEnabled() const{ return m_hybridAccessEnabled; }

    /**
     * <p> Specifies whether the data access of tables pointing to the location can be
     * managed by both Lake Formation permissions as well as Amazon S3 bucket policies.
     * </p>
     */
    inline bool HybridAccessEnabledHasBeenSet() const { return m_hybridAccessEnabledHasBeenSet; }

    /**
     * <p> Specifies whether the data access of tables pointing to the location can be
     * managed by both Lake Formation permissions as well as Amazon S3 bucket policies.
     * </p>
     */
    inline void SetHybridAccessEnabled(bool value) { m_hybridAccessEnabledHasBeenSet = true; m_hybridAccessEnabled = value; }

    /**
     * <p> Specifies whether the data access of tables pointing to the location can be
     * managed by both Lake Formation permissions as well as Amazon S3 bucket policies.
     * </p>
     */
    inline UpdateResourceRequest& WithHybridAccessEnabled(bool value) { SetHybridAccessEnabled(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    bool m_withFederation;
    bool m_withFederationHasBeenSet = false;

    bool m_hybridAccessEnabled;
    bool m_hybridAccessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
