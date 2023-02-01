/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/AddApplicationReferenceDataSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddApplicationReferenceDataSourceResult::AddApplicationReferenceDataSourceResult() : 
    m_applicationVersionId(0)
{
}

AddApplicationReferenceDataSourceResult::AddApplicationReferenceDataSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_applicationVersionId(0)
{
  *this = result;
}

AddApplicationReferenceDataSourceResult& AddApplicationReferenceDataSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationARN"))
  {
    m_applicationARN = jsonValue.GetString("ApplicationARN");

  }

  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

  }

  if(jsonValue.ValueExists("ReferenceDataSourceDescriptions"))
  {
    Aws::Utils::Array<JsonView> referenceDataSourceDescriptionsJsonList = jsonValue.GetArray("ReferenceDataSourceDescriptions");
    for(unsigned referenceDataSourceDescriptionsIndex = 0; referenceDataSourceDescriptionsIndex < referenceDataSourceDescriptionsJsonList.GetLength(); ++referenceDataSourceDescriptionsIndex)
    {
      m_referenceDataSourceDescriptions.push_back(referenceDataSourceDescriptionsJsonList[referenceDataSourceDescriptionsIndex].AsObject());
    }
  }



  return *this;
}
