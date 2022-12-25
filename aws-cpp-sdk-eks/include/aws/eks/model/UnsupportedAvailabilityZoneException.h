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
    AWS_EKS_API UnsupportedAvailabilityZoneException();
    AWS_EKS_API UnsupportedAvailabilityZoneException(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API UnsupportedAvailabilityZoneException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline UnsupportedAvailabilityZoneException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline UnsupportedAvailabilityZoneException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline UnsupportedAvailabilityZoneException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline UnsupportedAvailabilityZoneException& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline UnsupportedAvailabilityZoneException& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The Amazon EKS cluster associated with the exception.</p>
     */
    inline UnsupportedAvailabilityZoneException& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline const Aws::String& GetNodegroupName() const{ return m_nodegroupName; }

    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline bool NodegroupNameHasBeenSet() const { return m_nodegroupNameHasBeenSet; }

    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline void SetNodegroupName(const Aws::String& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = value; }

    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline void SetNodegroupName(Aws::String&& value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName = std::move(value); }

    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline void SetNodegroupName(const char* value) { m_nodegroupNameHasBeenSet = true; m_nodegroupName.assign(value); }

    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline UnsupportedAvailabilityZoneException& WithNodegroupName(const Aws::String& value) { SetNodegroupName(value); return *this;}

    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline UnsupportedAvailabilityZoneException& WithNodegroupName(Aws::String&& value) { SetNodegroupName(std::move(value)); return *this;}

    /**
     * <p>The Amazon EKS managed node group associated with the exception.</p>
     */
    inline UnsupportedAvailabilityZoneException& WithNodegroupName(const char* value) { SetNodegroupName(value); return *this;}


    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidZones() const{ return m_validZones; }

    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline bool ValidZonesHasBeenSet() const { return m_validZonesHasBeenSet; }

    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline void SetValidZones(const Aws::Vector<Aws::String>& value) { m_validZonesHasBeenSet = true; m_validZones = value; }

    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline void SetValidZones(Aws::Vector<Aws::String>&& value) { m_validZonesHasBeenSet = true; m_validZones = std::move(value); }

    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline UnsupportedAvailabilityZoneException& WithValidZones(const Aws::Vector<Aws::String>& value) { SetValidZones(value); return *this;}

    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline UnsupportedAvailabilityZoneException& WithValidZones(Aws::Vector<Aws::String>&& value) { SetValidZones(std::move(value)); return *this;}

    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline UnsupportedAvailabilityZoneException& AddValidZones(const Aws::String& value) { m_validZonesHasBeenSet = true; m_validZones.push_back(value); return *this; }

    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline UnsupportedAvailabilityZoneException& AddValidZones(Aws::String&& value) { m_validZonesHasBeenSet = true; m_validZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The supported Availability Zones for your account. Choose subnets in these
     * Availability Zones for your cluster.</p>
     */
    inline UnsupportedAvailabilityZoneException& AddValidZones(const char* value) { m_validZonesHasBeenSet = true; m_validZones.push_back(value); return *this; }

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
