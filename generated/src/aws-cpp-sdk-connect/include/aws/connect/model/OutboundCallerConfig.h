/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The outbound caller ID name, number, and outbound whisper flow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OutboundCallerConfig">AWS
   * API Reference</a></p>
   */
  class OutboundCallerConfig
  {
  public:
    AWS_CONNECT_API OutboundCallerConfig() = default;
    AWS_CONNECT_API OutboundCallerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OutboundCallerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The caller ID name.</p>
     */
    inline const Aws::String& GetOutboundCallerIdName() const { return m_outboundCallerIdName; }
    inline bool OutboundCallerIdNameHasBeenSet() const { return m_outboundCallerIdNameHasBeenSet; }
    template<typename OutboundCallerIdNameT = Aws::String>
    void SetOutboundCallerIdName(OutboundCallerIdNameT&& value) { m_outboundCallerIdNameHasBeenSet = true; m_outboundCallerIdName = std::forward<OutboundCallerIdNameT>(value); }
    template<typename OutboundCallerIdNameT = Aws::String>
    OutboundCallerConfig& WithOutboundCallerIdName(OutboundCallerIdNameT&& value) { SetOutboundCallerIdName(std::forward<OutboundCallerIdNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The caller ID number.</p>
     */
    inline const Aws::String& GetOutboundCallerIdNumberId() const { return m_outboundCallerIdNumberId; }
    inline bool OutboundCallerIdNumberIdHasBeenSet() const { return m_outboundCallerIdNumberIdHasBeenSet; }
    template<typename OutboundCallerIdNumberIdT = Aws::String>
    void SetOutboundCallerIdNumberId(OutboundCallerIdNumberIdT&& value) { m_outboundCallerIdNumberIdHasBeenSet = true; m_outboundCallerIdNumberId = std::forward<OutboundCallerIdNumberIdT>(value); }
    template<typename OutboundCallerIdNumberIdT = Aws::String>
    OutboundCallerConfig& WithOutboundCallerIdNumberId(OutboundCallerIdNumberIdT&& value) { SetOutboundCallerIdNumberId(std::forward<OutboundCallerIdNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline const Aws::String& GetOutboundFlowId() const { return m_outboundFlowId; }
    inline bool OutboundFlowIdHasBeenSet() const { return m_outboundFlowIdHasBeenSet; }
    template<typename OutboundFlowIdT = Aws::String>
    void SetOutboundFlowId(OutboundFlowIdT&& value) { m_outboundFlowIdHasBeenSet = true; m_outboundFlowId = std::forward<OutboundFlowIdT>(value); }
    template<typename OutboundFlowIdT = Aws::String>
    OutboundCallerConfig& WithOutboundFlowId(OutboundFlowIdT&& value) { SetOutboundFlowId(std::forward<OutboundFlowIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outboundCallerIdName;
    bool m_outboundCallerIdNameHasBeenSet = false;

    Aws::String m_outboundCallerIdNumberId;
    bool m_outboundCallerIdNumberIdHasBeenSet = false;

    Aws::String m_outboundFlowId;
    bool m_outboundFlowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
