/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/OutboundEdiOptions.h>
#include <aws/b2bi/model/InboundEdiOptions.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Contains the details for an Outbound EDI capability.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/CapabilityOptions">AWS
   * API Reference</a></p>
   */
  class CapabilityOptions
  {
  public:
    AWS_B2BI_API CapabilityOptions() = default;
    AWS_B2BI_API CapabilityOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API CapabilityOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains the outbound EDI options.</p>
     */
    inline const OutboundEdiOptions& GetOutboundEdi() const { return m_outboundEdi; }
    inline bool OutboundEdiHasBeenSet() const { return m_outboundEdiHasBeenSet; }
    template<typename OutboundEdiT = OutboundEdiOptions>
    void SetOutboundEdi(OutboundEdiT&& value) { m_outboundEdiHasBeenSet = true; m_outboundEdi = std::forward<OutboundEdiT>(value); }
    template<typename OutboundEdiT = OutboundEdiOptions>
    CapabilityOptions& WithOutboundEdi(OutboundEdiT&& value) { SetOutboundEdi(std::forward<OutboundEdiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the inbound EDI options for the capability.</p>
     */
    inline const InboundEdiOptions& GetInboundEdi() const { return m_inboundEdi; }
    inline bool InboundEdiHasBeenSet() const { return m_inboundEdiHasBeenSet; }
    template<typename InboundEdiT = InboundEdiOptions>
    void SetInboundEdi(InboundEdiT&& value) { m_inboundEdiHasBeenSet = true; m_inboundEdi = std::forward<InboundEdiT>(value); }
    template<typename InboundEdiT = InboundEdiOptions>
    CapabilityOptions& WithInboundEdi(InboundEdiT&& value) { SetInboundEdi(std::forward<InboundEdiT>(value)); return *this;}
    ///@}
  private:

    OutboundEdiOptions m_outboundEdi;
    bool m_outboundEdiHasBeenSet = false;

    InboundEdiOptions m_inboundEdi;
    bool m_inboundEdiHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
