/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/TTPsObservedDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

TTPsObservedDetail::TTPsObservedDetail() : 
    m_tacticHasBeenSet(false),
    m_techniqueHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_aPINameHasBeenSet(false),
    m_aPISuccessCount(0),
    m_aPISuccessCountHasBeenSet(false),
    m_aPIFailureCount(0),
    m_aPIFailureCountHasBeenSet(false)
{
}

TTPsObservedDetail::TTPsObservedDetail(JsonView jsonValue) : 
    m_tacticHasBeenSet(false),
    m_techniqueHasBeenSet(false),
    m_procedureHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_aPINameHasBeenSet(false),
    m_aPISuccessCount(0),
    m_aPISuccessCountHasBeenSet(false),
    m_aPIFailureCount(0),
    m_aPIFailureCountHasBeenSet(false)
{
  *this = jsonValue;
}

TTPsObservedDetail& TTPsObservedDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Tactic"))
  {
    m_tactic = jsonValue.GetString("Tactic");

    m_tacticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Technique"))
  {
    m_technique = jsonValue.GetString("Technique");

    m_techniqueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Procedure"))
  {
    m_procedure = jsonValue.GetString("Procedure");

    m_procedureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("APIName"))
  {
    m_aPIName = jsonValue.GetString("APIName");

    m_aPINameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("APISuccessCount"))
  {
    m_aPISuccessCount = jsonValue.GetInt64("APISuccessCount");

    m_aPISuccessCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("APIFailureCount"))
  {
    m_aPIFailureCount = jsonValue.GetInt64("APIFailureCount");

    m_aPIFailureCountHasBeenSet = true;
  }

  return *this;
}

JsonValue TTPsObservedDetail::Jsonize() const
{
  JsonValue payload;

  if(m_tacticHasBeenSet)
  {
   payload.WithString("Tactic", m_tactic);

  }

  if(m_techniqueHasBeenSet)
  {
   payload.WithString("Technique", m_technique);

  }

  if(m_procedureHasBeenSet)
  {
   payload.WithString("Procedure", m_procedure);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_aPINameHasBeenSet)
  {
   payload.WithString("APIName", m_aPIName);

  }

  if(m_aPISuccessCountHasBeenSet)
  {
   payload.WithInt64("APISuccessCount", m_aPISuccessCount);

  }

  if(m_aPIFailureCountHasBeenSet)
  {
   payload.WithInt64("APIFailureCount", m_aPIFailureCount);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
