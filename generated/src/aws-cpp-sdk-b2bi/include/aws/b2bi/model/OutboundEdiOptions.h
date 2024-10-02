/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12Envelope.h>
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
   * <p>A container for outbound EDI options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/OutboundEdiOptions">AWS
   * API Reference</a></p>
   */
  class OutboundEdiOptions
  {
  public:
    AWS_B2BI_API OutboundEdiOptions();
    AWS_B2BI_API OutboundEdiOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API OutboundEdiOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains an X12 envelope structure.</p>
     */
    inline const X12Envelope& GetX12() const{ return m_x12; }
    inline bool X12HasBeenSet() const { return m_x12HasBeenSet; }
    inline void SetX12(const X12Envelope& value) { m_x12HasBeenSet = true; m_x12 = value; }
    inline void SetX12(X12Envelope&& value) { m_x12HasBeenSet = true; m_x12 = std::move(value); }
    inline OutboundEdiOptions& WithX12(const X12Envelope& value) { SetX12(value); return *this;}
    inline OutboundEdiOptions& WithX12(X12Envelope&& value) { SetX12(std::move(value)); return *this;}
    ///@}
  private:

    X12Envelope m_x12;
    bool m_x12HasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
