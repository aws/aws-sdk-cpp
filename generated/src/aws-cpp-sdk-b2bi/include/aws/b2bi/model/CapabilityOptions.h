/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/OutboundEdiOptions.h>
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
    AWS_B2BI_API CapabilityOptions();
    AWS_B2BI_API CapabilityOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API CapabilityOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains the outbound EDI options.</p>
     */
    inline const OutboundEdiOptions& GetOutboundEdi() const{ return m_outboundEdi; }
    inline bool OutboundEdiHasBeenSet() const { return m_outboundEdiHasBeenSet; }
    inline void SetOutboundEdi(const OutboundEdiOptions& value) { m_outboundEdiHasBeenSet = true; m_outboundEdi = value; }
    inline void SetOutboundEdi(OutboundEdiOptions&& value) { m_outboundEdiHasBeenSet = true; m_outboundEdi = std::move(value); }
    inline CapabilityOptions& WithOutboundEdi(const OutboundEdiOptions& value) { SetOutboundEdi(value); return *this;}
    inline CapabilityOptions& WithOutboundEdi(OutboundEdiOptions&& value) { SetOutboundEdi(std::move(value)); return *this;}
    ///@}
  private:

    OutboundEdiOptions m_outboundEdi;
    bool m_outboundEdiHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
