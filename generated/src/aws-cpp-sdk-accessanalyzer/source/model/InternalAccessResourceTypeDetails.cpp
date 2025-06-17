/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/InternalAccessResourceTypeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

InternalAccessResourceTypeDetails::InternalAccessResourceTypeDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

InternalAccessResourceTypeDetails& InternalAccessResourceTypeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalActiveFindings"))
  {
    m_totalActiveFindings = jsonValue.GetInteger("totalActiveFindings");
    m_totalActiveFindingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalResolvedFindings"))
  {
    m_totalResolvedFindings = jsonValue.GetInteger("totalResolvedFindings");
    m_totalResolvedFindingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalArchivedFindings"))
  {
    m_totalArchivedFindings = jsonValue.GetInteger("totalArchivedFindings");
    m_totalArchivedFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue InternalAccessResourceTypeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_totalActiveFindingsHasBeenSet)
  {
   payload.WithInteger("totalActiveFindings", m_totalActiveFindings);

  }

  if(m_totalResolvedFindingsHasBeenSet)
  {
   payload.WithInteger("totalResolvedFindings", m_totalResolvedFindings);

  }

  if(m_totalArchivedFindingsHasBeenSet)
  {
   payload.WithInteger("totalArchivedFindings", m_totalArchivedFindings);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
