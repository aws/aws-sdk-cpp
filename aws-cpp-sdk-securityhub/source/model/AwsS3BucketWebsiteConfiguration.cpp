/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketWebsiteConfiguration.h>
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

AwsS3BucketWebsiteConfiguration::AwsS3BucketWebsiteConfiguration() : 
    m_errorDocumentHasBeenSet(false),
    m_indexDocumentSuffixHasBeenSet(false),
    m_redirectAllRequestsToHasBeenSet(false),
    m_routingRulesHasBeenSet(false)
{
}

AwsS3BucketWebsiteConfiguration::AwsS3BucketWebsiteConfiguration(JsonView jsonValue) : 
    m_errorDocumentHasBeenSet(false),
    m_indexDocumentSuffixHasBeenSet(false),
    m_redirectAllRequestsToHasBeenSet(false),
    m_routingRulesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketWebsiteConfiguration& AwsS3BucketWebsiteConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorDocument"))
  {
    m_errorDocument = jsonValue.GetString("ErrorDocument");

    m_errorDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexDocumentSuffix"))
  {
    m_indexDocumentSuffix = jsonValue.GetString("IndexDocumentSuffix");

    m_indexDocumentSuffixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedirectAllRequestsTo"))
  {
    m_redirectAllRequestsTo = jsonValue.GetObject("RedirectAllRequestsTo");

    m_redirectAllRequestsToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingRules"))
  {
    Aws::Utils::Array<JsonView> routingRulesJsonList = jsonValue.GetArray("RoutingRules");
    for(unsigned routingRulesIndex = 0; routingRulesIndex < routingRulesJsonList.GetLength(); ++routingRulesIndex)
    {
      m_routingRules.push_back(routingRulesJsonList[routingRulesIndex].AsObject());
    }
    m_routingRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketWebsiteConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_errorDocumentHasBeenSet)
  {
   payload.WithString("ErrorDocument", m_errorDocument);

  }

  if(m_indexDocumentSuffixHasBeenSet)
  {
   payload.WithString("IndexDocumentSuffix", m_indexDocumentSuffix);

  }

  if(m_redirectAllRequestsToHasBeenSet)
  {
   payload.WithObject("RedirectAllRequestsTo", m_redirectAllRequestsTo.Jsonize());

  }

  if(m_routingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routingRulesJsonList(m_routingRules.size());
   for(unsigned routingRulesIndex = 0; routingRulesIndex < routingRulesJsonList.GetLength(); ++routingRulesIndex)
   {
     routingRulesJsonList[routingRulesIndex].AsObject(m_routingRules[routingRulesIndex].Jsonize());
   }
   payload.WithArray("RoutingRules", std::move(routingRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
