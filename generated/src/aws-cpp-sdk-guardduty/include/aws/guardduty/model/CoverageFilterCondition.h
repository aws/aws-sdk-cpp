/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Represents a condition that when matched will be added to the response of the
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageFilterCondition">AWS
   * API Reference</a></p>
   */
  class CoverageFilterCondition
  {
  public:
    AWS_GUARDDUTY_API CoverageFilterCondition() = default;
    AWS_GUARDDUTY_API CoverageFilterCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEquals() const { return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    template<typename EqualsT = Aws::Vector<Aws::String>>
    void SetEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals = std::forward<EqualsT>(value); }
    template<typename EqualsT = Aws::Vector<Aws::String>>
    CoverageFilterCondition& WithEquals(EqualsT&& value) { SetEquals(std::forward<EqualsT>(value)); return *this;}
    template<typename EqualsT = Aws::String>
    CoverageFilterCondition& AddEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals.emplace_back(std::forward<EqualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEquals() const { return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    template<typename NotEqualsT = Aws::Vector<Aws::String>>
    void SetNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::forward<NotEqualsT>(value); }
    template<typename NotEqualsT = Aws::Vector<Aws::String>>
    CoverageFilterCondition& WithNotEquals(NotEqualsT&& value) { SetNotEquals(std::forward<NotEqualsT>(value)); return *this;}
    template<typename NotEqualsT = Aws::String>
    CoverageFilterCondition& AddNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace_back(std::forward<NotEqualsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
