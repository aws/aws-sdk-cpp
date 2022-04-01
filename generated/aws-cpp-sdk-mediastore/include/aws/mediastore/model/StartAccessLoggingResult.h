﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>

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
namespace MediaStore
{
namespace Model
{
  class AWS_MEDIASTORE_API StartAccessLoggingResult
  {
  public:
    StartAccessLoggingResult();
    StartAccessLoggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartAccessLoggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
