/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>Represents whether certain values are recognized as null values for
   * removal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/NullCheckBoxList">AWS
   * API Reference</a></p>
   */
  class NullCheckBoxList
  {
  public:
    AWS_GLUE_API NullCheckBoxList();
    AWS_GLUE_API NullCheckBoxList(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API NullCheckBoxList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies that an empty string is considered as a null value.</p>
     */
    inline bool GetIsEmpty() const{ return m_isEmpty; }

    /**
     * <p>Specifies that an empty string is considered as a null value.</p>
     */
    inline bool IsEmptyHasBeenSet() const { return m_isEmptyHasBeenSet; }

    /**
     * <p>Specifies that an empty string is considered as a null value.</p>
     */
    inline void SetIsEmpty(bool value) { m_isEmptyHasBeenSet = true; m_isEmpty = value; }

    /**
     * <p>Specifies that an empty string is considered as a null value.</p>
     */
    inline NullCheckBoxList& WithIsEmpty(bool value) { SetIsEmpty(value); return *this;}


    /**
     * <p>Specifies that a value spelling out the word 'null' is considered as a null
     * value.</p>
     */
    inline bool GetIsNullString() const{ return m_isNullString; }

    /**
     * <p>Specifies that a value spelling out the word 'null' is considered as a null
     * value.</p>
     */
    inline bool IsNullStringHasBeenSet() const { return m_isNullStringHasBeenSet; }

    /**
     * <p>Specifies that a value spelling out the word 'null' is considered as a null
     * value.</p>
     */
    inline void SetIsNullString(bool value) { m_isNullStringHasBeenSet = true; m_isNullString = value; }

    /**
     * <p>Specifies that a value spelling out the word 'null' is considered as a null
     * value.</p>
     */
    inline NullCheckBoxList& WithIsNullString(bool value) { SetIsNullString(value); return *this;}


    /**
     * <p>Specifies that an integer value of -1 is considered as a null value.</p>
     */
    inline bool GetIsNegOne() const{ return m_isNegOne; }

    /**
     * <p>Specifies that an integer value of -1 is considered as a null value.</p>
     */
    inline bool IsNegOneHasBeenSet() const { return m_isNegOneHasBeenSet; }

    /**
     * <p>Specifies that an integer value of -1 is considered as a null value.</p>
     */
    inline void SetIsNegOne(bool value) { m_isNegOneHasBeenSet = true; m_isNegOne = value; }

    /**
     * <p>Specifies that an integer value of -1 is considered as a null value.</p>
     */
    inline NullCheckBoxList& WithIsNegOne(bool value) { SetIsNegOne(value); return *this;}

  private:

    bool m_isEmpty;
    bool m_isEmptyHasBeenSet = false;

    bool m_isNullString;
    bool m_isNullStringHasBeenSet = false;

    bool m_isNegOne;
    bool m_isNegOneHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
