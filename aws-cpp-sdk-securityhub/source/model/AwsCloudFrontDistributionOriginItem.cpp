/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
