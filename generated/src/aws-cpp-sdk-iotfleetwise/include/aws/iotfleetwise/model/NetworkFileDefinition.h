/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/CanDbcDefinition.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Specifications for defining a vehicle network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/NetworkFileDefinition">AWS
   * API Reference</a></p>
   */
  class NetworkFileDefinition
  {
  public:
    AWS_IOTFLEETWISE_API NetworkFileDefinition() = default;
    AWS_IOTFLEETWISE_API NetworkFileDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API NetworkFileDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information, including CAN DBC files, about the configurations used to create
     * a decoder manifest.</p>
     */
    inline const CanDbcDefinition& GetCanDbc() const { return m_canDbc; }
    inline bool CanDbcHasBeenSet() const { return m_canDbcHasBeenSet; }
    template<typename CanDbcT = CanDbcDefinition>
    void SetCanDbc(CanDbcT&& value) { m_canDbcHasBeenSet = true; m_canDbc = std::forward<CanDbcT>(value); }
    template<typename CanDbcT = CanDbcDefinition>
    NetworkFileDefinition& WithCanDbc(CanDbcT&& value) { SetCanDbc(std::forward<CanDbcT>(value)); return *this;}
    ///@}
  private:

    CanDbcDefinition m_canDbc;
    bool m_canDbcHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
