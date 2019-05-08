/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/VpcConfigRequest.h>
#include <aws/eks/model/Logging.h>
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
  class AWS_EKS_API UpdateClusterConfigRequest : public EKSRequest
  {
  public:
    UpdateClusterConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline UpdateClusterConfigRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline UpdateClusterConfigRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster to update.</p>
     */
    inline UpdateClusterConfigRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const VpcConfigRequest& GetResourcesVpcConfig() const{ return m_resourcesVpcConfig; }

    
    inline bool ResourcesVpcConfigHasBeenSet() const { return m_resourcesVpcConfigHasBeenSet; }

    
    inline void SetResourcesVpcConfig(const VpcConfigRequest& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = value; }

    
    inline void SetResourcesVpcConfig(VpcConfigRequest&& value) { m_resourcesVpcConfigHasBeenSet = true; m_resourcesVpcConfig = std::move(value); }

    
    inline UpdateClusterConfigRequest& WithResourcesVpcConfig(const VpcConfigRequest& value) { SetResourcesVpcConfig(value); return *this;}

    
    inline UpdateClusterConfigRequest& WithResourcesVpcConfig(VpcConfigRequest&& value) { SetResourcesVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline UpdateClusterConfigRequest& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>Enable or disable exporting the Kubernetes control plane logs for your
     * cluster to CloudWatch Logs. By default, cluster control plane logs aren't
     * exported to CloudWatch Logs. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
     * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p> <note> <p>CloudWatch Logs ingestion, archive storage, and data
     * scanning rates apply to exported control plane logs. For more information, see
     * <a href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
     * Pricing</a>.</p> </note>
     */
    inline UpdateClusterConfigRequest& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateClusterConfigRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateClusterConfigRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline UpdateClusterConfigRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    VpcConfigRequest m_resourcesVpcConfig;
    bool m_resourcesVpcConfigHasBeenSet;

    Logging m_logging;
    bool m_loggingHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
