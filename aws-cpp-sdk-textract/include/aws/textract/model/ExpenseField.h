/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ExpenseType.h>
#include <aws/textract/model/ExpenseDetection.h>
#include <aws/textract/model/ExpenseCurrency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/ExpenseGroupProperty.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Breakdown of detected information, seperated into the catagories Type,
   * LabelDetection, and ValueDetection</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseField">AWS
   * API Reference</a></p>
   */
  class ExpenseField
  {
  public:
    AWS_TEXTRACT_API ExpenseField();
    AWS_TEXTRACT_API ExpenseField(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API ExpenseField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The implied label of a detected element. Present alongside LabelDetection for
     * explicit elements.</p>
     */
    inline const ExpenseType& GetType() const{ return m_type; }

    /**
     * <p>The implied label of a detected element. Present alongside LabelDetection for
     * explicit elements.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The implied label of a detected element. Present alongside LabelDetection for
     * explicit elements.</p>
     */
    inline void SetType(const ExpenseType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The implied label of a detected element. Present alongside LabelDetection for
     * explicit elements.</p>
     */
    inline void SetType(ExpenseType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The implied label of a detected element. Present alongside LabelDetection for
     * explicit elements.</p>
     */
    inline ExpenseField& WithType(const ExpenseType& value) { SetType(value); return *this;}

    /**
     * <p>The implied label of a detected element. Present alongside LabelDetection for
     * explicit elements.</p>
     */
    inline ExpenseField& WithType(ExpenseType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The explicitly stated label of a detected element.</p>
     */
    inline const ExpenseDetection& GetLabelDetection() const{ return m_labelDetection; }

    /**
     * <p>The explicitly stated label of a detected element.</p>
     */
    inline bool LabelDetectionHasBeenSet() const { return m_labelDetectionHasBeenSet; }

    /**
     * <p>The explicitly stated label of a detected element.</p>
     */
    inline void SetLabelDetection(const ExpenseDetection& value) { m_labelDetectionHasBeenSet = true; m_labelDetection = value; }

    /**
     * <p>The explicitly stated label of a detected element.</p>
     */
    inline void SetLabelDetection(ExpenseDetection&& value) { m_labelDetectionHasBeenSet = true; m_labelDetection = std::move(value); }

    /**
     * <p>The explicitly stated label of a detected element.</p>
     */
    inline ExpenseField& WithLabelDetection(const ExpenseDetection& value) { SetLabelDetection(value); return *this;}

    /**
     * <p>The explicitly stated label of a detected element.</p>
     */
    inline ExpenseField& WithLabelDetection(ExpenseDetection&& value) { SetLabelDetection(std::move(value)); return *this;}


    /**
     * <p>The value of a detected element. Present in explicit and implicit
     * elements.</p>
     */
    inline const ExpenseDetection& GetValueDetection() const{ return m_valueDetection; }

    /**
     * <p>The value of a detected element. Present in explicit and implicit
     * elements.</p>
     */
    inline bool ValueDetectionHasBeenSet() const { return m_valueDetectionHasBeenSet; }

    /**
     * <p>The value of a detected element. Present in explicit and implicit
     * elements.</p>
     */
    inline void SetValueDetection(const ExpenseDetection& value) { m_valueDetectionHasBeenSet = true; m_valueDetection = value; }

    /**
     * <p>The value of a detected element. Present in explicit and implicit
     * elements.</p>
     */
    inline void SetValueDetection(ExpenseDetection&& value) { m_valueDetectionHasBeenSet = true; m_valueDetection = std::move(value); }

    /**
     * <p>The value of a detected element. Present in explicit and implicit
     * elements.</p>
     */
    inline ExpenseField& WithValueDetection(const ExpenseDetection& value) { SetValueDetection(value); return *this;}

    /**
     * <p>The value of a detected element. Present in explicit and implicit
     * elements.</p>
     */
    inline ExpenseField& WithValueDetection(ExpenseDetection&& value) { SetValueDetection(std::move(value)); return *this;}


    /**
     * <p>The page number the value was detected on.</p>
     */
    inline int GetPageNumber() const{ return m_pageNumber; }

    /**
     * <p>The page number the value was detected on.</p>
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * <p>The page number the value was detected on.</p>
     */
    inline void SetPageNumber(int value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * <p>The page number the value was detected on.</p>
     */
    inline ExpenseField& WithPageNumber(int value) { SetPageNumber(value); return *this;}


    /**
     * <p>Shows the kind of currency, both the code and confidence associated with any
     * monatary value detected.</p>
     */
    inline const ExpenseCurrency& GetCurrency() const{ return m_currency; }

    /**
     * <p>Shows the kind of currency, both the code and confidence associated with any
     * monatary value detected.</p>
     */
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }

    /**
     * <p>Shows the kind of currency, both the code and confidence associated with any
     * monatary value detected.</p>
     */
    inline void SetCurrency(const ExpenseCurrency& value) { m_currencyHasBeenSet = true; m_currency = value; }

    /**
     * <p>Shows the kind of currency, both the code and confidence associated with any
     * monatary value detected.</p>
     */
    inline void SetCurrency(ExpenseCurrency&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }

    /**
     * <p>Shows the kind of currency, both the code and confidence associated with any
     * monatary value detected.</p>
     */
    inline ExpenseField& WithCurrency(const ExpenseCurrency& value) { SetCurrency(value); return *this;}

    /**
     * <p>Shows the kind of currency, both the code and confidence associated with any
     * monatary value detected.</p>
     */
    inline ExpenseField& WithCurrency(ExpenseCurrency&& value) { SetCurrency(std::move(value)); return *this;}


    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline const Aws::Vector<ExpenseGroupProperty>& GetGroupProperties() const{ return m_groupProperties; }

    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline bool GroupPropertiesHasBeenSet() const { return m_groupPropertiesHasBeenSet; }

    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline void SetGroupProperties(const Aws::Vector<ExpenseGroupProperty>& value) { m_groupPropertiesHasBeenSet = true; m_groupProperties = value; }

    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline void SetGroupProperties(Aws::Vector<ExpenseGroupProperty>&& value) { m_groupPropertiesHasBeenSet = true; m_groupProperties = std::move(value); }

    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline ExpenseField& WithGroupProperties(const Aws::Vector<ExpenseGroupProperty>& value) { SetGroupProperties(value); return *this;}

    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline ExpenseField& WithGroupProperties(Aws::Vector<ExpenseGroupProperty>&& value) { SetGroupProperties(std::move(value)); return *this;}

    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline ExpenseField& AddGroupProperties(const ExpenseGroupProperty& value) { m_groupPropertiesHasBeenSet = true; m_groupProperties.push_back(value); return *this; }

    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline ExpenseField& AddGroupProperties(ExpenseGroupProperty&& value) { m_groupPropertiesHasBeenSet = true; m_groupProperties.push_back(std::move(value)); return *this; }

  private:

    ExpenseType m_type;
    bool m_typeHasBeenSet = false;

    ExpenseDetection m_labelDetection;
    bool m_labelDetectionHasBeenSet = false;

    ExpenseDetection m_valueDetection;
    bool m_valueDetectionHasBeenSet = false;

    int m_pageNumber;
    bool m_pageNumberHasBeenSet = false;

    ExpenseCurrency m_currency;
    bool m_currencyHasBeenSet = false;

    Aws::Vector<ExpenseGroupProperty> m_groupProperties;
    bool m_groupPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
