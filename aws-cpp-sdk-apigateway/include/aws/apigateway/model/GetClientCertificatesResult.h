/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ClientCertificate.h>

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
namespace APIGateway
{
namespace Model
{
  class AWS_APIGATEWAY_API GetClientCertificatesResult
  {
  public:
    GetClientCertificatesResult();
    GetClientCertificatesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetClientCertificatesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = value; }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetClientCertificatesResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetClientCertificatesResult& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetClientCertificatesResult& WithPosition(const char* value) { SetPosition(value); return *this;}

    
    inline const Aws::Vector<ClientCertificate>& GetItems() const{ return m_items; }

    
    inline void SetItems(const Aws::Vector<ClientCertificate>& value) { m_items = value; }

    
    inline void SetItems(Aws::Vector<ClientCertificate>&& value) { m_items = value; }

    
    inline GetClientCertificatesResult& WithItems(const Aws::Vector<ClientCertificate>& value) { SetItems(value); return *this;}

    
    inline GetClientCertificatesResult& WithItems(Aws::Vector<ClientCertificate>&& value) { SetItems(value); return *this;}

    
    inline GetClientCertificatesResult& AddItems(const ClientCertificate& value) { m_items.push_back(value); return *this; }

    
    inline GetClientCertificatesResult& AddItems(ClientCertificate&& value) { m_items.push_back(value); return *this; }

  private:
    Aws::String m_position;
    Aws::Vector<ClientCertificate> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
