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


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline DescribeFargateProfileRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline DescribeFargateProfileRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline DescribeFargateProfileRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Fargate profile to describe.</p>
     */
    inline const Aws::String& GetFargateProfileName() const{ return m_fargateProfileName; }
    inline bool FargateProfileNameHasBeenSet() const { return m_fargateProfileNameHasBeenSet; }
    inline void SetFargateProfileName(const Aws::String& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = value; }
    inline void SetFargateProfileName(Aws::String&& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = std::move(value); }
    inline void SetFargateProfileName(const char* value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName.assign(value); }
    inline DescribeFargateProfileRequest& WithFargateProfileName(const Aws::String& value) { SetFargateProfileName(value); return *this;}
    inline DescribeFargateProfileRequest& WithFargateProfileName(Aws::String&& value) { SetFargateProfileName(std::move(value)); return *this;}
    inline DescribeFargateProfileRequest& WithFargateProfileName(const char* value) { SetFargateProfileName(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_fargateProfileName;
    bool m_fargateProfileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
