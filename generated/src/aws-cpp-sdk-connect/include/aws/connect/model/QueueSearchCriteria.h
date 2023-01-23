/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
#include <aws/connect/model/SearchableQueueType.h>
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
   * <p>The search criteria to be used to return queues.</p>  <p>The
   * <code>name</code> and <code>description</code> fields support "contains" queries
   * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
   * character lengths outside of this range will throw invalid results. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QueueSearchCriteria">AWS
   * API Reference</a></p>
   */
  class QueueSearchCriteria
  {
  public:
    AWS_CONNECT_API QueueSearchCriteria();
    AWS_CONNECT_API QueueSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QueueSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<QueueSearchCriteria>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<QueueSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<QueueSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline QueueSearchCriteria& WithOrConditions(const Aws::Vector<QueueSearchCriteria>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline QueueSearchCriteria& WithOrConditions(Aws::Vector<QueueSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline QueueSearchCriteria& AddOrConditions(const QueueSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline QueueSearchCriteria& AddOrConditions(QueueSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<QueueSearchCriteria>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(const Aws::Vector<QueueSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline void SetAndConditions(Aws::Vector<QueueSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline QueueSearchCriteria& WithAndConditions(const Aws::Vector<QueueSearchCriteria>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline QueueSearchCriteria& WithAndConditions(Aws::Vector<QueueSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline QueueSearchCriteria& AddAndConditions(const QueueSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline QueueSearchCriteria& AddAndConditions(QueueSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }

    
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }

    
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }

    
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }

    
    inline QueueSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}

    
    inline QueueSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}


    /**
     * <p>The type of queue.</p>
     */
    inline const SearchableQueueType& GetQueueTypeCondition() const{ return m_queueTypeCondition; }

    /**
     * <p>The type of queue.</p>
     */
    inline bool QueueTypeConditionHasBeenSet() const { return m_queueTypeConditionHasBeenSet; }

    /**
     * <p>The type of queue.</p>
     */
    inline void SetQueueTypeCondition(const SearchableQueueType& value) { m_queueTypeConditionHasBeenSet = true; m_queueTypeCondition = value; }

    /**
     * <p>The type of queue.</p>
     */
    inline void SetQueueTypeCondition(SearchableQueueType&& value) { m_queueTypeConditionHasBeenSet = true; m_queueTypeCondition = std::move(value); }

    /**
     * <p>The type of queue.</p>
     */
    inline QueueSearchCriteria& WithQueueTypeCondition(const SearchableQueueType& value) { SetQueueTypeCondition(value); return *this;}

    /**
     * <p>The type of queue.</p>
     */
    inline QueueSearchCriteria& WithQueueTypeCondition(SearchableQueueType&& value) { SetQueueTypeCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<QueueSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<QueueSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    SearchableQueueType m_queueTypeCondition;
    bool m_queueTypeConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
