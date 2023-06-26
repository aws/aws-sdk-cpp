/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/EvidenceInsights.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

EvidenceInsights::EvidenceInsights() : 
    m_noncompliantEvidenceCount(0),
    m_noncompliantEvidenceCountHasBeenSet(false),
    m_compliantEvidenceCount(0),
    m_compliantEvidenceCountHasBeenSet(false),
    m_inconclusiveEvidenceCount(0),
    m_inconclusiveEvidenceCountHasBeenSet(false)
{
}

EvidenceInsights::EvidenceInsights(JsonView jsonValue) : 
    m_noncompliantEvidenceCount(0),
    m_noncompliantEvidenceCountHasBeenSet(false),
    m_compliantEvidenceCount(0),
    m_compliantEvidenceCountHasBeenSet(false),
    m_inconclusiveEvidenceCount(0),
    m_inconclusiveEvidenceCountHasBeenSet(false)
{
  *this = jsonValue;
}

EvidenceInsights& EvidenceInsights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("noncompliantEvidenceCount"))
  {
    m_noncompliantEvidenceCount = jsonValue.GetInteger("noncompliantEvidenceCount");

    m_noncompliantEvidenceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compliantEvidenceCount"))
  {
    m_compliantEvidenceCount = jsonValue.GetInteger("compliantEvidenceCount");

    m_compliantEvidenceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inconclusiveEvidenceCount"))
  {
    m_inconclusiveEvidenceCount = jsonValue.GetInteger("inconclusiveEvidenceCount");

    m_inconclusiveEvidenceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue EvidenceInsights::Jsonize() const
{
  JsonValue payload;

  if(m_noncompliantEvidenceCountHasBeenSet)
  {
   payload.WithInteger("noncompliantEvidenceCount", m_noncompliantEvidenceCount);

  }

  if(m_compliantEvidenceCountHasBeenSet)
  {
   payload.WithInteger("compliantEvidenceCount", m_compliantEvidenceCount);

  }

  if(m_inconclusiveEvidenceCountHasBeenSet)
  {
   payload.WithInteger("inconclusiveEvidenceCount", m_inconclusiveEvidenceCount);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
