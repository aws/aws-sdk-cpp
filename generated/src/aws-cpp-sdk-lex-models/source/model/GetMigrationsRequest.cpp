/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetMigrationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetMigrationsRequest::GetMigrationsRequest() : 
    m_sortByAttribute(MigrationSortAttribute::NOT_SET),
    m_sortByAttributeHasBeenSet(false),
    m_sortByOrder(SortOrder::NOT_SET),
    m_sortByOrderHasBeenSet(false),
    m_v1BotNameContainsHasBeenSet(false),
    m_migrationStatusEquals(MigrationStatus::NOT_SET),
    m_migrationStatusEqualsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetMigrationsRequest::SerializePayload() const
{
  return {};
}

void GetMigrationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sortByAttributeHasBeenSet)
    {
      ss << MigrationSortAttributeMapper::GetNameForMigrationSortAttribute(m_sortByAttribute);
      uri.AddQueryStringParameter("sortByAttribute", ss.str());
      ss.str("");
    }

    if(m_sortByOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortByOrder);
      uri.AddQueryStringParameter("sortByOrder", ss.str());
      ss.str("");
    }

    if(m_v1BotNameContainsHasBeenSet)
    {
      ss << m_v1BotNameContains;
      uri.AddQueryStringParameter("v1BotNameContains", ss.str());
      ss.str("");
    }

    if(m_migrationStatusEqualsHasBeenSet)
    {
      ss << MigrationStatusMapper::GetNameForMigrationStatus(m_migrationStatusEquals);
      uri.AddQueryStringParameter("migrationStatusEquals", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



