/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/EventTriggerLogicalOperator.h>
#include <aws/customer-profiles/model/EventTriggerDimension.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Specifies the circumstances under which the event should trigger the
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventTriggerCondition">AWS
   * API Reference</a></p>
   */
  class EventTriggerCondition
  {
  public:
    AWS_CUSTOMERPROFILES_API EventTriggerCondition();
    AWS_CUSTOMERPROFILES_API EventTriggerCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventTriggerCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of dimensions to be evaluated for the event.</p>
     */
    inline const Aws::Vector<EventTriggerDimension>& GetEventTriggerDimensions() const{ return m_eventTriggerDimensions; }
    inline bool EventTriggerDimensionsHasBeenSet() const { return m_eventTriggerDimensionsHasBeenSet; }
    inline void SetEventTriggerDimensions(const Aws::Vector<EventTriggerDimension>& value) { m_eventTriggerDimensionsHasBeenSet = true; m_eventTriggerDimensions = value; }
    inline void SetEventTriggerDimensions(Aws::Vector<EventTriggerDimension>&& value) { m_eventTriggerDimensionsHasBeenSet = true; m_eventTriggerDimensions = std::move(value); }
    inline EventTriggerCondition& WithEventTriggerDimensions(const Aws::Vector<EventTriggerDimension>& value) { SetEventTriggerDimensions(value); return *this;}
    inline EventTriggerCondition& WithEventTriggerDimensions(Aws::Vector<EventTriggerDimension>&& value) { SetEventTriggerDimensions(std::move(value)); return *this;}
    inline EventTriggerCondition& AddEventTriggerDimensions(const EventTriggerDimension& value) { m_eventTriggerDimensionsHasBeenSet = true; m_eventTriggerDimensions.push_back(value); return *this; }
    inline EventTriggerCondition& AddEventTriggerDimensions(EventTriggerDimension&& value) { m_eventTriggerDimensionsHasBeenSet = true; m_eventTriggerDimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator used to combine multiple dimensions.</p>
     */
    inline const EventTriggerLogicalOperator& GetLogicalOperator() const{ return m_logicalOperator; }
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }
    inline void SetLogicalOperator(const EventTriggerLogicalOperator& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }
    inline void SetLogicalOperator(EventTriggerLogicalOperator&& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = std::move(value); }
    inline EventTriggerCondition& WithLogicalOperator(const EventTriggerLogicalOperator& value) { SetLogicalOperator(value); return *this;}
    inline EventTriggerCondition& WithLogicalOperator(EventTriggerLogicalOperator&& value) { SetLogicalOperator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventTriggerDimension> m_eventTriggerDimensions;
    bool m_eventTriggerDimensionsHasBeenSet = false;

    EventTriggerLogicalOperator m_logicalOperator;
    bool m_logicalOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
