/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CancelDataQualityRuleRecommendationRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelDataQualityRuleRecommendationRunResult::CancelDataQualityRuleRecommendationRunResult()
{
}

CancelDataQualityRuleRecommendationRunResult::CancelDataQualityRuleRecommendationRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelDataQualityRuleRecommendationRunResult& CancelDataQualityRuleRecommendationRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
