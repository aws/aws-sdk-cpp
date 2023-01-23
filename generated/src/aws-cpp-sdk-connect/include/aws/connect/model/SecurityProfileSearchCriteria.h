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
   * <p>The search criteria to be used to return security profiles.</p>  <p>The
   * <code>name</code> field support "contains" queries with a minimum of 2
   * characters and maximum of 25 characters. Any queries with character lengths
   * outside of this range will throw invalid results.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SecurityProfileSearchCriteria">AWS
   * API Reference</a></p>
   */
  class SecurityProfileSearchCriteria
  {
  public:
    AWS_CONNECT_API SecurityProfileSearchCriteria();
    AWS_CONNECT_API SecurityProfileSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SecurityProfileSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<SecurityProfileSearchCriteria>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<SecurityProfileSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<SecurityProfileSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline SecurityProfileSearchCriteria& WithOrConditions(const Aws::Vector<SecurityProfileSearchCriteria>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline SecurityProfileSearchCriteria& WithOrConditions(Aws::Vector<SecurityProfileSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline SecurityProfileSearchCriteria& AddOrConditions(const SecurityProfileSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline SecurityProfileSearchCriteria& AddOrConditions(SecurityProfileSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<SecurityProfileSearchCriteria>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(const Aws::Vector<SecurityProfileSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(Aws::Vector<SecurityProfileSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline SecurityProfileSearchCriteria& WithAndConditions(const Aws::Vector<SecurityProfileSearchCriteria>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline SecurityProfileSearchCriteria& WithAndConditions(Aws::Vector<SecurityProfileSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline SecurityProfileSearchCriteria& AddAndConditions(const SecurityProfileSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline SecurityProfileSearchCriteria& AddAndConditions(SecurityProfileSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }

    
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }

    
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }

    
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }

    
    inline SecurityProfileSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}

    
    inline SecurityProfileSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<SecurityProfileSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<SecurityProfileSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
