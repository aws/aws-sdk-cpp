﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The specified resource could not be found. You can view your available
   * clusters with <code>ListClusters</code>. You can view your available managed
   * node groups with <code>ListNodegroups</code>. Amazon EKS clusters and node
   * groups are Amazon Web Services Region specific.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_EKS_API ResourceNotFoundException();
    AWS_EKS_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline ResourceNotFoundException& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline ResourceNotFoundException& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline ResourceNotFoundException& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }
    inline ResourceNotFoundException& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}
    inline ResourceNotFoundException& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}
    inline ResourceNotFoundException& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Fargate profile associated with the exception.</p>
     */
    inline const Aws::String& GetFargateProfileName() const{ return m_fargateProfileName; }
    inline bool FargateProfileNameHasBeenSet() const { return m_fargateProfileNameHasBeenSet; }
    inline void SetFargateProfileName(const Aws::String& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = value; }
    inline void SetFargateProfileName(Aws::String&& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = std::move(value); }
    inline void SetFargateProfileName(const char* value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName.assign(value); }
    inline ResourceNotFoundException& WithFargateProfileName(const Aws::String& value) { SetFargateProfileName(value); return *this;}
    inline ResourceNotFoundException& WithFargateProfileName(Aws::String&& value) { SetFargateProfileName(std::move(value)); return *this;}
    inline ResourceNotFoundException& WithFargateProfileName(const char* value) { SetFargateProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS add-on name associated with the exception.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }
    inline ResourceNotFoundException& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline ResourceNotFoundException& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline ResourceNotFoundException& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS subscription ID with the exception.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }
    inline ResourceNotFoundException& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}
    inline ResourceNotFoundException& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}
    inline ResourceNotFoundException& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS message associated with the exception.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

    Aws::String m_fargateProfileName;
    bool m_fargateProfileNameHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
