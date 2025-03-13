/**
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
   * <p>The request is invalid given the state of the cluster. Check the state of the
   * cluster and the associated operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_EKS_API InvalidRequestException() = default;
    AWS_EKS_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    InvalidRequestException& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline const Aws::String& GetNodegroupName() const { return m_nodegroupName; }
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }
    template<typename NodegroupNameT = Aws::String>
    void SetNodegroupName(NodegroupNameT&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::forward<NodegroupNameT>(value); }
    template<typename NodegroupNameT = Aws::String>
    InvalidRequestException& WithNodegroupName(NodegroupNameT&& value) { SetNodegroupName(std::forward<NodegroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request is invalid given the state of the add-on name. Check the state of
     * the cluster and the associated operations.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    InvalidRequestException& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS subscription ID with the exception.</p>
     */
    inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
    template<typename SubscriptionIdT = Aws::String>
    void SetSubscriptionId(SubscriptionIdT&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::forward<SubscriptionIdT>(value); }
    template<typename SubscriptionIdT = Aws::String>
    InvalidRequestException& WithSubscriptionId(SubscriptionIdT&& value) { SetSubscriptionId(std::forward<SubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS add-on name associated with the exception.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidRequestException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

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
