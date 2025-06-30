/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>

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
   * <p>Contains configuration for X12 control numbers used in X12 EDI generation.
   * Control numbers are used to uniquely identify interchanges, functional groups,
   * and transaction sets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12ControlNumbers">AWS
   * API Reference</a></p>
   */
  class X12ControlNumbers
  {
  public:
    AWS_B2BI_API X12ControlNumbers() = default;
    AWS_B2BI_API X12ControlNumbers(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12ControlNumbers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the starting interchange control number (ISA13) to use for X12 EDI
     * generation. This number is incremented for each new interchange. For the ISA
     * (interchange) envelope, Amazon Web Services B2B Data Interchange generates an
     * interchange control number that is unique for the ISA05 and ISA06 (sender) &amp;
     * ISA07 and ISA08 (receiver) combination. </p>
     */
    inline int GetStartingInterchangeControlNumber() const { return m_startingInterchangeControlNumber; }
    inline bool StartingInterchangeControlNumberHasBeenSet() const { return m_startingInterchangeControlNumberHasBeenSet; }
    inline void SetStartingInterchangeControlNumber(int value) { m_startingInterchangeControlNumberHasBeenSet = true; m_startingInterchangeControlNumber = value; }
    inline X12ControlNumbers& WithStartingInterchangeControlNumber(int value) { SetStartingInterchangeControlNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the starting functional group control number (GS06) to use for X12
     * EDI generation. This number is incremented for each new functional group. For
     * the GS (functional group) envelope, Amazon Web Services B2B Data Interchange
     * generates a functional group control number that is unique to the sender ID,
     * receiver ID, and functional identifier code combination. </p>
     */
    inline int GetStartingFunctionalGroupControlNumber() const { return m_startingFunctionalGroupControlNumber; }
    inline bool StartingFunctionalGroupControlNumberHasBeenSet() const { return m_startingFunctionalGroupControlNumberHasBeenSet; }
    inline void SetStartingFunctionalGroupControlNumber(int value) { m_startingFunctionalGroupControlNumberHasBeenSet = true; m_startingFunctionalGroupControlNumber = value; }
    inline X12ControlNumbers& WithStartingFunctionalGroupControlNumber(int value) { SetStartingFunctionalGroupControlNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the starting transaction set control number (ST02) to use for X12
     * EDI generation. This number is incremented for each new transaction set.</p>
     */
    inline int GetStartingTransactionSetControlNumber() const { return m_startingTransactionSetControlNumber; }
    inline bool StartingTransactionSetControlNumberHasBeenSet() const { return m_startingTransactionSetControlNumberHasBeenSet; }
    inline void SetStartingTransactionSetControlNumber(int value) { m_startingTransactionSetControlNumberHasBeenSet = true; m_startingTransactionSetControlNumber = value; }
    inline X12ControlNumbers& WithStartingTransactionSetControlNumber(int value) { SetStartingTransactionSetControlNumber(value); return *this;}
    ///@}
  private:

    int m_startingInterchangeControlNumber{0};
    bool m_startingInterchangeControlNumberHasBeenSet = false;

    int m_startingFunctionalGroupControlNumber{0};
    bool m_startingFunctionalGroupControlNumberHasBeenSet = false;

    int m_startingTransactionSetControlNumber{0};
    bool m_startingTransactionSetControlNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
