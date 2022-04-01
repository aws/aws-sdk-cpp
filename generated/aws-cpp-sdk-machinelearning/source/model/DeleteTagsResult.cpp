/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/DeleteTagsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteTagsResult::DeleteTagsResult() : 
    m_resourceType(TaggableResourceType::NOT_SET)
{
}

DeleteTagsResult::DeleteTagsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourceType(TaggableResourceType::NOT_SET)
{
  *this = result;
}

DeleteTagsResult& DeleteTagsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = TaggableResourceTypeMapper::GetTaggableResourceTypeForName(jsonValue.GetString("ResourceType"));

  }



  return *this;
}
