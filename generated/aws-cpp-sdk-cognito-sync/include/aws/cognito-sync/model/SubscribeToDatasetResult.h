﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>

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
namespace CognitoSync
{
namespace Model
{
  /**
   * <p>Response to a SubscribeToDataset request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SubscribeToDatasetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API SubscribeToDatasetResult
  {
  public:
    SubscribeToDatasetResult();
    SubscribeToDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SubscribeToDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
