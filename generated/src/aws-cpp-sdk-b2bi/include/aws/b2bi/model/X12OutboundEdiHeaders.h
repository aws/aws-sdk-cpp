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
    AWS_B2BI_API X12OutboundEdiHeaders();
    AWS_B2BI_API X12OutboundEdiHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12OutboundEdiHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>In X12 EDI messages, delimiters are used to mark the end of segments or
     * elements, and are defined in the interchange control header.</p>
     */
    inline const X12InterchangeControlHeaders& GetInterchangeControlHeaders() const{ return m_interchangeControlHeaders; }
    inline bool InterchangeControlHeadersHasBeenSet() const { return m_interchangeControlHeadersHasBeenSet; }
    inline void SetInterchangeControlHeaders(const X12InterchangeControlHeaders& value) { m_interchangeControlHeadersHasBeenSet = true; m_interchangeControlHeaders = value; }
    inline void SetInterchangeControlHeaders(X12InterchangeControlHeaders&& value) { m_interchangeControlHeadersHasBeenSet = true; m_interchangeControlHeaders = std::move(value); }
    inline X12OutboundEdiHeaders& WithInterchangeControlHeaders(const X12InterchangeControlHeaders& value) { SetInterchangeControlHeaders(value); return *this;}
    inline X12OutboundEdiHeaders& WithInterchangeControlHeaders(X12InterchangeControlHeaders&& value) { SetInterchangeControlHeaders(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The functional group headers for the X12 object.</p>
     */
    inline const X12FunctionalGroupHeaders& GetFunctionalGroupHeaders() const{ return m_functionalGroupHeaders; }
    inline bool FunctionalGroupHeadersHasBeenSet() const { return m_functionalGroupHeadersHasBeenSet; }
    inline void SetFunctionalGroupHeaders(const X12FunctionalGroupHeaders& value) { m_functionalGroupHeadersHasBeenSet = true; m_functionalGroupHeaders = value; }
    inline void SetFunctionalGroupHeaders(X12FunctionalGroupHeaders&& value) { m_functionalGroupHeadersHasBeenSet = true; m_functionalGroupHeaders = std::move(value); }
    inline X12OutboundEdiHeaders& WithFunctionalGroupHeaders(const X12FunctionalGroupHeaders& value) { SetFunctionalGroupHeaders(value); return *this;}
    inline X12OutboundEdiHeaders& WithFunctionalGroupHeaders(X12FunctionalGroupHeaders&& value) { SetFunctionalGroupHeaders(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delimiters, for example semicolon (<code>;</code>), that separates
     * sections of the headers for the X12 object.</p>
     */
    inline const X12Delimiters& GetDelimiters() const{ return m_delimiters; }
    inline bool DelimitersHasBeenSet() const { return m_delimitersHasBeenSet; }
    inline void SetDelimiters(const X12Delimiters& value) { m_delimitersHasBeenSet = true; m_delimiters = value; }
    inline void SetDelimiters(X12Delimiters&& value) { m_delimitersHasBeenSet = true; m_delimiters = std::move(value); }
    inline X12OutboundEdiHeaders& WithDelimiters(const X12Delimiters& value) { SetDelimiters(value); return *this;}
    inline X12OutboundEdiHeaders& WithDelimiters(X12Delimiters&& value) { SetDelimiters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not to validate the EDI for this X12 object:
     * <code>TRUE</code> or <code>FALSE</code>.</p>
     */
    inline bool GetValidateEdi() const{ return m_validateEdi; }
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

    bool m_validateEdi;
    bool m_validateEdiHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
