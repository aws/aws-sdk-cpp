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

#include <aws/sesv2/model/DeliverabilityTestReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DeliverabilityTestReport::DeliverabilityTestReport() : 
    m_reportIdHasBeenSet(false),
    m_reportNameHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_deliverabilityTestStatus(DeliverabilityTestStatus::NOT_SET),
    m_deliverabilityTestStatusHasBeenSet(false)
{
}

DeliverabilityTestReport::DeliverabilityTestReport(JsonView jsonValue) : 
    m_reportIdHasBeenSet(false),
    m_reportNameHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_deliverabilityTestStatus(DeliverabilityTestStatus::NOT_SET),
    m_deliverabilityTestStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DeliverabilityTestReport& DeliverabilityTestReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReportId"))
  {
    m_reportId = jsonValue.GetString("ReportId");

    m_reportIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportName"))
  {
    m_reportName = jsonValue.GetString("ReportName");

    m_reportNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromEmailAddress"))
  {
    m_fromEmailAddress = jsonValue.GetString("FromEmailAddress");

    m_fromEmailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliverabilityTestStatus"))
  {
    m_deliverabilityTestStatus = DeliverabilityTestStatusMapper::GetDeliverabilityTestStatusForName(jsonValue.GetString("DeliverabilityTestStatus"));

    m_deliverabilityTestStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DeliverabilityTestReport::Jsonize() const
{
  JsonValue payload;

  if(m_reportIdHasBeenSet)
  {
   payload.WithString("ReportId", m_reportId);

  }

  if(m_reportNameHasBeenSet)
  {
   payload.WithString("ReportName", m_reportName);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_fromEmailAddressHasBeenSet)
  {
   payload.WithString("FromEmailAddress", m_fromEmailAddress);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  if(m_deliverabilityTestStatusHasBeenSet)
  {
   payload.WithString("DeliverabilityTestStatus", DeliverabilityTestStatusMapper::GetNameForDeliverabilityTestStatus(m_deliverabilityTestStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
