/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DataSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

DataSetSummary::DataSetSummary() : 
    m_creationTimeHasBeenSet(false),
    m_dataSetNameHasBeenSet(false),
    m_dataSetOrgHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_lastReferencedTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

DataSetSummary::DataSetSummary(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_dataSetNameHasBeenSet(false),
    m_dataSetOrgHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_lastReferencedTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetSummary& DataSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSetName"))
  {
    m_dataSetName = jsonValue.GetString("dataSetName");

    m_dataSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSetOrg"))
  {
    m_dataSetOrg = jsonValue.GetString("dataSetOrg");

    m_dataSetOrgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = jsonValue.GetString("format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastReferencedTime"))
  {
    m_lastReferencedTime = jsonValue.GetDouble("lastReferencedTime");

    m_lastReferencedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_dataSetNameHasBeenSet)
  {
   payload.WithString("dataSetName", m_dataSetName);

  }

  if(m_dataSetOrgHasBeenSet)
  {
   payload.WithString("dataSetOrg", m_dataSetOrg);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", m_format);

  }

  if(m_lastReferencedTimeHasBeenSet)
  {
   payload.WithDouble("lastReferencedTime", m_lastReferencedTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
