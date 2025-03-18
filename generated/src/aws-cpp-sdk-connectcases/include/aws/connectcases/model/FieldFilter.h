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
    AWS_CONNECTCASES_API FieldFilter() = default;
    AWS_CONNECTCASES_API FieldFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetContains() const { return m_contains; }
    inline bool ContainsHasBeenSet() const { return m_containsHasBeenSet; }
    template<typename ContainsT = FieldValue>
    void SetContains(ContainsT&& value) { m_containsHasBeenSet = true; m_contains = std::forward<ContainsT>(value); }
    template<typename ContainsT = FieldValue>
    FieldFilter& WithContains(ContainsT&& value) { SetContains(std::forward<ContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetEqualTo() const { return m_equalTo; }
    inline bool EqualToHasBeenSet() const { return m_equalToHasBeenSet; }
    template<typename EqualToT = FieldValue>
    void SetEqualTo(EqualToT&& value) { m_equalToHasBeenSet = true; m_equalTo = std::forward<EqualToT>(value); }
    template<typename EqualToT = FieldValue>
    FieldFilter& WithEqualTo(EqualToT&& value) { SetEqualTo(std::forward<EqualToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetGreaterThan() const { return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    template<typename GreaterThanT = FieldValue>
    void SetGreaterThan(GreaterThanT&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::forward<GreaterThanT>(value); }
    template<typename GreaterThanT = FieldValue>
    FieldFilter& WithGreaterThan(GreaterThanT&& value) { SetGreaterThan(std::forward<GreaterThanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetGreaterThanOrEqualTo() const { return m_greaterThanOrEqualTo; }
    inline bool GreaterThanOrEqualToHasBeenSet() const { return m_greaterThanOrEqualToHasBeenSet; }
    template<typename GreaterThanOrEqualToT = FieldValue>
    void SetGreaterThanOrEqualTo(GreaterThanOrEqualToT&& value) { m_greaterThanOrEqualToHasBeenSet = true; m_greaterThanOrEqualTo = std::forward<GreaterThanOrEqualToT>(value); }
    template<typename GreaterThanOrEqualToT = FieldValue>
    FieldFilter& WithGreaterThanOrEqualTo(GreaterThanOrEqualToT&& value) { SetGreaterThanOrEqualTo(std::forward<GreaterThanOrEqualToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information.</p>
     */
    inline const FieldValue& GetLessThan() const { return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    template<typename LessThanT = FieldValue>
    void SetLessThan(LessThanT&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::forward<LessThanT>(value); }
    template<typename LessThanT = FieldValue>
    FieldFilter& WithLessThan(LessThanT&& value) { SetLessThan(std::forward<LessThanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object containing field identifier and value information. </p>
     */
    inline const FieldValue& GetLessThanOrEqualTo() const { return m_lessThanOrEqualTo; }
    inline bool LessThanOrEqualToHasBeenSet() const { return m_lessThanOrEqualToHasBeenSet; }
    template<typename LessThanOrEqualToT = FieldValue>
    void SetLessThanOrEqualTo(LessThanOrEqualToT&& value) { m_lessThanOrEqualToHasBeenSet = true; m_lessThanOrEqualTo = std::forward<LessThanOrEqualToT>(value); }
    template<typename LessThanOrEqualToT = FieldValue>
    FieldFilter& WithLessThanOrEqualTo(LessThanOrEqualToT&& value) { SetLessThanOrEqualTo(std::forward<LessThanOrEqualToT>(value)); return *this;}
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
