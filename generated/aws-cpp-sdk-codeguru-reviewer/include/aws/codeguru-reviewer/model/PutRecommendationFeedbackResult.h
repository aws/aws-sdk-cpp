/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeGuruReviewer
{
namespace Model
{
  class AWS_CODEGURUREVIEWER_API PutRecommendationFeedbackResult
  {
  public:
    PutRecommendationFeedbackResult();
    PutRecommendationFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutRecommendationFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
