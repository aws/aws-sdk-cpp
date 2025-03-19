/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>A single controller area network (CAN) device interface.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CanInterface">AWS
   * API Reference</a></p>
   */
  class CanInterface
  {
  public:
    AWS_IOTFLEETWISE_API CanInterface() = default;
    AWS_IOTFLEETWISE_API CanInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CanInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the interface.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CanInterface& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the communication protocol for the interface.</p>
     */
    inline const Aws::String& GetProtocolName() const { return m_protocolName; }
    inline bool ProtocolNameHasBeenSet() const { return m_protocolNameHasBeenSet; }
    template<typename ProtocolNameT = Aws::String>
    void SetProtocolName(ProtocolNameT&& value) { m_protocolNameHasBeenSet = true; m_protocolName = std::forward<ProtocolNameT>(value); }
    template<typename ProtocolNameT = Aws::String>
    CanInterface& WithProtocolName(ProtocolNameT&& value) { SetProtocolName(std::forward<ProtocolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the communication protocol for the interface.</p>
     */
    inline const Aws::String& GetProtocolVersion() const { return m_protocolVersion; }
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }
    template<typename ProtocolVersionT = Aws::String>
    void SetProtocolVersion(ProtocolVersionT&& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = std::forward<ProtocolVersionT>(value); }
    template<typename ProtocolVersionT = Aws::String>
    CanInterface& WithProtocolVersion(ProtocolVersionT&& value) { SetProtocolVersion(std::forward<ProtocolVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_protocolName;
    bool m_protocolNameHasBeenSet = false;

    Aws::String m_protocolVersion;
    bool m_protocolVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
