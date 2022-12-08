/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/VpcConfiguration.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class UpdateHostRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API UpdateHostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHost"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline const Aws::String& GetHostArn() const{ return m_hostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline void SetHostArn(const Aws::String& value) { m_hostArnHasBeenSet = true; m_hostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline void SetHostArn(Aws::String&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline void SetHostArn(const char* value) { m_hostArnHasBeenSet = true; m_hostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline UpdateHostRequest& WithHostArn(const Aws::String& value) { SetHostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline UpdateHostRequest& WithHostArn(Aws::String&& value) { SetHostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be updated.</p>
     */
    inline UpdateHostRequest& WithHostArn(const char* value) { SetHostArn(value); return *this;}


    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline const Aws::String& GetProviderEndpoint() const{ return m_providerEndpoint; }

    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline bool ProviderEndpointHasBeenSet() const { return m_providerEndpointHasBeenSet; }

    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline void SetProviderEndpoint(const Aws::String& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = value; }

    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline void SetProviderEndpoint(Aws::String&& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = std::move(value); }

    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline void SetProviderEndpoint(const char* value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint.assign(value); }

    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline UpdateHostRequest& WithProviderEndpoint(const Aws::String& value) { SetProviderEndpoint(value); return *this;}

    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline UpdateHostRequest& WithProviderEndpoint(Aws::String&& value) { SetProviderEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL or endpoint of the host to be updated.</p>
     */
    inline UpdateHostRequest& WithProviderEndpoint(const char* value) { SetProviderEndpoint(value); return *this;}


    /**
     * <p>The VPC configuration of the host to be updated. A VPC must be configured and
     * the infrastructure to be represented by the host must already be connected to
     * the VPC.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>The VPC configuration of the host to be updated. A VPC must be configured and
     * the infrastructure to be represented by the host must already be connected to
     * the VPC.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>The VPC configuration of the host to be updated. A VPC must be configured and
     * the infrastructure to be represented by the host must already be connected to
     * the VPC.</p>
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>The VPC configuration of the host to be updated. A VPC must be configured and
     * the infrastructure to be represented by the host must already be connected to
     * the VPC.</p>
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>The VPC configuration of the host to be updated. A VPC must be configured and
     * the infrastructure to be represented by the host must already be connected to
     * the VPC.</p>
     */
    inline UpdateHostRequest& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>The VPC configuration of the host to be updated. A VPC must be configured and
     * the infrastructure to be represented by the host must already be connected to
     * the VPC.</p>
     */
    inline UpdateHostRequest& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;

    Aws::String m_providerEndpoint;
    bool m_providerEndpointHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
