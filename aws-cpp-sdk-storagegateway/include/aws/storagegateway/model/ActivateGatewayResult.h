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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>AWS Storage Gateway returns the Amazon Resource Name (ARN) of the activated
   * gateway. It is a string made of information such as your account, gateway name,
   * and region. This ARN is used to reference the gateway in other API operations as
   * well as resource-based authorization.</p> <note> <p>For gateways activated prior
   * to September 02, 2015, the gateway ARN contains the gateway name rather than the
   * gateway ID. Changing the name of the gateway has no effect on the gateway
   * ARN.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ActivateGatewayOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API ActivateGatewayResult
  {
  public:
    ActivateGatewayResult();
    ActivateGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ActivateGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline ActivateGatewayResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline ActivateGatewayResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline ActivateGatewayResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:

    Aws::String m_gatewayARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
