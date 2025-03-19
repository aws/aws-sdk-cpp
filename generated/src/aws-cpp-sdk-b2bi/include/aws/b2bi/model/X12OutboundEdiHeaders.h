/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12InterchangeControlHeaders.h>
#include <aws/b2bi/model/X12FunctionalGroupHeaders.h>
#include <aws/b2bi/model/X12Delimiters.h>
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
   * <p>A structure containing the details for an outbound EDI object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12OutboundEdiHeaders">AWS
   * API Reference</a></p>
   */
  class X12OutboundEdiHeaders
  {
  public:
    AWS_B2BI_API X12OutboundEdiHeaders() = default;
    AWS_B2BI_API X12OutboundEdiHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12OutboundEdiHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>In X12 EDI messages, delimiters are used to mark the end of segments or
     * elements, and are defined in the interchange control header.</p>
     */
    inline const X12InterchangeControlHeaders& GetInterchangeControlHeaders() const { return m_interchangeControlHeaders; }
    inline bool InterchangeControlHeadersHasBeenSet() const { return m_interchangeControlHeadersHasBeenSet; }
    template<typename InterchangeControlHeadersT = X12InterchangeControlHeaders>
    void SetInterchangeControlHeaders(InterchangeControlHeadersT&& value) { m_interchangeControlHeadersHasBeenSet = true; m_interchangeControlHeaders = std::forward<InterchangeControlHeadersT>(value); }
    template<typename InterchangeControlHeadersT = X12InterchangeControlHeaders>
    X12OutboundEdiHeaders& WithInterchangeControlHeaders(InterchangeControlHeadersT&& value) { SetInterchangeControlHeaders(std::forward<InterchangeControlHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The functional group headers for the X12 object.</p>
     */
    inline const X12FunctionalGroupHeaders& GetFunctionalGroupHeaders() const { return m_functionalGroupHeaders; }
    inline bool FunctionalGroupHeadersHasBeenSet() const { return m_functionalGroupHeadersHasBeenSet; }
    template<typename FunctionalGroupHeadersT = X12FunctionalGroupHeaders>
    void SetFunctionalGroupHeaders(FunctionalGroupHeadersT&& value) { m_functionalGroupHeadersHasBeenSet = true; m_functionalGroupHeaders = std::forward<FunctionalGroupHeadersT>(value); }
    template<typename FunctionalGroupHeadersT = X12FunctionalGroupHeaders>
    X12OutboundEdiHeaders& WithFunctionalGroupHeaders(FunctionalGroupHeadersT&& value) { SetFunctionalGroupHeaders(std::forward<FunctionalGroupHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delimiters, for example semicolon (<code>;</code>), that separates
     * sections of the headers for the X12 object.</p>
     */
    inline const X12Delimiters& GetDelimiters() const { return m_delimiters; }
    inline bool DelimitersHasBeenSet() const { return m_delimitersHasBeenSet; }
    template<typename DelimitersT = X12Delimiters>
    void SetDelimiters(DelimitersT&& value) { m_delimitersHasBeenSet = true; m_delimiters = std::forward<DelimitersT>(value); }
    template<typename DelimitersT = X12Delimiters>
    X12OutboundEdiHeaders& WithDelimiters(DelimitersT&& value) { SetDelimiters(std::forward<DelimitersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not to validate the EDI for this X12 object:
     * <code>TRUE</code> or <code>FALSE</code>.</p>
     */
    inline bool GetValidateEdi() const { return m_validateEdi; }
    inline bool ValidateEdiHasBeenSet() const { return m_validateEdiHasBeenSet; }
    inline void SetValidateEdi(bool value) { m_validateEdiHasBeenSet = true; m_validateEdi = value; }
    inline X12OutboundEdiHeaders& WithValidateEdi(bool value) { SetValidateEdi(value); return *this;}
    ///@}
  private:

    X12InterchangeControlHeaders m_interchangeControlHeaders;
    bool m_interchangeControlHeadersHasBeenSet = false;

    X12FunctionalGroupHeaders m_functionalGroupHeaders;
    bool m_functionalGroupHeadersHasBeenSet = false;

    X12Delimiters m_delimiters;
    bool m_delimitersHasBeenSet = false;

    bool m_validateEdi{false};
    bool m_validateEdiHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
