/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12OutboundEdiHeaders.h>
#include <aws/b2bi/model/WrapOptions.h>
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
   * <p>A wrapper structure for an X12 definition object.</p> <p>the X12 envelope
   * ensures the integrity of the data and the efficiency of the information
   * exchange. The X12 message structure has hierarchical levels. From highest to the
   * lowest, they are:</p> <ul> <li> <p>Interchange Envelope</p> </li> <li>
   * <p>Functional Group</p> </li> <li> <p>Transaction Set</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12Envelope">AWS
   * API Reference</a></p>
   */
  class X12Envelope
  {
  public:
    AWS_B2BI_API X12Envelope() = default;
    AWS_B2BI_API X12Envelope(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12Envelope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A container for the X12 outbound EDI headers.</p>
     */
    inline const X12OutboundEdiHeaders& GetCommon() const { return m_common; }
    inline bool CommonHasBeenSet() const { return m_commonHasBeenSet; }
    template<typename CommonT = X12OutboundEdiHeaders>
    void SetCommon(CommonT&& value) { m_commonHasBeenSet = true; m_common = std::forward<CommonT>(value); }
    template<typename CommonT = X12OutboundEdiHeaders>
    X12Envelope& WithCommon(CommonT&& value) { SetCommon(std::forward<CommonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const WrapOptions& GetWrapOptions() const { return m_wrapOptions; }
    inline bool WrapOptionsHasBeenSet() const { return m_wrapOptionsHasBeenSet; }
    template<typename WrapOptionsT = WrapOptions>
    void SetWrapOptions(WrapOptionsT&& value) { m_wrapOptionsHasBeenSet = true; m_wrapOptions = std::forward<WrapOptionsT>(value); }
    template<typename WrapOptionsT = WrapOptions>
    X12Envelope& WithWrapOptions(WrapOptionsT&& value) { SetWrapOptions(std::forward<WrapOptionsT>(value)); return *this;}
    ///@}
  private:

    X12OutboundEdiHeaders m_common;
    bool m_commonHasBeenSet = false;

    WrapOptions m_wrapOptions;
    bool m_wrapOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
