/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class DeleteApplicationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DeleteApplicationResult();
    AWS_KINESISANALYTICSV2_API DeleteApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DeleteApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
