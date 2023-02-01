/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetVehicleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetVehicleResult::GetVehicleResult()
{
}

GetVehicleResult::GetVehicleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetVehicleResult& GetVehicleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("vehicleName"))
  {
    m_vehicleName = jsonValue.GetString("vehicleName");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("modelManifestArn"))
  {
    m_modelManifestArn = jsonValue.GetString("modelManifestArn");

  }

  if(jsonValue.ValueExists("decoderManifestArn"))
  {
    m_decoderManifestArn = jsonValue.GetString("decoderManifestArn");

  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");

  }



  return *this;
}
