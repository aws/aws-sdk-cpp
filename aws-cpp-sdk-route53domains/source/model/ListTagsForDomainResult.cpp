﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ListTagsForDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTagsForDomainResult::ListTagsForDomainResult()
{
}

ListTagsForDomainResult::ListTagsForDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTagsForDomainResult& ListTagsForDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TagList"))
  {
    Array<JsonView> tagListJsonList = jsonValue.GetArray("TagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsObject());
    }
  }



  return *this;
}
