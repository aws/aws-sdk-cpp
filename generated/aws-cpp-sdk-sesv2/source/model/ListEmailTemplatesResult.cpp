﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListEmailTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEmailTemplatesResult::ListEmailTemplatesResult()
{
}

ListEmailTemplatesResult::ListEmailTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEmailTemplatesResult& ListEmailTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TemplatesMetadata"))
  {
    Array<JsonView> templatesMetadataJsonList = jsonValue.GetArray("TemplatesMetadata");
    for(unsigned templatesMetadataIndex = 0; templatesMetadataIndex < templatesMetadataJsonList.GetLength(); ++templatesMetadataIndex)
    {
      m_templatesMetadata.push_back(templatesMetadataJsonList[templatesMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
