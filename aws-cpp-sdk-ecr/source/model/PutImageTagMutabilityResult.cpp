/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/PutImageTagMutabilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutImageTagMutabilityResult::PutImageTagMutabilityResult() : 
    m_imageTagMutability(ImageTagMutability::NOT_SET)
{
}

PutImageTagMutabilityResult::PutImageTagMutabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_imageTagMutability(ImageTagMutability::NOT_SET)
{
  *this = result;
}

PutImageTagMutabilityResult& PutImageTagMutabilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

  }

  if(jsonValue.ValueExists("imageTagMutability"))
  {
    m_imageTagMutability = ImageTagMutabilityMapper::GetImageTagMutabilityForName(jsonValue.GetString("imageTagMutability"));

  }



  return *this;
}
