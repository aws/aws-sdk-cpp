/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AddonDetails.h>
#include <aws/guardduty/model/ManagementType.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the EKS cluster that has a coverage status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageEksClusterDetails">AWS
   * API Reference</a></p>
   */
  class CoverageEksClusterDetails
  {
  public:
    AWS_GUARDDUTY_API CoverageEksClusterDetails();
    AWS_GUARDDUTY_API CoverageEksClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageEksClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the EKS cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline CoverageEksClusterDetails& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline CoverageEksClusterDetails& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline CoverageEksClusterDetails& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the nodes within the EKS cluster that have a <code>HEALTHY</code>
     * coverage status.</p>
     */
    inline long long GetCoveredNodes() const{ return m_coveredNodes; }
    inline bool CoveredNodesHasBeenSet() const { return m_coveredNodesHasBeenSet; }
    inline void SetCoveredNodes(long long value) { m_coveredNodesHasBeenSet = true; m_coveredNodes = value; }
    inline CoverageEksClusterDetails& WithCoveredNodes(long long value) { SetCoveredNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents all the nodes within the EKS cluster in your account.</p>
     */
    inline long long GetCompatibleNodes() const{ return m_compatibleNodes; }
    inline bool CompatibleNodesHasBeenSet() const { return m_compatibleNodesHasBeenSet; }
    inline void SetCompatibleNodes(long long value) { m_compatibleNodesHasBeenSet = true; m_compatibleNodes = value; }
    inline CoverageEksClusterDetails& WithCompatibleNodes(long long value) { SetCompatibleNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the installed EKS add-on.</p>
     */
    inline const AddonDetails& GetAddonDetails() const{ return m_addonDetails; }
    inline bool AddonDetailsHasBeenSet() const { return m_addonDetailsHasBeenSet; }
    inline void SetAddonDetails(const AddonDetails& value) { m_addonDetailsHasBeenSet = true; m_addonDetails = value; }
    inline void SetAddonDetails(AddonDetails&& value) { m_addonDetailsHasBeenSet = true; m_addonDetails = std::move(value); }
    inline CoverageEksClusterDetails& WithAddonDetails(const AddonDetails& value) { SetAddonDetails(value); return *this;}
    inline CoverageEksClusterDetails& WithAddonDetails(AddonDetails&& value) { SetAddonDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the Amazon EKS add-on GuardDuty agent is managed for this EKS
     * cluster.</p> <p> <code>AUTO_MANAGED</code> indicates GuardDuty deploys and
     * manages updates for this resource.</p> <p> <code>MANUAL</code> indicates that
     * you are responsible to deploy, update, and manage the Amazon EKS add-on
     * GuardDuty agent for this resource.</p>
     */
    inline const ManagementType& GetManagementType() const{ return m_managementType; }
    inline bool ManagementTypeHasBeenSet() const { return m_managementTypeHasBeenSet; }
    inline void SetManagementType(const ManagementType& value) { m_managementTypeHasBeenSet = true; m_managementType = value; }
    inline void SetManagementType(ManagementType&& value) { m_managementTypeHasBeenSet = true; m_managementType = std::move(value); }
    inline CoverageEksClusterDetails& WithManagementType(const ManagementType& value) { SetManagementType(value); return *this;}
    inline CoverageEksClusterDetails& WithManagementType(ManagementType&& value) { SetManagementType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    long long m_coveredNodes;
    bool m_coveredNodesHasBeenSet = false;

    long long m_compatibleNodes;
    bool m_compatibleNodesHasBeenSet = false;

    AddonDetails m_addonDetails;
    bool m_addonDetailsHasBeenSet = false;

    ManagementType m_managementType;
    bool m_managementTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
