/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The search criteria to be used to return hours of operations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HoursOfOperationSearchCriteria">AWS
   * API Reference</a></p>
   */
  class HoursOfOperationSearchCriteria
  {
  public:
    AWS_CONNECT_API HoursOfOperationSearchCriteria();
    AWS_CONNECT_API HoursOfOperationSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<HoursOfOperationSearchCriteria>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<HoursOfOperationSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<HoursOfOperationSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline HoursOfOperationSearchCriteria& WithOrConditions(const Aws::Vector<HoursOfOperationSearchCriteria>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline HoursOfOperationSearchCriteria& WithOrConditions(Aws::Vector<HoursOfOperationSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline HoursOfOperationSearchCriteria& AddOrConditions(const HoursOfOperationSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline HoursOfOperationSearchCriteria& AddOrConditions(HoursOfOperationSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<HoursOfOperationSearchCriteria>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(const Aws::Vector<HoursOfOperationSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(Aws::Vector<HoursOfOperationSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline HoursOfOperationSearchCriteria& WithAndConditions(const Aws::Vector<HoursOfOperationSearchCriteria>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline HoursOfOperationSearchCriteria& WithAndConditions(Aws::Vector<HoursOfOperationSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline HoursOfOperationSearchCriteria& AddAndConditions(const HoursOfOperationSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline HoursOfOperationSearchCriteria& AddAndConditions(HoursOfOperationSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, <code>timezone</code>, and
     * <code>resourceID</code>.</p> 
     */
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, <code>timezone</code>, and
     * <code>resourceID</code>.</p> 
     */
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, <code>timezone</code>, and
     * <code>resourceID</code>.</p> 
     */
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, <code>timezone</code>, and
     * <code>resourceID</code>.</p> 
     */
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, <code>timezone</code>, and
     * <code>resourceID</code>.</p> 
     */
    inline HoursOfOperationSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, <code>timezone</code>, and
     * <code>resourceID</code>.</p> 
     */
    inline HoursOfOperationSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<HoursOfOperationSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<HoursOfOperationSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
