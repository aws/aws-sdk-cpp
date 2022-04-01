/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeForecastExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeForecastExportJobResult::DescribeForecastExportJobResult()
{
}

DescribeForecastExportJobResult::DescribeForecastExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeForecastExportJobResult& DescribeForecastExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ForecastExportJobArn"))
  {
    m_forecastExportJobArn = jsonValue.GetString("ForecastExportJobArn");

  }

  if(jsonValue.ValueExists("ForecastExportJobName"))
  {
    m_forecastExportJobName = jsonValue.GetString("ForecastExportJobName");

  }

  if(jsonValue.ValueExists("ForecastArn"))
  {
    m_forecastArn = jsonValue.GetString("ForecastArn");

  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }



  return *this;
}
