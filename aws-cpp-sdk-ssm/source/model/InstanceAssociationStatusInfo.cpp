/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/InstanceAssociationStatusInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceAssociationStatusInfo::InstanceAssociationStatusInfo() : 
    m_associationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_executionDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_executionSummaryHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_outputUrlHasBeenSet(false)
{
}

InstanceAssociationStatusInfo::InstanceAssociationStatusInfo(const JsonValue& jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_executionDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_executionSummaryHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_outputUrlHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAssociationStatusInfo& InstanceAssociationStatusInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionDate"))
  {
    m_executionDate = jsonValue.GetDouble("ExecutionDate");

    m_executionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetailedStatus"))
  {
    m_detailedStatus = jsonValue.GetString("DetailedStatus");

    m_detailedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionSummary"))
  {
    m_executionSummary = jsonValue.GetString("ExecutionSummary");

    m_executionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputUrl"))
  {
    m_outputUrl = jsonValue.GetObject("OutputUrl");

    m_outputUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAssociationStatusInfo::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_executionDateHasBeenSet)
  {
   payload.WithDouble("ExecutionDate", m_executionDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_detailedStatusHasBeenSet)
  {
   payload.WithString("DetailedStatus", m_detailedStatus);

  }

  if(m_executionSummaryHasBeenSet)
  {
   payload.WithString("ExecutionSummary", m_executionSummary);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_outputUrlHasBeenSet)
  {
   payload.WithObject("OutputUrl", m_outputUrl.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws