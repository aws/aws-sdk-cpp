/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/CodeConnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/VpcConfiguration.h>
#include <utility>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{

  /**
   */
  class UpdateHostRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API UpdateHostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHost"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline const Aws::String& GetHostArn() const{ return m_hostArn; }
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }
    inline void SetHostArn(const Aws::String& value) { m_hostArnHasBeenSet = true; m_hostArn = value; }
    inline void SetHostArn(Aws::String&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::move(value); }
    inline void SetHostArn(const char* value) { m_hostArnHasBeenSet = true; m_hostArn.assign(value); }
    inline UpdateHostRequest& WithHostArn(const Aws::String& value) { SetHostArn(value); return *this;}
    inline UpdateHostRequest& WithHostArn(Aws::String&& value) { SetHostArn(std::move(value)); return *this;}
    inline UpdateHostRequest& WithHostArn(const char* value) { SetHostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline const Aws::String& GetProviderEndpoint() const{ return m_providerEndpoint; }
    inline bool ProviderEndpointHasBeenSet() const { return m_providerEndpointHasBeenSet; }
    inline void SetProviderEndpoint(const Aws::String& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = value; }
    inline void SetProviderEndpoint(Aws::String&& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = std::move(value); }
    inline void SetProviderEndpoint(const char* value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint.assign(value); }
    inline UpdateHostRequest& WithProviderEndpoint(const Aws::String& value) { SetProviderEndpoint(value); return *this;}
    inline UpdateHostRequest& WithProviderEndpoint(Aws::String&& value) { SetProviderEndpoint(std::move(value)); return *this;}
    inline UpdateHostRequest& WithProviderEndpoint(const char* value) { SetProviderEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration of the host to be updated. A VPC must be configured and
     * the infrastructure to be represented by the host must already be connected to
     * the VPC.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline UpdateHostRequest& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline UpdateHostRequest& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;

    Aws::String m_providerEndpoint;
    bool m_providerEndpointHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
