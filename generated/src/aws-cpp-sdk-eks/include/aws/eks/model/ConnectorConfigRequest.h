/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ConnectorConfigProvider.h>
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
   * <p>The configuration sent to a cluster for configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ConnectorConfigRequest">AWS
   * API Reference</a></p>
   */
  class ConnectorConfigRequest
  {
  public:
    AWS_EKS_API ConnectorConfigRequest() = default;
    AWS_EKS_API ConnectorConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ConnectorConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ConnectorConfigRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cloud provider for the target cluster to connect.</p>
     */
    inline ConnectorConfigProvider GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(ConnectorConfigProvider value) { m_providerHasBeenSet = true; m_provider = value; }
    inline ConnectorConfigRequest& WithProvider(ConnectorConfigProvider value) { SetProvider(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ConnectorConfigProvider m_provider{ConnectorConfigProvider::NOT_SET};
    bool m_providerHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
