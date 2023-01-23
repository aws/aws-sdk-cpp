/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/GetObjectInformationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetObjectInformationResult::GetObjectInformationResult()
{
}

GetObjectInformationResult::GetObjectInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetObjectInformationResult& GetObjectInformationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SchemaFacets"))
  {
    Aws::Utils::Array<JsonView> schemaFacetsJsonList = jsonValue.GetArray("SchemaFacets");
    for(unsigned schemaFacetsIndex = 0; schemaFacetsIndex < schemaFacetsJsonList.GetLength(); ++schemaFacetsIndex)
    {
      m_schemaFacets.push_back(schemaFacetsJsonList[schemaFacetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

  }



  return *this;
}
