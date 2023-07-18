/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ExpenseType.h>
#include <aws/textract/model/ExpenseDetection.h>
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
  class AWS_TEXTRACT_API ExpenseField
  {
  public:
    ExpenseField();
    ExpenseField(Aws::Utils::Json::JsonView jsonValue);
    ExpenseField& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    ExpenseType m_type;
    bool m_typeHasBeenSet;

    ExpenseDetection m_labelDetection;
    bool m_labelDetectionHasBeenSet;

    ExpenseDetection m_valueDetection;
    bool m_valueDetectionHasBeenSet;

    int m_pageNumber;
    bool m_pageNumberHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
