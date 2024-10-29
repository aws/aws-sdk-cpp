﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/VpcConfigRequest.h>
#include <aws/eks/model/Logging.h>
#include <aws/eks/model/UpdateAccessConfigRequest.h>
#include <aws/eks/model/UpgradePolicyRequest.h>
#include <aws/eks/model/ZonalShiftConfigRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class UpdateClusterConfigRequest : public EKSRequest
  {
  public:
    AWS_EKS_API UpdateClusterConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterConfig"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateClusterConfigRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateClusterConfigRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateClusterConfigRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfigRequest& GetResourcesVpcConfig() const{ return m_resourcesVpcConfig; }
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }
    inline void SetResourcesVpcConfig(const VpcConfigRequest& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = value; }
    inline void SetResourcesVpcConfig(VpcConfigRequest&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::move(value); }
    inline UpdateClusterConfigRequest& WithResourcesVpcConfig(const VpcConfigRequest& value) { SetResourcesVpcConfig(value); return *this;}
    inline UpdateClusterConfigRequest& WithResourcesVpcConfig(VpcConfigRequest&& value) { SetResourcesVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS cluster control plane logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">CloudWatch Pricing</a>.</p>
     * 
     */
    inline const Logging& GetLogging() const{ return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }
    inline UpdateClusterConfigRequest& WithLogging(const Logging& value) { SetLogging(value); return *this;}
    inline UpdateClusterConfigRequest& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline UpdateClusterConfigRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline UpdateClusterConfigRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline UpdateClusterConfigRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access configuration for the cluster.</p>
     */
    inline const UpdateAccessConfigRequest& GetAccessConfig() const{ return m_accessConfig; }
    inline bool AccessConfigHasBeenSet() const { return m_accessConfigHasBeenSet; }
    inline void SetAccessConfig(const UpdateAccessConfigRequest& value) { m_accessConfigHasBeenSet = true; m_accessConfig = value; }
    inline void SetAccessConfig(UpdateAccessConfigRequest&& value) { m_accessConfigHasBeenSet = true; m_accessConfig = std::move(value); }
    inline UpdateClusterConfigRequest& WithAccessConfig(const UpdateAccessConfigRequest& value) { SetAccessConfig(value); return *this;}
    inline UpdateClusterConfigRequest& WithAccessConfig(UpdateAccessConfigRequest&& value) { SetAccessConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can enable or disable extended support for clusters currently on standard
     * support. You cannot disable extended support once it starts. You must enable
     * extended support before your cluster exits standard support.</p>
     */
    inline const UpgradePolicyRequest& GetUpgradePolicy() const{ return m_upgradePolicy; }
    inline bool UpgradePolicyHasBeenSet() const { return m_upgradePolicyHasBeenSet; }
    inline void SetUpgradePolicy(const UpgradePolicyRequest& value) { m_upgradePolicyHasBeenSet = true; m_upgradePolicy = value; }
    inline void SetUpgradePolicy(UpgradePolicyRequest&& value) { m_upgradePolicyHasBeenSet = true; m_upgradePolicy = std::move(value); }
    inline UpdateClusterConfigRequest& WithUpgradePolicy(const UpgradePolicyRequest& value) { SetUpgradePolicy(value); return *this;}
    inline UpdateClusterConfigRequest& WithUpgradePolicy(UpgradePolicyRequest&& value) { SetUpgradePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable ARC zonal shift for the cluster. If zonal shift is enabled,
     * Amazon Web Services configures zonal autoshift for the cluster.</p> <p>Zonal
     * shift is a feature of Amazon Application Recovery Controller (ARC). ARC zonal
     * shift is designed to be a temporary measure that allows you to move traffic for
     * a resource away from an impaired AZ until the zonal shift expires or you cancel
     * it. You can extend the zonal shift if necessary.</p> <p>You can start a zonal
     * shift for an EKS cluster, or you can allow Amazon Web Services to do it for you
     * by enabling <i>zonal autoshift</i>. This shift updates the flow of east-to-west
     * network traffic in your cluster to only consider network endpoints for Pods
     * running on worker nodes in healthy AZs. Additionally, any ALB or NLB handling
     * ingress traffic for applications in your EKS cluster will automatically route
     * traffic to targets in the healthy AZs. For more information about zonal shift in
     * EKS, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/zone-shift.html">Learn
     * about Amazon Application Recovery Controller (ARC) Zonal Shift in Amazon EKS</a>
     * in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline const ZonalShiftConfigRequest& GetZonalShiftConfig() const{ return m_zonalShiftConfig; }
    inline bool ZonalShiftConfigHasBeenSet() const { return m_zonalShiftConfigHasBeenSet; }
    inline void SetZonalShiftConfig(const ZonalShiftConfigRequest& value) { m_zonalShiftConfigHasBeenSet = true; m_zonalShiftConfig = value; }
    inline void SetZonalShiftConfig(ZonalShiftConfigRequest&& value) { m_zonalShiftConfigHasBeenSet = true; m_zonalShiftConfig = std::move(value); }
    inline UpdateClusterConfigRequest& WithZonalShiftConfig(const ZonalShiftConfigRequest& value) { SetZonalShiftConfig(value); return *this;}
    inline UpdateClusterConfigRequest& WithZonalShiftConfig(ZonalShiftConfigRequest&& value) { SetZonalShiftConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VpcConfigRequest m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet = false;

    Logging m_logging;
    bool m_loggingHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    UpdateAccessConfigRequest m_accessConfig;
    bool m_accessConfigHasBeenSet = false;

    UpgradePolicyRequest m_upgradePolicy;
    bool m_upgradePolicyHasBeenSet = false;

    ZonalShiftConfigRequest m_zonalShiftConfig;
    bool m_zonalShiftConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
