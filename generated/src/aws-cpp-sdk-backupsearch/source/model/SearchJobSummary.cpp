/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/SearchJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

SearchJobSummary::SearchJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchJobSummary& SearchJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SearchJobIdentifier"))
  {
    m_searchJobIdentifier = jsonValue.GetString("SearchJobIdentifier");
    m_searchJobIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchJobArn"))
  {
    m_searchJobArn = jsonValue.GetString("SearchJobArn");
    m_searchJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SearchJobStateMapper::GetSearchJobStateForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchScopeSummary"))
  {
    m_searchScopeSummary = jsonValue.GetObject("SearchScopeSummary");
    m_searchScopeSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_searchJobIdentifierHasBeenSet)
  {
   payload.WithString("SearchJobIdentifier", m_searchJobIdentifier);

  }

  if(m_searchJobArnHasBeenSet)
  {
   payload.WithString("SearchJobArn", m_searchJobArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SearchJobStateMapper::GetNameForSearchJobState(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_searchScopeSummaryHasBeenSet)
  {
   payload.WithObject("SearchScopeSummary", m_searchScopeSummary.Jsonize());

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
