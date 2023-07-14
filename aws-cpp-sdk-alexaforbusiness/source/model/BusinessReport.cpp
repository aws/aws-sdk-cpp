/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/BusinessReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

BusinessReport::BusinessReport() : 
    m_status(BusinessReportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureCode(BusinessReportFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_deliveryTimeHasBeenSet(false),
    m_downloadUrlHasBeenSet(false)
{
}

BusinessReport::BusinessReport(JsonView jsonValue) : 
    m_status(BusinessReportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureCode(BusinessReportFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_deliveryTimeHasBeenSet(false),
    m_downloadUrlHasBeenSet(false)
{
  *this = jsonValue;
}

BusinessReport& BusinessReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = BusinessReportStatusMapper::GetBusinessReportStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureCode"))
  {
    m_failureCode = BusinessReportFailureCodeMapper::GetBusinessReportFailureCodeForName(jsonValue.GetString("FailureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Location"))
  {
    m_s3Location = jsonValue.GetObject("S3Location");

    m_s3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryTime"))
  {
    m_deliveryTime = jsonValue.GetDouble("DeliveryTime");

    m_deliveryTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DownloadUrl"))
  {
    m_downloadUrl = jsonValue.GetString("DownloadUrl");

    m_downloadUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue BusinessReport::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", BusinessReportStatusMapper::GetNameForBusinessReportStatus(m_status));
  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("FailureCode", BusinessReportFailureCodeMapper::GetNameForBusinessReportFailureCode(m_failureCode));
  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("S3Location", m_s3Location.Jsonize());

  }

  if(m_deliveryTimeHasBeenSet)
  {
   payload.WithDouble("DeliveryTime", m_deliveryTime.SecondsWithMSPrecision());
  }

  if(m_downloadUrlHasBeenSet)
  {
   payload.WithString("DownloadUrl", m_downloadUrl);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
