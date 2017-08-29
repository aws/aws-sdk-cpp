/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot-data/model/UpdateThingShadowResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

UpdateThingShadowResult::UpdateThingShadowResult()
{
}

UpdateThingShadowResult::UpdateThingShadowResult(UpdateThingShadowResult&& toMove) : 
    m_payload(std::move(toMove.m_payload))
{
}

UpdateThingShadowResult& UpdateThingShadowResult::operator=(UpdateThingShadowResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_payload = std::move(toMove.m_payload);

   return *this;
}

UpdateThingShadowResult::UpdateThingShadowResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

UpdateThingShadowResult& UpdateThingShadowResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_payload = result.TakeOwnershipOfPayload();

   return *this;
}
