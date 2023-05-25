/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class DescribeFargateProfileRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DescribeFargateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFargateProfile"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon EKS cluster associated with the Fargate profile.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the Fargate profile.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the Fargate profile.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the Amazon EKS cluster associated with the Fargate profile.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the Amazon EKS cluster associated with the Fargate profile.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the Amazon EKS cluster associated with the Fargate profile.</p>
     */
    inline DescribeFargateProfileRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster associated with the Fargate profile.</p>
     */
    inline DescribeFargateProfileRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster associated with the Fargate profile.</p>
     */
    inline DescribeFargateProfileRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline const Aws::String& GetFargateProfileName() const{ return m_fargateProfileName; }

    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline bool FargateProfileNameHasBeenSet() const { return m_fargateProfileNameHasBeenSet; }

    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline void SetFargateProfileName(const Aws::String& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = value; }

    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline void SetFargateProfileName(Aws::String&& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = std::move(value); }

    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline void SetFargateProfileName(const char* value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName.assign(value); }

    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline DescribeFargateProfileRequest& WithFargateProfileName(const Aws::String& value) { SetFargateProfileName(value); return *this;}

    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline DescribeFargateProfileRequest& WithFargateProfileName(Aws::String&& value) { SetFargateProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline DescribeFargateProfileRequest& WithFargateProfileName(const char* value) { SetFargateProfileName(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_fargateProfileName;
    bool m_fargateProfileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
