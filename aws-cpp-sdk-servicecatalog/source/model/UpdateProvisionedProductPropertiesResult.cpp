/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
