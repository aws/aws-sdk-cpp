/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListTypedLinkFacetNamesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTypedLinkFacetNamesResult::ListTypedLinkFacetNamesResult()
{
}

ListTypedLinkFacetNamesResult::ListTypedLinkFacetNamesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTypedLinkFacetNamesResult& ListTypedLinkFacetNamesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FacetNames"))
  {
    Aws::Utils::Array<JsonView> facetNamesJsonList = jsonValue.GetArray("FacetNames");
    for(unsigned facetNamesIndex = 0; facetNamesIndex < facetNamesJsonList.GetLength(); ++facetNamesIndex)
    {
      m_facetNames.push_back(facetNamesJsonList[facetNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
