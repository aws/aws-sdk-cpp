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
    AWS_EKS_API ConnectorConfigRequest();
    AWS_EKS_API ConnectorConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ConnectorConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline ConnectorConfigRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline ConnectorConfigRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role that is authorized to request the
     * connector configuration.</p>
     */
    inline ConnectorConfigRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The cloud provider for the target cluster to connect.</p>
     */
    inline const ConnectorConfigProvider& GetProvider() const{ return m_provider; }

    /**
     * <p>The cloud provider for the target cluster to connect.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The cloud provider for the target cluster to connect.</p>
     */
    inline void SetProvider(const ConnectorConfigProvider& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The cloud provider for the target cluster to connect.</p>
     */
    inline void SetProvider(ConnectorConfigProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The cloud provider for the target cluster to connect.</p>
     */
    inline ConnectorConfigRequest& WithProvider(const ConnectorConfigProvider& value) { SetProvider(value); return *this;}

    /**
     * <p>The cloud provider for the target cluster to connect.</p>
     */
    inline ConnectorConfigRequest& WithProvider(ConnectorConfigProvider&& value) { SetProvider(std::move(value)); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ConnectorConfigProvider m_provider;
    bool m_providerHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
