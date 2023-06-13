/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/MetricsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

MetricsSummary::MetricsSummary() : 
    m_categoriesWithMostFindingsHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_openFindingsHasBeenSet(false),
    m_scansWithMostOpenCriticalFindingsHasBeenSet(false),
    m_scansWithMostOpenFindingsHasBeenSet(false)
{
}

MetricsSummary::MetricsSummary(JsonView jsonValue) : 
    m_categoriesWithMostFindingsHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_openFindingsHasBeenSet(false),
    m_scansWithMostOpenCriticalFindingsHasBeenSet(false),
    m_scansWithMostOpenFindingsHasBeenSet(false)
{
  *this = jsonValue;
}

MetricsSummary& MetricsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("categoriesWithMostFindings"))
  {
    Aws::Utils::Array<JsonView> categoriesWithMostFindingsJsonList = jsonValue.GetArray("categoriesWithMostFindings");
    for(unsigned categoriesWithMostFindingsIndex = 0; categoriesWithMostFindingsIndex < categoriesWithMostFindingsJsonList.GetLength(); ++categoriesWithMostFindingsIndex)
    {
      m_categoriesWithMostFindings.push_back(categoriesWithMostFindingsJsonList[categoriesWithMostFindingsIndex].AsObject());
    }
    m_categoriesWithMostFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("date"))
  {
    m_date = jsonValue.GetDouble("date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openFindings"))
  {
    m_openFindings = jsonValue.GetObject("openFindings");

    m_openFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scansWithMostOpenCriticalFindings"))
  {
    Aws::Utils::Array<JsonView> scansWithMostOpenCriticalFindingsJsonList = jsonValue.GetArray("scansWithMostOpenCriticalFindings");
    for(unsigned scansWithMostOpenCriticalFindingsIndex = 0; scansWithMostOpenCriticalFindingsIndex < scansWithMostOpenCriticalFindingsJsonList.GetLength(); ++scansWithMostOpenCriticalFindingsIndex)
    {
      m_scansWithMostOpenCriticalFindings.push_back(scansWithMostOpenCriticalFindingsJsonList[scansWithMostOpenCriticalFindingsIndex].AsObject());
    }
    m_scansWithMostOpenCriticalFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scansWithMostOpenFindings"))
  {
    Aws::Utils::Array<JsonView> scansWithMostOpenFindingsJsonList = jsonValue.GetArray("scansWithMostOpenFindings");
    for(unsigned scansWithMostOpenFindingsIndex = 0; scansWithMostOpenFindingsIndex < scansWithMostOpenFindingsJsonList.GetLength(); ++scansWithMostOpenFindingsIndex)
    {
      m_scansWithMostOpenFindings.push_back(scansWithMostOpenFindingsJsonList[scansWithMostOpenFindingsIndex].AsObject());
    }
    m_scansWithMostOpenFindingsHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_categoriesWithMostFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesWithMostFindingsJsonList(m_categoriesWithMostFindings.size());
   for(unsigned categoriesWithMostFindingsIndex = 0; categoriesWithMostFindingsIndex < categoriesWithMostFindingsJsonList.GetLength(); ++categoriesWithMostFindingsIndex)
   {
     categoriesWithMostFindingsJsonList[categoriesWithMostFindingsIndex].AsObject(m_categoriesWithMostFindings[categoriesWithMostFindingsIndex].Jsonize());
   }
   payload.WithArray("categoriesWithMostFindings", std::move(categoriesWithMostFindingsJsonList));

  }

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("date", m_date.SecondsWithMSPrecision());
  }

  if(m_openFindingsHasBeenSet)
  {
   payload.WithObject("openFindings", m_openFindings.Jsonize());

  }

  if(m_scansWithMostOpenCriticalFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scansWithMostOpenCriticalFindingsJsonList(m_scansWithMostOpenCriticalFindings.size());
   for(unsigned scansWithMostOpenCriticalFindingsIndex = 0; scansWithMostOpenCriticalFindingsIndex < scansWithMostOpenCriticalFindingsJsonList.GetLength(); ++scansWithMostOpenCriticalFindingsIndex)
   {
     scansWithMostOpenCriticalFindingsJsonList[scansWithMostOpenCriticalFindingsIndex].AsObject(m_scansWithMostOpenCriticalFindings[scansWithMostOpenCriticalFindingsIndex].Jsonize());
   }
   payload.WithArray("scansWithMostOpenCriticalFindings", std::move(scansWithMostOpenCriticalFindingsJsonList));

  }

  if(m_scansWithMostOpenFindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scansWithMostOpenFindingsJsonList(m_scansWithMostOpenFindings.size());
   for(unsigned scansWithMostOpenFindingsIndex = 0; scansWithMostOpenFindingsIndex < scansWithMostOpenFindingsJsonList.GetLength(); ++scansWithMostOpenFindingsIndex)
   {
     scansWithMostOpenFindingsJsonList[scansWithMostOpenFindingsIndex].AsObject(m_scansWithMostOpenFindings[scansWithMostOpenFindingsIndex].Jsonize());
   }
   payload.WithArray("scansWithMostOpenFindings", std::move(scansWithMostOpenFindingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
