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

#include <aws/forecast/model/DescribeForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeForecastResult::DescribeForecastResult()
{
}

DescribeForecastResult::DescribeForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeForecastResult& DescribeForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ForecastArn"))
  {
    m_forecastArn = jsonValue.GetString("ForecastArn");

  }

  if(jsonValue.ValueExists("ForecastName"))
  {
    m_forecastName = jsonValue.GetString("ForecastName");

  }

  if(jsonValue.ValueExists("ForecastTypes"))
  {
    Array<JsonView> forecastTypesJsonList = jsonValue.GetArray("ForecastTypes");
    for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
    {
      m_forecastTypes.push_back(forecastTypesJsonList[forecastTypesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("PredictorArn"))
  {
    m_predictorArn = jsonValue.GetString("PredictorArn");

  }

  if(jsonValue.ValueExists("DatasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("DatasetGroupArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

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
