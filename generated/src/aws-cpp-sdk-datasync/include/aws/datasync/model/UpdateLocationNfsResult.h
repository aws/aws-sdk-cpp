/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>

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
namespace DataSync
{
namespace Model
{
  class UpdateLocationNfsResult
  {
  public:
    AWS_DATASYNC_API UpdateLocationNfsResult();
    AWS_DATASYNC_API UpdateLocationNfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API UpdateLocationNfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
