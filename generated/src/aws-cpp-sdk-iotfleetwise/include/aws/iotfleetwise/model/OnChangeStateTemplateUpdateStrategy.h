/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Vehicles associated with the state template will stream telemetry data when
   * there is a change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/OnChangeStateTemplateUpdateStrategy">AWS
   * API Reference</a></p>
   */
  class OnChangeStateTemplateUpdateStrategy
  {
  public:
    AWS_IOTFLEETWISE_API OnChangeStateTemplateUpdateStrategy() = default;
    AWS_IOTFLEETWISE_API OnChangeStateTemplateUpdateStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API OnChangeStateTemplateUpdateStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
