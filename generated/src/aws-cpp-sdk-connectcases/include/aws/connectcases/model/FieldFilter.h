/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/FieldValue.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>A filter for fields. Only one value can be provided.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldFilter">AWS
   * API Reference</a></p>
   */
  class FieldFilter
  {
  public:
    AWS_CONNECTCASES_API FieldFilter();
    AWS_CONNECTCASES_API FieldFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetContains() const{ return m_contains; }
    inline bool ContainsHasBeenSet() const { return m_containsHasBeenSet; }
    inline void SetContains(const FieldValue& value) { m_containsHasBeenSet = true; m_contains = value; }
    inline void SetContains(FieldValue&& value) { m_containsHasBeenSet = true; m_contains = std::move(value); }
    inline FieldFilter& WithContains(const FieldValue& value) { SetContains(value); return *this;}
    inline FieldFilter& WithContains(FieldValue&& value) { SetContains(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetEqualTo() const{ return m_equalTo; }
    inline bool EqualToHasBeenSet() const { return m_equalToHasBeenSet; }
    inline void SetEqualTo(const FieldValue& value) { m_equalToHasBeenSet = true; m_equalTo = value; }
    inline void SetEqualTo(FieldValue&& value) { m_equalToHasBeenSet = true; m_equalTo = std::move(value); }
    inline FieldFilter& WithEqualTo(const FieldValue& value) { SetEqualTo(value); return *this;}
    inline FieldFilter& WithEqualTo(FieldValue&& value) { SetEqualTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetGreaterThan() const{ return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    inline void SetGreaterThan(const FieldValue& value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }
    inline void SetGreaterThan(FieldValue&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::move(value); }
    inline FieldFilter& WithGreaterThan(const FieldValue& value) { SetGreaterThan(value); return *this;}
    inline FieldFilter& WithGreaterThan(FieldValue&& value) { SetGreaterThan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetGreaterThanOrEqualTo() const{ return m_greaterThanOrEqualTo; }
    inline bool GreaterThanOrEqualToHasBeenSet() const { return m_greaterThanOrEqualToHasBeenSet; }
    inline void SetGreaterThanOrEqualTo(const FieldValue& value) { m_greaterThanOrEqualToHasBeenSet = true; m_greaterThanOrEqualTo = value; }
    inline void SetGreaterThanOrEqualTo(FieldValue&& value) { m_greaterThanOrEqualToHasBeenSet = true; m_greaterThanOrEqualTo = std::move(value); }
    inline FieldFilter& WithGreaterThanOrEqualTo(const FieldValue& value) { SetGreaterThanOrEqualTo(value); return *this;}
    inline FieldFilter& WithGreaterThanOrEqualTo(FieldValue&& value) { SetGreaterThanOrEqualTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetLessThan() const{ return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    inline void SetLessThan(const FieldValue& value) { m_lessThanHasBeenSet = true; m_lessThan = value; }
    inline void SetLessThan(FieldValue&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::move(value); }
    inline FieldFilter& WithLessThan(const FieldValue& value) { SetLessThan(value); return *this;}
    inline FieldFilter& WithLessThan(FieldValue&& value) { SetLessThan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information. </p>
     */
    inline const FieldValue& GetLessThanOrEqualTo() const{ return m_lessThanOrEqualTo; }
    inline bool LessThanOrEqualToHasBeenSet() const { return m_lessThanOrEqualToHasBeenSet; }
    inline void SetLessThanOrEqualTo(const FieldValue& value) { m_lessThanOrEqualToHasBeenSet = true; m_lessThanOrEqualTo = value; }
    inline void SetLessThanOrEqualTo(FieldValue&& value) { m_lessThanOrEqualToHasBeenSet = true; m_lessThanOrEqualTo = std::move(value); }
    inline FieldFilter& WithLessThanOrEqualTo(const FieldValue& value) { SetLessThanOrEqualTo(value); return *this;}
    inline FieldFilter& WithLessThanOrEqualTo(FieldValue&& value) { SetLessThanOrEqualTo(std::move(value)); return *this;}
    ///@}
  private:

    FieldValue m_contains;
    bool m_containsHasBeenSet = false;

    FieldValue m_equalTo;
    bool m_equalToHasBeenSet = false;

    FieldValue m_greaterThan;
    bool m_greaterThanHasBeenSet = false;

    FieldValue m_greaterThanOrEqualTo;
    bool m_greaterThanOrEqualToHasBeenSet = false;

    FieldValue m_lessThan;
    bool m_lessThanHasBeenSet = false;

    FieldValue m_lessThanOrEqualTo;
    bool m_lessThanOrEqualToHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
