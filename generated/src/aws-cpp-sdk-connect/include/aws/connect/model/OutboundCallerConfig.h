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
    AWS_CONNECT_API OutboundCallerConfig();
    AWS_CONNECT_API OutboundCallerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OutboundCallerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The caller ID name.</p>
     */
    inline const Aws::String& GetOutboundCallerIdName() const{ return m_outboundCallerIdName; }

    /**
     * <p>The caller ID name.</p>
     */
    inline bool OutboundCallerIdNameHasBeenSet() const { return m_outboundCallerIdNameHasBeenSet; }

    /**
     * <p>The caller ID name.</p>
     */
    inline void SetOutboundCallerIdName(const Aws::String& value) { m_outboundCallerIdNameHasBeenSet = true; m_outboundCallerIdName = value; }

    /**
     * <p>The caller ID name.</p>
     */
    inline void SetOutboundCallerIdName(Aws::String&& value) { m_outboundCallerIdNameHasBeenSet = true; m_outboundCallerIdName = std::move(value); }

    /**
     * <p>The caller ID name.</p>
     */
    inline void SetOutboundCallerIdName(const char* value) { m_outboundCallerIdNameHasBeenSet = true; m_outboundCallerIdName.assign(value); }

    /**
     * <p>The caller ID name.</p>
     */
    inline OutboundCallerConfig& WithOutboundCallerIdName(const Aws::String& value) { SetOutboundCallerIdName(value); return *this;}

    /**
     * <p>The caller ID name.</p>
     */
    inline OutboundCallerConfig& WithOutboundCallerIdName(Aws::String&& value) { SetOutboundCallerIdName(std::move(value)); return *this;}

    /**
     * <p>The caller ID name.</p>
     */
    inline OutboundCallerConfig& WithOutboundCallerIdName(const char* value) { SetOutboundCallerIdName(value); return *this;}


    /**
     * <p>The caller ID number.</p>
     */
    inline const Aws::String& GetOutboundCallerIdNumberId() const{ return m_outboundCallerIdNumberId; }

    /**
     * <p>The caller ID number.</p>
     */
    inline bool OutboundCallerIdNumberIdHasBeenSet() const { return m_outboundCallerIdNumberIdHasBeenSet; }

    /**
     * <p>The caller ID number.</p>
     */
    inline void SetOutboundCallerIdNumberId(const Aws::String& value) { m_outboundCallerIdNumberIdHasBeenSet = true; m_outboundCallerIdNumberId = value; }

    /**
     * <p>The caller ID number.</p>
     */
    inline void SetOutboundCallerIdNumberId(Aws::String&& value) { m_outboundCallerIdNumberIdHasBeenSet = true; m_outboundCallerIdNumberId = std::move(value); }

    /**
     * <p>The caller ID number.</p>
     */
    inline void SetOutboundCallerIdNumberId(const char* value) { m_outboundCallerIdNumberIdHasBeenSet = true; m_outboundCallerIdNumberId.assign(value); }

    /**
     * <p>The caller ID number.</p>
     */
    inline OutboundCallerConfig& WithOutboundCallerIdNumberId(const Aws::String& value) { SetOutboundCallerIdNumberId(value); return *this;}

    /**
     * <p>The caller ID number.</p>
     */
    inline OutboundCallerConfig& WithOutboundCallerIdNumberId(Aws::String&& value) { SetOutboundCallerIdNumberId(std::move(value)); return *this;}

    /**
     * <p>The caller ID number.</p>
     */
    inline OutboundCallerConfig& WithOutboundCallerIdNumberId(const char* value) { SetOutboundCallerIdNumberId(value); return *this;}


    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline const Aws::String& GetOutboundFlowId() const{ return m_outboundFlowId; }

    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline bool OutboundFlowIdHasBeenSet() const { return m_outboundFlowIdHasBeenSet; }

    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline void SetOutboundFlowId(const Aws::String& value) { m_outboundFlowIdHasBeenSet = true; m_outboundFlowId = value; }

    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline void SetOutboundFlowId(Aws::String&& value) { m_outboundFlowIdHasBeenSet = true; m_outboundFlowId = std::move(value); }

    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline void SetOutboundFlowId(const char* value) { m_outboundFlowIdHasBeenSet = true; m_outboundFlowId.assign(value); }

    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline OutboundCallerConfig& WithOutboundFlowId(const Aws::String& value) { SetOutboundFlowId(value); return *this;}

    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline OutboundCallerConfig& WithOutboundFlowId(Aws::String&& value) { SetOutboundFlowId(std::move(value)); return *this;}

    /**
     * <p>The outbound whisper flow to be used during an outbound call.</p>
     */
    inline OutboundCallerConfig& WithOutboundFlowId(const char* value) { SetOutboundFlowId(value); return *this;}

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
