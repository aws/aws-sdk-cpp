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
    AWS_GROUNDSTATION_API DataflowEndpoint();
    AWS_GROUNDSTATION_API DataflowEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DataflowEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Socket address of a dataflow endpoint.</p>
     */
    inline const SocketAddress& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const SocketAddress& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(SocketAddress&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline DataflowEndpoint& WithAddress(const SocketAddress& value) { SetAddress(value); return *this;}
    inline DataflowEndpoint& WithAddress(SocketAddress&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum transmission unit (MTU) size in bytes of a dataflow endpoint.</p>
     */
    inline int GetMtu() const{ return m_mtu; }
    inline bool MtuHasBeenSet() const { return m_mtuHasBeenSet; }
    inline void SetMtu(int value) { m_mtuHasBeenSet = true; m_mtu = value; }
    inline DataflowEndpoint& WithMtu(int value) { SetMtu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a dataflow endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataflowEndpoint& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataflowEndpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataflowEndpoint& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of a dataflow endpoint.</p>
     */
    inline const EndpointStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataflowEndpoint& WithStatus(const EndpointStatus& value) { SetStatus(value); return *this;}
    inline DataflowEndpoint& WithStatus(EndpointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    SocketAddress m_address;
    bool m_addressHasBeenSet = false;

    int m_mtu;
    bool m_mtuHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EndpointStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
