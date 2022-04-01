/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>

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
namespace ConnectParticipant
{
namespace Model
{
  class AWS_CONNECTPARTICIPANT_API DisconnectParticipantResult
  {
  public:
    DisconnectParticipantResult();
    DisconnectParticipantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DisconnectParticipantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
