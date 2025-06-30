/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12AcknowledgmentOptions.h>
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
   * <p>Contains options specific to processing inbound X12 EDI files.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12InboundEdiOptions">AWS
   * API Reference</a></p>
   */
  class X12InboundEdiOptions
  {
  public:
    AWS_B2BI_API X12InboundEdiOptions() = default;
    AWS_B2BI_API X12InboundEdiOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12InboundEdiOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies acknowledgment options for inbound X12 EDI files. These options
     * control how functional and technical acknowledgments are handled.</p>
     */
    inline const X12AcknowledgmentOptions& GetAcknowledgmentOptions() const { return m_acknowledgmentOptions; }
    inline bool AcknowledgmentOptionsHasBeenSet() const { return m_acknowledgmentOptionsHasBeenSet; }
    template<typename AcknowledgmentOptionsT = X12AcknowledgmentOptions>
    void SetAcknowledgmentOptions(AcknowledgmentOptionsT&& value) { m_acknowledgmentOptionsHasBeenSet = true; m_acknowledgmentOptions = std::forward<AcknowledgmentOptionsT>(value); }
    template<typename AcknowledgmentOptionsT = X12AcknowledgmentOptions>
    X12InboundEdiOptions& WithAcknowledgmentOptions(AcknowledgmentOptionsT&& value) { SetAcknowledgmentOptions(std::forward<AcknowledgmentOptionsT>(value)); return *this;}
    ///@}
  private:

    X12AcknowledgmentOptions m_acknowledgmentOptions;
    bool m_acknowledgmentOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
