/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>

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
namespace KinesisVideo
{
namespace Model
{
  class UpdateNotificationConfigurationResult
  {
  public:
    AWS_KINESISVIDEO_API UpdateNotificationConfigurationResult();
    AWS_KINESISVIDEO_API UpdateNotificationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API UpdateNotificationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
