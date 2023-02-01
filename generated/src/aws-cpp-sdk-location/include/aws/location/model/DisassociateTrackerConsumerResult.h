/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>

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
namespace LocationService
{
namespace Model
{
  class DisassociateTrackerConsumerResult
  {
  public:
    AWS_LOCATIONSERVICE_API DisassociateTrackerConsumerResult();
    AWS_LOCATIONSERVICE_API DisassociateTrackerConsumerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DisassociateTrackerConsumerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
