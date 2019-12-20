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

#include <aws/securityhub/model/AwsCloudFrontDistributionOriginItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCloudFrontDistributionOriginItem::AwsCloudFrontDistributionOriginItem() : 
    m_domainNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_originPathHasBeenSet(false)
{
}

AwsCloudFrontDistributionOriginItem::AwsCloudFrontDistributionOriginItem(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_originPathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionOriginItem& AwsCloudFrontDistributionOriginItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginPath"))
  {
    m_originPath = jsonValue.GetString("OriginPath");

    m_originPathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionOriginItem::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_originPathHasBeenSet)
  {
   payload.WithString("OriginPath", m_originPath);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
