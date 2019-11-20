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

#include <aws/quicksight/model/AmazonElasticsearchParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AmazonElasticsearchParameters::AmazonElasticsearchParameters() : 
    m_domainHasBeenSet(false)
{
}

AmazonElasticsearchParameters::AmazonElasticsearchParameters(JsonView jsonValue) : 
    m_domainHasBeenSet(false)
{
  *this = jsonValue;
}

AmazonElasticsearchParameters& AmazonElasticsearchParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  return *this;
}

JsonValue AmazonElasticsearchParameters::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
