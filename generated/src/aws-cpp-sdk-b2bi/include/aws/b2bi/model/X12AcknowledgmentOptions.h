/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12FunctionalAcknowledgment.h>
#include <aws/b2bi/model/X12TechnicalAcknowledgment.h>
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
   * <p>Contains options for configuring X12 acknowledgments. These options control
   * how functional and technical acknowledgments are handled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12AcknowledgmentOptions">AWS
   * API Reference</a></p>
   */
  class X12AcknowledgmentOptions
  {
  public:
    AWS_B2BI_API X12AcknowledgmentOptions() = default;
    AWS_B2BI_API X12AcknowledgmentOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12AcknowledgmentOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether functional acknowledgments (997/999) should be generated
     * for incoming X12 transactions. Valid values are <code>DO_NOT_GENERATE</code>,
     * <code>GENERATE_ALL_SEGMENTS</code> and
     * <code>GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP</code>.</p> <p>If you
     * choose <code>GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP</code>, Amazon Web
     * Services B2B Data Interchange skips the AK2_Loop when generating an
     * acknowledgment document.</p>
     */
    inline X12FunctionalAcknowledgment GetFunctionalAcknowledgment() const { return m_functionalAcknowledgment; }
    inline bool FunctionalAcknowledgmentHasBeenSet() const { return m_functionalAcknowledgmentHasBeenSet; }
    inline void SetFunctionalAcknowledgment(X12FunctionalAcknowledgment value) { m_functionalAcknowledgmentHasBeenSet = true; m_functionalAcknowledgment = value; }
    inline X12AcknowledgmentOptions& WithFunctionalAcknowledgment(X12FunctionalAcknowledgment value) { SetFunctionalAcknowledgment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether technical acknowledgments (TA1) should be generated for
     * incoming X12 interchanges. Valid values are <code>DO_NOT_GENERATE</code> and
     * <code>GENERATE_ALL_SEGMENTS</code> and.</p>
     */
    inline X12TechnicalAcknowledgment GetTechnicalAcknowledgment() const { return m_technicalAcknowledgment; }
    inline bool TechnicalAcknowledgmentHasBeenSet() const { return m_technicalAcknowledgmentHasBeenSet; }
    inline void SetTechnicalAcknowledgment(X12TechnicalAcknowledgment value) { m_technicalAcknowledgmentHasBeenSet = true; m_technicalAcknowledgment = value; }
    inline X12AcknowledgmentOptions& WithTechnicalAcknowledgment(X12TechnicalAcknowledgment value) { SetTechnicalAcknowledgment(value); return *this;}
    ///@}
  private:

    X12FunctionalAcknowledgment m_functionalAcknowledgment{X12FunctionalAcknowledgment::NOT_SET};
    bool m_functionalAcknowledgmentHasBeenSet = false;

    X12TechnicalAcknowledgment m_technicalAcknowledgment{X12TechnicalAcknowledgment::NOT_SET};
    bool m_technicalAcknowledgmentHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
