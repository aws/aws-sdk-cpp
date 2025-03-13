/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/DescribeConnectionResourceParameters.h>
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
   * <p>If the connection uses a private OAuth endpoint, the parameters for
   * EventBridge to use when authenticating against the endpoint.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-target-connection-auth.html">Authorization
   * methods for connections</a> in the <i> <i>Amazon EventBridge User Guide</i>
   * </i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/DescribeConnectionConnectivityParameters">AWS
   * API Reference</a></p>
   */
  class DescribeConnectionConnectivityParameters
  {
  public:
    AWS_EVENTBRIDGE_API DescribeConnectionConnectivityParameters() = default;
    AWS_EVENTBRIDGE_API DescribeConnectionConnectivityParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API DescribeConnectionConnectivityParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters for EventBridge to use when invoking the resource
     * endpoint.</p>
     */
    inline const DescribeConnectionResourceParameters& GetResourceParameters() const { return m_resourceParameters; }
    inline bool ResourceParametersHasBeenSet() const { return m_resourceParametersHasBeenSet; }
    template<typename ResourceParametersT = DescribeConnectionResourceParameters>
    void SetResourceParameters(ResourceParametersT&& value) { m_resourceParametersHasBeenSet = true; m_resourceParameters = std::forward<ResourceParametersT>(value); }
    template<typename ResourceParametersT = DescribeConnectionResourceParameters>
    DescribeConnectionConnectivityParameters& WithResourceParameters(ResourceParametersT&& value) { SetResourceParameters(std::forward<ResourceParametersT>(value)); return *this;}
    ///@}
  private:

    DescribeConnectionResourceParameters m_resourceParameters;
    bool m_resourceParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
