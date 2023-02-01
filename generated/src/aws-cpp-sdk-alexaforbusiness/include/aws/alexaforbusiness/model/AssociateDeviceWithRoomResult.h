/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>

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
namespace AlexaForBusiness
{
namespace Model
{
  class AssociateDeviceWithRoomResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API AssociateDeviceWithRoomResult();
    AWS_ALEXAFORBUSINESS_API AssociateDeviceWithRoomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API AssociateDeviceWithRoomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
