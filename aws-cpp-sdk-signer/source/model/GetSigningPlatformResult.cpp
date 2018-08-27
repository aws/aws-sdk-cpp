/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/signer/model/GetSigningPlatformResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSigningPlatformResult::GetSigningPlatformResult() : 
    m_category(Category::NOT_SET),
    m_maxSizeInMB(0)
{
}

GetSigningPlatformResult::GetSigningPlatformResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_category(Category::NOT_SET),
    m_maxSizeInMB(0)
{
  *this = result;
}

GetSigningPlatformResult& GetSigningPlatformResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("partner"))
  {
    m_partner = jsonValue.GetString("partner");

  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = CategoryMapper::GetCategoryForName(jsonValue.GetString("category"));

  }

  if(jsonValue.ValueExists("signingConfiguration"))
  {
    m_signingConfiguration = jsonValue.GetObject("signingConfiguration");

  }

  if(jsonValue.ValueExists("signingImageFormat"))
  {
    m_signingImageFormat = jsonValue.GetObject("signingImageFormat");

  }

  if(jsonValue.ValueExists("maxSizeInMB"))
  {
    m_maxSizeInMB = jsonValue.GetInteger("maxSizeInMB");

  }



  return *this;
}
