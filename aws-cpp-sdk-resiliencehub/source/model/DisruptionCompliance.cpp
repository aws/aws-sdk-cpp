/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DisruptionCompliance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

DisruptionCompliance::DisruptionCompliance() : 
    m_achievableRpoInSecs(0),
    m_achievableRpoInSecsHasBeenSet(false),
    m_achievableRtoInSecs(0),
    m_achievableRtoInSecsHasBeenSet(false),
    m_complianceStatus(ComplianceStatus::NOT_SET),
    m_complianceStatusHasBeenSet(false),
    m_currentRpoInSecs(0),
    m_currentRpoInSecsHasBeenSet(false),
    m_currentRtoInSecs(0),
    m_currentRtoInSecsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_rpoDescriptionHasBeenSet(false),
    m_rpoReferenceIdHasBeenSet(false),
    m_rtoDescriptionHasBeenSet(false),
    m_rtoReferenceIdHasBeenSet(false)
{
}

DisruptionCompliance::DisruptionCompliance(JsonView jsonValue) : 
    m_achievableRpoInSecs(0),
    m_achievableRpoInSecsHasBeenSet(false),
    m_achievableRtoInSecs(0),
    m_achievableRtoInSecsHasBeenSet(false),
    m_complianceStatus(ComplianceStatus::NOT_SET),
    m_complianceStatusHasBeenSet(false),
    m_currentRpoInSecs(0),
    m_currentRpoInSecsHasBeenSet(false),
    m_currentRtoInSecs(0),
    m_currentRtoInSecsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_rpoDescriptionHasBeenSet(false),
    m_rpoReferenceIdHasBeenSet(false),
    m_rtoDescriptionHasBeenSet(false),
    m_rtoReferenceIdHasBeenSet(false)
{
  *this = jsonValue;
}

DisruptionCompliance& DisruptionCompliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("achievableRpoInSecs"))
  {
    m_achievableRpoInSecs = jsonValue.GetInteger("achievableRpoInSecs");

    m_achievableRpoInSecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("achievableRtoInSecs"))
  {
    m_achievableRtoInSecs = jsonValue.GetInteger("achievableRtoInSecs");

    m_achievableRtoInSecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("complianceStatus"))
  {
    m_complianceStatus = ComplianceStatusMapper::GetComplianceStatusForName(jsonValue.GetString("complianceStatus"));

    m_complianceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentRpoInSecs"))
  {
    m_currentRpoInSecs = jsonValue.GetInteger("currentRpoInSecs");

    m_currentRpoInSecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentRtoInSecs"))
  {
    m_currentRtoInSecs = jsonValue.GetInteger("currentRtoInSecs");

    m_currentRtoInSecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rpoDescription"))
  {
    m_rpoDescription = jsonValue.GetString("rpoDescription");

    m_rpoDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rpoReferenceId"))
  {
    m_rpoReferenceId = jsonValue.GetString("rpoReferenceId");

    m_rpoReferenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rtoDescription"))
  {
    m_rtoDescription = jsonValue.GetString("rtoDescription");

    m_rtoDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rtoReferenceId"))
  {
    m_rtoReferenceId = jsonValue.GetString("rtoReferenceId");

    m_rtoReferenceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DisruptionCompliance::Jsonize() const
{
  JsonValue payload;

  if(m_achievableRpoInSecsHasBeenSet)
  {
   payload.WithInteger("achievableRpoInSecs", m_achievableRpoInSecs);

  }

  if(m_achievableRtoInSecsHasBeenSet)
  {
   payload.WithInteger("achievableRtoInSecs", m_achievableRtoInSecs);

  }

  if(m_complianceStatusHasBeenSet)
  {
   payload.WithString("complianceStatus", ComplianceStatusMapper::GetNameForComplianceStatus(m_complianceStatus));
  }

  if(m_currentRpoInSecsHasBeenSet)
  {
   payload.WithInteger("currentRpoInSecs", m_currentRpoInSecs);

  }

  if(m_currentRtoInSecsHasBeenSet)
  {
   payload.WithInteger("currentRtoInSecs", m_currentRtoInSecs);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_rpoDescriptionHasBeenSet)
  {
   payload.WithString("rpoDescription", m_rpoDescription);

  }

  if(m_rpoReferenceIdHasBeenSet)
  {
   payload.WithString("rpoReferenceId", m_rpoReferenceId);

  }

  if(m_rtoDescriptionHasBeenSet)
  {
   payload.WithString("rtoDescription", m_rtoDescription);

  }

  if(m_rtoReferenceIdHasBeenSet)
  {
   payload.WithString("rtoReferenceId", m_rtoReferenceId);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
