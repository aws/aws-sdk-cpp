/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/codestar-connections/model/VpcConfiguration.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>A resource that represents the infrastructure where a third-party provider is
   * installed. The host is used when you create connections to an installed
   * third-party provider type, such as GitHub Enterprise Server. You create one host
   * for all connections to that provider.</p>  <p>A host created through the
   * CLI or the SDK is in `PENDING` status by default. You can make its status
   * `AVAILABLE` by setting up the host in the console.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/Host">AWS
   * API Reference</a></p>
   */
  class Host
  {
  public:
    AWS_CODESTARCONNECTIONS_API Host();
    AWS_CODESTARCONNECTIONS_API Host(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Host& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the host.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the host.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the host.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the host.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the host.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the host.</p>
     */
    inline Host& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the host.</p>
     */
    inline Host& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the host.</p>
     */
    inline Host& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline const Aws::String& GetHostArn() const{ return m_hostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline void SetHostArn(const Aws::String& value) { m_hostArnHasBeenSet = true; m_hostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline void SetHostArn(Aws::String&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline void SetHostArn(const char* value) { m_hostArnHasBeenSet = true; m_hostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline Host& WithHostArn(const Aws::String& value) { SetHostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline Host& WithHostArn(Aws::String&& value) { SetHostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline Host& WithHostArn(const char* value) { SetHostArn(value); return *this;}


    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline Host& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline Host& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline const Aws::String& GetProviderEndpoint() const{ return m_providerEndpoint; }

    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline bool ProviderEndpointHasBeenSet() const { return m_providerEndpointHasBeenSet; }

    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline void SetProviderEndpoint(const Aws::String& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = value; }

    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline void SetProviderEndpoint(Aws::String&& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = std::move(value); }

    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline void SetProviderEndpoint(const char* value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint.assign(value); }

    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline Host& WithProviderEndpoint(const Aws::String& value) { SetProviderEndpoint(value); return *this;}

    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline Host& WithProviderEndpoint(Aws::String&& value) { SetProviderEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline Host& WithProviderEndpoint(const char* value) { SetProviderEndpoint(value); return *this;}


    /**
     * <p>The VPC configuration provisioned for the host.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>The VPC configuration provisioned for the host.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>The VPC configuration provisioned for the host.</p>
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>The VPC configuration provisioned for the host.</p>
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>The VPC configuration provisioned for the host.</p>
     */
    inline Host& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>The VPC configuration provisioned for the host.</p>
     */
    inline Host& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline Host& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline Host& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline Host& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The status description for the host.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status description for the host.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status description for the host.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status description for the host.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status description for the host.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status description for the host.</p>
     */
    inline Host& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status description for the host.</p>
     */
    inline Host& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status description for the host.</p>
     */
    inline Host& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_providerEndpoint;
    bool m_providerEndpointHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
