/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticsearchService
{
namespace Model
{

  class DryRunResults
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DryRunResults() = default;
    AWS_ELASTICSEARCHSERVICE_API DryRunResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API DryRunResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the deployment mechanism through which the update shall be applied
     * on the domain. Possible responses are <code>Blue/Green</code> (The update will
     * require a blue/green deployment.) <code>DynamicUpdate</code> (The update can be
     * applied in-place without a Blue/Green deployment required.)
     * <code>Undetermined</code> (The domain is undergoing an update which needs to
     * complete before the deployment type can be predicted.) <code>None</code> (The
     * configuration change matches the current configuration and will not result in
     * any update.) </p>
     */
    inline const Aws::String& GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    template<typename DeploymentTypeT = Aws::String>
    void SetDeploymentType(DeploymentTypeT&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::forward<DeploymentTypeT>(value); }
    template<typename DeploymentTypeT = Aws::String>
    DryRunResults& WithDeploymentType(DeploymentTypeT&& value) { SetDeploymentType(std::forward<DeploymentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an optional message associated with the DryRunResults.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DryRunResults& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
