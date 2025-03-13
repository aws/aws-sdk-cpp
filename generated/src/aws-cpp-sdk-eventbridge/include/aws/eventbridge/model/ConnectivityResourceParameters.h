/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/ConnectivityResourceConfigurationArn.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The parameters for EventBridge to use when invoking the resource
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ConnectivityResourceParameters">AWS
   * API Reference</a></p>
   */
  class ConnectivityResourceParameters
  {
  public:
    AWS_EVENTBRIDGE_API ConnectivityResourceParameters() = default;
    AWS_EVENTBRIDGE_API ConnectivityResourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ConnectivityResourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters for EventBridge to use when invoking the resource
     * endpoint.</p>
     */
    inline const ConnectivityResourceConfigurationArn& GetResourceParameters() const { return m_resourceParameters; }
    inline bool ResourceParametersHasBeenSet() const { return m_resourceParametersHasBeenSet; }
    template<typename ResourceParametersT = ConnectivityResourceConfigurationArn>
    void SetResourceParameters(ResourceParametersT&& value) { m_resourceParametersHasBeenSet = true; m_resourceParameters = std::forward<ResourceParametersT>(value); }
    template<typename ResourceParametersT = ConnectivityResourceConfigurationArn>
    ConnectivityResourceParameters& WithResourceParameters(ResourceParametersT&& value) { SetResourceParameters(std::forward<ResourceParametersT>(value)); return *this;}
    ///@}
  private:

    ConnectivityResourceConfigurationArn m_resourceParameters;
    bool m_resourceParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
