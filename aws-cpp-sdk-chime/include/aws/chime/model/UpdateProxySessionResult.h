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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ProxySession.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API UpdateProxySessionResult
  {
  public:
    UpdateProxySessionResult();
    UpdateProxySessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateProxySessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ProxySession& GetProxySession() const{ return m_proxySession; }

    
    inline void SetProxySession(const ProxySession& value) { m_proxySession = value; }

    
    inline void SetProxySession(ProxySession&& value) { m_proxySession = std::move(value); }

    
    inline UpdateProxySessionResult& WithProxySession(const ProxySession& value) { SetProxySession(value); return *this;}

    
    inline UpdateProxySessionResult& WithProxySession(ProxySession&& value) { SetProxySession(std::move(value)); return *this;}

  private:

    ProxySession m_proxySession;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
