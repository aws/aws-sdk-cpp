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
   * <p>The search criteria to be used to return quick connects.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QuickConnectSearchCriteria">AWS
   * API Reference</a></p>
   */
  class QuickConnectSearchCriteria
  {
  public:
    AWS_CONNECT_API QuickConnectSearchCriteria();
    AWS_CONNECT_API QuickConnectSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QuickConnectSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<QuickConnectSearchCriteria>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<QuickConnectSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<QuickConnectSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline QuickConnectSearchCriteria& WithOrConditions(const Aws::Vector<QuickConnectSearchCriteria>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline QuickConnectSearchCriteria& WithOrConditions(Aws::Vector<QuickConnectSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline QuickConnectSearchCriteria& AddOrConditions(const QuickConnectSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline QuickConnectSearchCriteria& AddOrConditions(QuickConnectSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<QuickConnectSearchCriteria>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(const Aws::Vector<QuickConnectSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(Aws::Vector<QuickConnectSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline QuickConnectSearchCriteria& WithAndConditions(const Aws::Vector<QuickConnectSearchCriteria>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline QuickConnectSearchCriteria& WithAndConditions(Aws::Vector<QuickConnectSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline QuickConnectSearchCriteria& AddAndConditions(const QuickConnectSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline QuickConnectSearchCriteria& AddAndConditions(QuickConnectSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, and <code>resourceID</code>.</p>
     * 
     */
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, and <code>resourceID</code>.</p>
     * 
     */
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, and <code>resourceID</code>.</p>
     * 
     */
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, and <code>resourceID</code>.</p>
     * 
     */
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, and <code>resourceID</code>.</p>
     * 
     */
    inline QuickConnectSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>, <code>description</code>, and <code>resourceID</code>.</p>
     * 
     */
    inline QuickConnectSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<QuickConnectSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<QuickConnectSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
