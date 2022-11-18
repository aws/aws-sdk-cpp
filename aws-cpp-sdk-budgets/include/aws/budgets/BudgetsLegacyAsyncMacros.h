/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateBudgetAsync(...)  SubmitAsync(&BudgetsClient::CreateBudget, __VA_ARGS__)
#define CreateBudgetCallable(REQUEST)  SubmitCallable(&BudgetsClient::CreateBudget, REQUEST)

#define CreateBudgetActionAsync(...)  SubmitAsync(&BudgetsClient::CreateBudgetAction, __VA_ARGS__)
#define CreateBudgetActionCallable(REQUEST)  SubmitCallable(&BudgetsClient::CreateBudgetAction, REQUEST)

#define CreateNotificationAsync(...)  SubmitAsync(&BudgetsClient::CreateNotification, __VA_ARGS__)
#define CreateNotificationCallable(REQUEST)  SubmitCallable(&BudgetsClient::CreateNotification, REQUEST)

#define CreateSubscriberAsync(...)  SubmitAsync(&BudgetsClient::CreateSubscriber, __VA_ARGS__)
#define CreateSubscriberCallable(REQUEST)  SubmitCallable(&BudgetsClient::CreateSubscriber, REQUEST)

#define DeleteBudgetAsync(...)  SubmitAsync(&BudgetsClient::DeleteBudget, __VA_ARGS__)
#define DeleteBudgetCallable(REQUEST)  SubmitCallable(&BudgetsClient::DeleteBudget, REQUEST)

#define DeleteBudgetActionAsync(...)  SubmitAsync(&BudgetsClient::DeleteBudgetAction, __VA_ARGS__)
#define DeleteBudgetActionCallable(REQUEST)  SubmitCallable(&BudgetsClient::DeleteBudgetAction, REQUEST)

#define DeleteNotificationAsync(...)  SubmitAsync(&BudgetsClient::DeleteNotification, __VA_ARGS__)
#define DeleteNotificationCallable(REQUEST)  SubmitCallable(&BudgetsClient::DeleteNotification, REQUEST)

#define DeleteSubscriberAsync(...)  SubmitAsync(&BudgetsClient::DeleteSubscriber, __VA_ARGS__)
#define DeleteSubscriberCallable(REQUEST)  SubmitCallable(&BudgetsClient::DeleteSubscriber, REQUEST)

#define DescribeBudgetAsync(...)  SubmitAsync(&BudgetsClient::DescribeBudget, __VA_ARGS__)
#define DescribeBudgetCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeBudget, REQUEST)

#define DescribeBudgetActionAsync(...)  SubmitAsync(&BudgetsClient::DescribeBudgetAction, __VA_ARGS__)
#define DescribeBudgetActionCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeBudgetAction, REQUEST)

#define DescribeBudgetActionHistoriesAsync(...)  SubmitAsync(&BudgetsClient::DescribeBudgetActionHistories, __VA_ARGS__)
#define DescribeBudgetActionHistoriesCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeBudgetActionHistories, REQUEST)

#define DescribeBudgetActionsForAccountAsync(...)  SubmitAsync(&BudgetsClient::DescribeBudgetActionsForAccount, __VA_ARGS__)
#define DescribeBudgetActionsForAccountCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeBudgetActionsForAccount, REQUEST)

#define DescribeBudgetActionsForBudgetAsync(...)  SubmitAsync(&BudgetsClient::DescribeBudgetActionsForBudget, __VA_ARGS__)
#define DescribeBudgetActionsForBudgetCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeBudgetActionsForBudget, REQUEST)

#define DescribeBudgetNotificationsForAccountAsync(...)  SubmitAsync(&BudgetsClient::DescribeBudgetNotificationsForAccount, __VA_ARGS__)
#define DescribeBudgetNotificationsForAccountCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeBudgetNotificationsForAccount, REQUEST)

#define DescribeBudgetPerformanceHistoryAsync(...)  SubmitAsync(&BudgetsClient::DescribeBudgetPerformanceHistory, __VA_ARGS__)
#define DescribeBudgetPerformanceHistoryCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeBudgetPerformanceHistory, REQUEST)

#define DescribeBudgetsAsync(...)  SubmitAsync(&BudgetsClient::DescribeBudgets, __VA_ARGS__)
#define DescribeBudgetsCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeBudgets, REQUEST)

#define DescribeNotificationsForBudgetAsync(...)  SubmitAsync(&BudgetsClient::DescribeNotificationsForBudget, __VA_ARGS__)
#define DescribeNotificationsForBudgetCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeNotificationsForBudget, REQUEST)

#define DescribeSubscribersForNotificationAsync(...)  SubmitAsync(&BudgetsClient::DescribeSubscribersForNotification, __VA_ARGS__)
#define DescribeSubscribersForNotificationCallable(REQUEST)  SubmitCallable(&BudgetsClient::DescribeSubscribersForNotification, REQUEST)

#define ExecuteBudgetActionAsync(...)  SubmitAsync(&BudgetsClient::ExecuteBudgetAction, __VA_ARGS__)
#define ExecuteBudgetActionCallable(REQUEST)  SubmitCallable(&BudgetsClient::ExecuteBudgetAction, REQUEST)

#define UpdateBudgetAsync(...)  SubmitAsync(&BudgetsClient::UpdateBudget, __VA_ARGS__)
#define UpdateBudgetCallable(REQUEST)  SubmitCallable(&BudgetsClient::UpdateBudget, REQUEST)

#define UpdateBudgetActionAsync(...)  SubmitAsync(&BudgetsClient::UpdateBudgetAction, __VA_ARGS__)
#define UpdateBudgetActionCallable(REQUEST)  SubmitCallable(&BudgetsClient::UpdateBudgetAction, REQUEST)

#define UpdateNotificationAsync(...)  SubmitAsync(&BudgetsClient::UpdateNotification, __VA_ARGS__)
#define UpdateNotificationCallable(REQUEST)  SubmitCallable(&BudgetsClient::UpdateNotification, REQUEST)

#define UpdateSubscriberAsync(...)  SubmitAsync(&BudgetsClient::UpdateSubscriber, __VA_ARGS__)
#define UpdateSubscriberCallable(REQUEST)  SubmitCallable(&BudgetsClient::UpdateSubscriber, REQUEST)

