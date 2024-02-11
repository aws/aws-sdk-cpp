/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/AccountFindingsMetric.h>
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

AccountFindingsMetric::AccountFindingsMetric() : 
    m_closedFindingsHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_meanTimeToCloseHasBeenSet(false),
    m_newFindingsHasBeenSet(false),
    m_openFindingsHasBeenSet(false)
{
}

AccountFindingsMetric::AccountFindingsMetric(JsonView jsonValue) : 
    m_closedFindingsHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_meanTimeToCloseHasBeenSet(false),
    m_newFindingsHasBeenSet(false),
    m_openFindingsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountFindingsMetric& AccountFindingsMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("closedFindings"))
  {
    m_closedFindings = jsonValue.GetObject("closedFindings");

    m_closedFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("date"))
  {
    m_date = jsonValue.GetDouble("date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("meanTimeToClose"))
  {
    m_meanTimeToClose = jsonValue.GetObject("meanTimeToClose");

    m_meanTimeToCloseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("newFindings"))
  {
    m_newFindings = jsonValue.GetObject("newFindings");

    m_newFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openFindings"))
  {
    m_openFindings = jsonValue.GetObject("openFindings");

    m_openFindingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountFindingsMetric::Jsonize() const
{
  JsonValue payload;

  if(m_closedFindingsHasBeenSet)
  {
   payload.WithObject("closedFindings", m_closedFindings.Jsonize());

  }

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("date", m_date.SecondsWithMSPrecision());
  }

  if(m_meanTimeToCloseHasBeenSet)
  {
   payload.WithObject("meanTimeToClose", m_meanTimeToClose.Jsonize());

  }

  if(m_newFindingsHasBeenSet)
  {
   payload.WithObject("newFindings", m_newFindings.Jsonize());

  }

  if(m_openFindingsHasBeenSet)
  {
   payload.WithObject("openFindings", m_openFindings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
