/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>At least one of your specified cluster subnets is in an Availability Zone
   * that does not support Amazon EKS. The exception output specifies the supported
   * Availability Zones for your account, from which you can choose subnets for your
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UnsupportedAvailabilityZoneException">AWS
   * API Reference</a></p>
   */
  class UnsupportedAvailabilityZoneException
  {
  public:
    AWS_EKS_API UnsupportedAvailabilityZoneException() = default;
    AWS_EKS_API UnsupportedAvailabilityZoneException(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API UnsupportedAvailabilityZoneException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>At least one of your specified cluster subnets is in an Availability Zone
     * that does not support Amazon EKS. The exception output specifies the supported
     * Availability Zones for your account, from which you can choose subnets for your
     * cluster.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UnsupportedAvailabilityZoneException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    UnsupportedAvailabilityZoneException& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
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
    UnsupportedAvailabilityZoneException& WithNodegroupName(NodegroupNameT&& value) { SetNodegroupName(std::forward<NodegroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidZones() const { return m_validZones; }
    inline bool ValidZonesHasBeenSet() const { return m_validZonesHasBeenSet; }
    template<typename ValidZonesT = Aws::Vector<Aws::String>>
    void SetValidZones(ValidZonesT&& value) { m_validZonesHasBeenSet = true; m_validZones = std::forward<ValidZonesT>(value); }
    template<typename ValidZonesT = Aws::Vector<Aws::String>>
    UnsupportedAvailabilityZoneException& WithValidZones(ValidZonesT&& value) { SetValidZones(std::forward<ValidZonesT>(value)); return *this;}
    template<typename ValidZonesT = Aws::String>
    UnsupportedAvailabilityZoneException& AddValidZones(ValidZonesT&& value) { m_validZonesHasBeenSet = true; m_validZones.emplace_back(std::forward<ValidZonesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodegroupName;
    bool m_nodegroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_validZones;
    bool m_validZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
