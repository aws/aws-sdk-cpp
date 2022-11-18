/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DescribeAffectedAccountsForOrganizationAsync(...)  SubmitAsync(&HealthClient::DescribeAffectedAccountsForOrganization, __VA_ARGS__)
#define DescribeAffectedAccountsForOrganizationCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeAffectedAccountsForOrganization, REQUEST)

#define DescribeAffectedEntitiesAsync(...)  SubmitAsync(&HealthClient::DescribeAffectedEntities, __VA_ARGS__)
#define DescribeAffectedEntitiesCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeAffectedEntities, REQUEST)

#define DescribeAffectedEntitiesForOrganizationAsync(...)  SubmitAsync(&HealthClient::DescribeAffectedEntitiesForOrganization, __VA_ARGS__)
#define DescribeAffectedEntitiesForOrganizationCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeAffectedEntitiesForOrganization, REQUEST)

#define DescribeEntityAggregatesAsync(...)  SubmitAsync(&HealthClient::DescribeEntityAggregates, __VA_ARGS__)
#define DescribeEntityAggregatesCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeEntityAggregates, REQUEST)

#define DescribeEventAggregatesAsync(...)  SubmitAsync(&HealthClient::DescribeEventAggregates, __VA_ARGS__)
#define DescribeEventAggregatesCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeEventAggregates, REQUEST)

#define DescribeEventDetailsAsync(...)  SubmitAsync(&HealthClient::DescribeEventDetails, __VA_ARGS__)
#define DescribeEventDetailsCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeEventDetails, REQUEST)

#define DescribeEventDetailsForOrganizationAsync(...)  SubmitAsync(&HealthClient::DescribeEventDetailsForOrganization, __VA_ARGS__)
#define DescribeEventDetailsForOrganizationCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeEventDetailsForOrganization, REQUEST)

#define DescribeEventTypesAsync(...)  SubmitAsync(&HealthClient::DescribeEventTypes, __VA_ARGS__)
#define DescribeEventTypesCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeEventTypes, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&HealthClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeEvents, REQUEST)

#define DescribeEventsForOrganizationAsync(...)  SubmitAsync(&HealthClient::DescribeEventsForOrganization, __VA_ARGS__)
#define DescribeEventsForOrganizationCallable(REQUEST)  SubmitCallable(&HealthClient::DescribeEventsForOrganization, REQUEST)




