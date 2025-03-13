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
    AWS_CODESTARCONNECTIONS_API Host() = default;
    AWS_CODESTARCONNECTIONS_API Host(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Host& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the host.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Host& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the host.</p>
     */
    inline const Aws::String& GetHostArn() const { return m_hostArn; }
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }
    template<typename HostArnT = Aws::String>
    void SetHostArn(HostArnT&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::forward<HostArnT>(value); }
    template<typename HostArnT = Aws::String>
    Host& WithHostArn(HostArnT&& value) { SetHostArn(std::forward<HostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the installed provider to be associated with your connection. The
     * host resource represents the infrastructure where your provider type is
     * installed. The valid provider type is GitHub Enterprise Server.</p>
     */
    inline ProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(ProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline Host& WithProviderType(ProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the infrastructure where your provider type is installed.</p>
     */
    inline const Aws::String& GetProviderEndpoint() const { return m_providerEndpoint; }
    inline bool ProviderEndpointHasBeenSet() const { return m_providerEndpointHasBeenSet; }
    template<typename ProviderEndpointT = Aws::String>
    void SetProviderEndpoint(ProviderEndpointT&& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = std::forward<ProviderEndpointT>(value); }
    template<typename ProviderEndpointT = Aws::String>
    Host& WithProviderEndpoint(ProviderEndpointT&& value) { SetProviderEndpoint(std::forward<ProviderEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration provisioned for the host.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = VpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = VpcConfiguration>
    Host& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the host, such as PENDING, AVAILABLE, VPC_CONFIG_DELETING,
     * VPC_CONFIG_INITIALIZING, and VPC_CONFIG_FAILED_INITIALIZATION.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Host& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status description for the host.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    Host& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;

    ProviderType m_providerType{ProviderType::NOT_SET};
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
