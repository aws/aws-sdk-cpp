/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/DeleteThingShadowResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

DeleteThingShadowResult::DeleteThingShadowResult()
{
}

DeleteThingShadowResult::DeleteThingShadowResult(DeleteThingShadowResult&& toMove) : 
    m_payload(std::move(toMove.m_payload))
{
}

DeleteThingShadowResult& DeleteThingShadowResult::operator=(DeleteThingShadowResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_payload = std::move(toMove.m_payload);

   return *this;
}

DeleteThingShadowResult::DeleteThingShadowResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

DeleteThingShadowResult& DeleteThingShadowResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_payload = result.TakeOwnershipOfPayload();

   return *this;
}
