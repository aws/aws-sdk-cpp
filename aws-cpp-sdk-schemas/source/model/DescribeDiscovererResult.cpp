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

#include <aws/schemas/model/DescribeDiscovererResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDiscovererResult::DescribeDiscovererResult() : 
    m_state(DiscovererState::NOT_SET)
{
}

DescribeDiscovererResult::DescribeDiscovererResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(DiscovererState::NOT_SET)
{
  *this = result;
}

DescribeDiscovererResult& DescribeDiscovererResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DiscovererArn"))
  {
    m_discovererArn = jsonValue.GetString("DiscovererArn");

  }

  if(jsonValue.ValueExists("DiscovererId"))
  {
    m_discovererId = jsonValue.GetString("DiscovererId");

  }

  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = DiscovererStateMapper::GetDiscovererStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
