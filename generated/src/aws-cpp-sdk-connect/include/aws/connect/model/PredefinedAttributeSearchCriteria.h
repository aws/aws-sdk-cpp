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
   * <p>The search criteria to be used to return predefined attributes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PredefinedAttributeSearchCriteria">AWS
   * API Reference</a></p>
   */
  class PredefinedAttributeSearchCriteria
  {
  public:
    AWS_CONNECT_API PredefinedAttributeSearchCriteria();
    AWS_CONNECT_API PredefinedAttributeSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PredefinedAttributeSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<PredefinedAttributeSearchCriteria>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<PredefinedAttributeSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<PredefinedAttributeSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline PredefinedAttributeSearchCriteria& WithOrConditions(const Aws::Vector<PredefinedAttributeSearchCriteria>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline PredefinedAttributeSearchCriteria& WithOrConditions(Aws::Vector<PredefinedAttributeSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline PredefinedAttributeSearchCriteria& AddOrConditions(const PredefinedAttributeSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline PredefinedAttributeSearchCriteria& AddOrConditions(PredefinedAttributeSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<PredefinedAttributeSearchCriteria>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline void SetAndConditions(const Aws::Vector<PredefinedAttributeSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline void SetAndConditions(Aws::Vector<PredefinedAttributeSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline PredefinedAttributeSearchCriteria& WithAndConditions(const Aws::Vector<PredefinedAttributeSearchCriteria>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline PredefinedAttributeSearchCriteria& WithAndConditions(Aws::Vector<PredefinedAttributeSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline PredefinedAttributeSearchCriteria& AddAndConditions(const PredefinedAttributeSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline PredefinedAttributeSearchCriteria& AddAndConditions(PredefinedAttributeSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }

    
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }

    
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }

    
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }

    
    inline PredefinedAttributeSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}

    
    inline PredefinedAttributeSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<PredefinedAttributeSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<PredefinedAttributeSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
