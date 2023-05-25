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
   * <p>The search criteria to be used to return routing profiles.</p>  <p>The
   * <code>name</code> and <code>description</code> fields support "contains" queries
   * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
   * character lengths outside of this range will throw invalid results. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingProfileSearchCriteria">AWS
   * API Reference</a></p>
   */
  class RoutingProfileSearchCriteria
  {
  public:
    AWS_CONNECT_API RoutingProfileSearchCriteria();
    AWS_CONNECT_API RoutingProfileSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfileSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<RoutingProfileSearchCriteria>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<RoutingProfileSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<RoutingProfileSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline RoutingProfileSearchCriteria& WithOrConditions(const Aws::Vector<RoutingProfileSearchCriteria>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline RoutingProfileSearchCriteria& WithOrConditions(Aws::Vector<RoutingProfileSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline RoutingProfileSearchCriteria& AddOrConditions(const RoutingProfileSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline RoutingProfileSearchCriteria& AddOrConditions(RoutingProfileSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<RoutingProfileSearchCriteria>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(const Aws::Vector<RoutingProfileSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(Aws::Vector<RoutingProfileSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline RoutingProfileSearchCriteria& WithAndConditions(const Aws::Vector<RoutingProfileSearchCriteria>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline RoutingProfileSearchCriteria& WithAndConditions(Aws::Vector<RoutingProfileSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline RoutingProfileSearchCriteria& AddAndConditions(const RoutingProfileSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline RoutingProfileSearchCriteria& AddAndConditions(RoutingProfileSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }

    
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }

    
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }

    
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }

    
    inline RoutingProfileSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}

    
    inline RoutingProfileSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<RoutingProfileSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<RoutingProfileSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
