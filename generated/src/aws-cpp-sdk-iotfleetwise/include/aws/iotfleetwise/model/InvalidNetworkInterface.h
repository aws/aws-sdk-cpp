/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/NetworkInterfaceFailureReason.h>
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
   * <p>A reason a vehicle network interface isn't valid.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/InvalidNetworkInterface">AWS
   * API Reference</a></p>
   */
  class InvalidNetworkInterface
  {
  public:
    AWS_IOTFLEETWISE_API InvalidNetworkInterface() = default;
    AWS_IOTFLEETWISE_API InvalidNetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidNetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the interface that isn't valid.</p>
     */
    inline const Aws::String& GetInterfaceId() const { return m_interfaceId; }
    inline bool InterfaceIdHasBeenSet() const { return m_interfaceIdHasBeenSet; }
    template<typename InterfaceIdT = Aws::String>
    void SetInterfaceId(InterfaceIdT&& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = std::forward<InterfaceIdT>(value); }
    template<typename InterfaceIdT = Aws::String>
    InvalidNetworkInterface& WithInterfaceId(InterfaceIdT&& value) { SetInterfaceId(std::forward<InterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about why the interface isn't valid. </p>
     */
    inline NetworkInterfaceFailureReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(NetworkInterfaceFailureReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline InvalidNetworkInterface& WithReason(NetworkInterfaceFailureReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_interfaceId;
    bool m_interfaceIdHasBeenSet = false;

    NetworkInterfaceFailureReason m_reason{NetworkInterfaceFailureReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
