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

#include <aws/servicecatalog/model/UpdateProvisionedProductPropertiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateProvisionedProductPropertiesResult::UpdateProvisionedProductPropertiesResult() : 
    m_status(RecordStatus::NOT_SET)
{
}

UpdateProvisionedProductPropertiesResult::UpdateProvisionedProductPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RecordStatus::NOT_SET)
{
  *this = result;
}

UpdateProvisionedProductPropertiesResult& UpdateProvisionedProductPropertiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisionedProductId"))
  {
    m_provisionedProductId = jsonValue.GetString("ProvisionedProductId");

  }

  if(jsonValue.ValueExists("ProvisionedProductProperties"))
  {
    Aws::Map<Aws::String, JsonView> provisionedProductPropertiesJsonMap = jsonValue.GetObject("ProvisionedProductProperties").GetAllObjects();
    for(auto& provisionedProductPropertiesItem : provisionedProductPropertiesJsonMap)
    {
      m_provisionedProductProperties[PropertyKeyMapper::GetPropertyKeyForName(provisionedProductPropertiesItem.first)] = provisionedProductPropertiesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("RecordId"))
  {
    m_recordId = jsonValue.GetString("RecordId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecordStatusMapper::GetRecordStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
