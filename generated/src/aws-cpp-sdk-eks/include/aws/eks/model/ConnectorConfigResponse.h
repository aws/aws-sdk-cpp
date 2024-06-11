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
    AWS_EKS_API ConnectorConfigResponse();
    AWS_EKS_API ConnectorConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ConnectorConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique ID associated with the cluster for registration purposes.</p>
     */
    inline const Aws::String& GetActivationId() const{ return m_activationId; }
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }
    inline void SetActivationId(const Aws::String& value) { m_activationIdHasBeenSet = true; m_activationId = value; }
    inline void SetActivationId(Aws::String&& value) { m_activationIdHasBeenSet = true; m_activationId = std::move(value); }
    inline void SetActivationId(const char* value) { m_activationIdHasBeenSet = true; m_activationId.assign(value); }
    inline ConnectorConfigResponse& WithActivationId(const Aws::String& value) { SetActivationId(value); return *this;}
    inline ConnectorConfigResponse& WithActivationId(Aws::String&& value) { SetActivationId(std::move(value)); return *this;}
    inline ConnectorConfigResponse& WithActivationId(const char* value) { SetActivationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique code associated with the cluster for registration purposes.</p>
     */
    inline const Aws::String& GetActivationCode() const{ return m_activationCode; }
    inline bool ActivationCodeHasBeenSet() const { return m_activationCodeHasBeenSet; }
    inline void SetActivationCode(const Aws::String& value) { m_activationCodeHasBeenSet = true; m_activationCode = value; }
    inline void SetActivationCode(Aws::String&& value) { m_activationCodeHasBeenSet = true; m_activationCode = std::move(value); }
    inline void SetActivationCode(const char* value) { m_activationCodeHasBeenSet = true; m_activationCode.assign(value); }
    inline ConnectorConfigResponse& WithActivationCode(const Aws::String& value) { SetActivationCode(value); return *this;}
    inline ConnectorConfigResponse& WithActivationCode(Aws::String&& value) { SetActivationCode(std::move(value)); return *this;}
    inline ConnectorConfigResponse& WithActivationCode(const char* value) { SetActivationCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the connected cluster. The cluster's YAML file must be
     * applied through the native provider.</p>
     */
    inline const Aws::Utils::DateTime& GetActivationExpiry() const{ return m_activationExpiry; }
    inline bool ActivationExpiryHasBeenSet() const { return m_activationExpiryHasBeenSet; }
    inline void SetActivationExpiry(const Aws::Utils::DateTime& value) { m_activationExpiryHasBeenSet = true; m_activationExpiry = value; }
    inline void SetActivationExpiry(Aws::Utils::DateTime&& value) { m_activationExpiryHasBeenSet = true; m_activationExpiry = std::move(value); }
    inline ConnectorConfigResponse& WithActivationExpiry(const Aws::Utils::DateTime& value) { SetActivationExpiry(value); return *this;}
    inline ConnectorConfigResponse& WithActivationExpiry(Aws::Utils::DateTime&& value) { SetActivationExpiry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's cloud service provider.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }
    inline ConnectorConfigResponse& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline ConnectorConfigResponse& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline ConnectorConfigResponse& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role to communicate with services from
     * the connected Kubernetes cluster.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ConnectorConfigResponse& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ConnectorConfigResponse& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ConnectorConfigResponse& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet = false;

    Aws::String m_activationCode;
    bool m_activationCodeHasBeenSet = false;

    Aws::Utils::DateTime m_activationExpiry;
    bool m_activationExpiryHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
