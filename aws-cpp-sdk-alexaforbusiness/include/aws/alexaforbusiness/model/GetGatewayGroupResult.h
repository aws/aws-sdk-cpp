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

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/GatewayGroup.h>
#include <utility>

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
  class AWS_ALEXAFORBUSINESS_API GetGatewayGroupResult
  {
  public:
    GetGatewayGroupResult();
    GetGatewayGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGatewayGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const GatewayGroup& GetGatewayGroup() const{ return m_gatewayGroup; }

    
    inline void SetGatewayGroup(const GatewayGroup& value) { m_gatewayGroup = value; }

    
    inline void SetGatewayGroup(GatewayGroup&& value) { m_gatewayGroup = std::move(value); }

    
    inline GetGatewayGroupResult& WithGatewayGroup(const GatewayGroup& value) { SetGatewayGroup(value); return *this;}

    
    inline GetGatewayGroupResult& WithGatewayGroup(GatewayGroup&& value) { SetGatewayGroup(std::move(value)); return *this;}

  private:

    GatewayGroup m_gatewayGroup;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
