﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateServiceTemplateVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateServiceTemplateVersionResult::UpdateServiceTemplateVersionResult()
{
}

UpdateServiceTemplateVersionResult::UpdateServiceTemplateVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateServiceTemplateVersionResult& UpdateServiceTemplateVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("serviceTemplateVersion"))
  {
    m_serviceTemplateVersion = jsonValue.GetObject("serviceTemplateVersion");

  }



  return *this;
}
