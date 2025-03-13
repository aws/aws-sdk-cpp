/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/SocketAddress.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/EndpointStatus.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about a dataflow endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowEndpoint">AWS
   * API Reference</a></p>
   */
  class DataflowEndpoint
  {
  public:
    AWS_GROUNDSTATION_API DataflowEndpoint() = default;
    AWS_GROUNDSTATION_API DataflowEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DataflowEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Socket address of a dataflow endpoint.</p>
     */
    inline const SocketAddress& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = SocketAddress>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = SocketAddress>
    DataflowEndpoint& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum transmission unit (MTU) size in bytes of a dataflow endpoint.</p>
     */
    inline int GetMtu() const { return m_mtu; }
    inline bool MtuHasBeenSet() const { return m_mtuHasBeenSet; }
    inline void SetMtu(int value) { m_mtuHasBeenSet = true; m_mtu = value; }
    inline DataflowEndpoint& WithMtu(int value) { SetMtu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataflowEndpoint& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of a dataflow endpoint.</p>
     */
    inline EndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataflowEndpoint& WithStatus(EndpointStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    SocketAddress m_address;
    bool m_addressHasBeenSet = false;

    int m_mtu{0};
    bool m_mtuHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EndpointStatus m_status{EndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
