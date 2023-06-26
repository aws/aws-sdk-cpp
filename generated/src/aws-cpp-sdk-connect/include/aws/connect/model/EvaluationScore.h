/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about scores of a contact evaluation item (section or
   * question).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationScore">AWS
   * API Reference</a></p>
   */
  class EvaluationScore
  {
  public:
    AWS_CONNECT_API EvaluationScore();
    AWS_CONNECT_API EvaluationScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The score percentage for an item in a contact evaluation.</p>
     */
    inline double GetPercentage() const{ return m_percentage; }

    /**
     * <p>The score percentage for an item in a contact evaluation.</p>
     */
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }

    /**
     * <p>The score percentage for an item in a contact evaluation.</p>
     */
    inline void SetPercentage(double value) { m_percentageHasBeenSet = true; m_percentage = value; }

    /**
     * <p>The score percentage for an item in a contact evaluation.</p>
     */
    inline EvaluationScore& WithPercentage(double value) { SetPercentage(value); return *this;}


    /**
     * <p>The flag to mark the item as not applicable for scoring.</p>
     */
    inline bool GetNotApplicable() const{ return m_notApplicable; }

    /**
     * <p>The flag to mark the item as not applicable for scoring.</p>
     */
    inline bool NotApplicableHasBeenSet() const { return m_notApplicableHasBeenSet; }

    /**
     * <p>The flag to mark the item as not applicable for scoring.</p>
     */
    inline void SetNotApplicable(bool value) { m_notApplicableHasBeenSet = true; m_notApplicable = value; }

    /**
     * <p>The flag to mark the item as not applicable for scoring.</p>
     */
    inline EvaluationScore& WithNotApplicable(bool value) { SetNotApplicable(value); return *this;}


    /**
     * <p>The flag that marks the item as automatic fail. If the item or a child item
     * gets an automatic fail answer, this flag will be true.</p>
     */
    inline bool GetAutomaticFail() const{ return m_automaticFail; }

    /**
     * <p>The flag that marks the item as automatic fail. If the item or a child item
     * gets an automatic fail answer, this flag will be true.</p>
     */
    inline bool AutomaticFailHasBeenSet() const { return m_automaticFailHasBeenSet; }

    /**
     * <p>The flag that marks the item as automatic fail. If the item or a child item
     * gets an automatic fail answer, this flag will be true.</p>
     */
    inline void SetAutomaticFail(bool value) { m_automaticFailHasBeenSet = true; m_automaticFail = value; }

    /**
     * <p>The flag that marks the item as automatic fail. If the item or a child item
     * gets an automatic fail answer, this flag will be true.</p>
     */
    inline EvaluationScore& WithAutomaticFail(bool value) { SetAutomaticFail(value); return *this;}

  private:

    double m_percentage;
    bool m_percentageHasBeenSet = false;

    bool m_notApplicable;
    bool m_notApplicableHasBeenSet = false;

    bool m_automaticFail;
    bool m_automaticFailHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
