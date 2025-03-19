/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The full description of your connected cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ConnectorConfigResponse">AWS
   * API Reference</a></p>
   */
  class ConnectorConfigResponse
  {
  public:
    AWS_EKS_API ConnectorConfigResponse() = default;
    AWS_EKS_API ConnectorConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ConnectorConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique ID associated with the cluster for registration purposes.</p>
     */
    inline const Aws::String& GetActivationId() const { return m_activationId; }
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }
    template<typename ActivationIdT = Aws::String>
    void SetActivationId(ActivationIdT&& value) { m_activationIdHasBeenSet = true; m_activationId = std::forward<ActivationIdT>(value); }
    template<typename ActivationIdT = Aws::String>
    ConnectorConfigResponse& WithActivationId(ActivationIdT&& value) { SetActivationId(std::forward<ActivationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique code associated with the cluster for registration purposes.</p>
     */
    inline const Aws::String& GetActivationCode() const { return m_activationCode; }
    inline bool ActivationCodeHasBeenSet() const { return m_activationCodeHasBeenSet; }
    template<typename ActivationCodeT = Aws::String>
    void SetActivationCode(ActivationCodeT&& value) { m_activationCodeHasBeenSet = true; m_activationCode = std::forward<ActivationCodeT>(value); }
    template<typename ActivationCodeT = Aws::String>
    ConnectorConfigResponse& WithActivationCode(ActivationCodeT&& value) { SetActivationCode(std::forward<ActivationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the connected cluster. The cluster's YAML file must be
     * applied through the native provider.</p>
     */
    inline const Aws::Utils::DateTime& GetActivationExpiry() const { return m_activationExpiry; }
    inline bool ActivationExpiryHasBeenSet() const { return m_activationExpiryHasBeenSet; }
    template<typename ActivationExpiryT = Aws::Utils::DateTime>
    void SetActivationExpiry(ActivationExpiryT&& value) { m_activationExpiryHasBeenSet = true; m_activationExpiry = std::forward<ActivationExpiryT>(value); }
    template<typename ActivationExpiryT = Aws::Utils::DateTime>
    ConnectorConfigResponse& WithActivationExpiry(ActivationExpiryT&& value) { SetActivationExpiry(std::forward<ActivationExpiryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's cloud service provider.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    ConnectorConfigResponse& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role to communicate with services from
     * the connected Kubernetes cluster.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ConnectorConfigResponse& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet = false;

    Aws::String m_activationCode;
    bool m_activationCodeHasBeenSet = false;

    Aws::Utils::DateTime m_activationExpiry{};
    bool m_activationExpiryHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
