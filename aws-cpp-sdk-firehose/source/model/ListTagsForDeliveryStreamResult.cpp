/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ListTagsForDeliveryStreamResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTagsForDeliveryStreamResult::ListTagsForDeliveryStreamResult() : 
    m_hasMoreTags(false)
{
}

ListTagsForDeliveryStreamResult::ListTagsForDeliveryStreamResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hasMoreTags(false)
{
  *this = result;
}

ListTagsForDeliveryStreamResult& ListTagsForDeliveryStreamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("HasMoreTags"))
  {
    m_hasMoreTags = jsonValue.GetBool("HasMoreTags");

  }



  return *this;
}
