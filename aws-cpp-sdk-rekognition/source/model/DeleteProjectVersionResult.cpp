﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DeleteProjectVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteProjectVersionResult::DeleteProjectVersionResult() : 
    m_status(ProjectVersionStatus::NOT_SET)
{
}

DeleteProjectVersionResult::DeleteProjectVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ProjectVersionStatus::NOT_SET)
{
  *this = result;
}

DeleteProjectVersionResult& DeleteProjectVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProjectVersionStatusMapper::GetProjectVersionStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
