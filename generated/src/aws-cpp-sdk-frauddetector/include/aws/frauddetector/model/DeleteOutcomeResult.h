/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>

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
namespace FraudDetector
{
namespace Model
{
  class DeleteOutcomeResult
  {
  public:
    AWS_FRAUDDETECTOR_API DeleteOutcomeResult();
    AWS_FRAUDDETECTOR_API DeleteOutcomeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API DeleteOutcomeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
