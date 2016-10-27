/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/NotificationType.h>
#include <aws/budgets/model/ComparisonOperator.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * Notification model. Each budget may contain multiple notifications with
   * different settings.
   */
  class AWS_BUDGETS_API Notification
  {
  public:
    Notification();
    Notification(const Aws::Utils::Json::JsonValue& jsonValue);
    Notification& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }

    
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }

    
    inline Notification& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}

    
    inline Notification& WithNotificationType(NotificationType&& value) { SetNotificationType(value); return *this;}

    
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    
    inline Notification& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    
    inline Notification& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(value); return *this;}

    
    inline double GetThreshold() const{ return m_threshold; }

    
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    
    inline Notification& WithThreshold(double value) { SetThreshold(value); return *this;}

  private:
    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet;
    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;
    double m_threshold;
    bool m_thresholdHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
