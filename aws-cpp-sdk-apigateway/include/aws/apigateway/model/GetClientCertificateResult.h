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
#include <aws/core/utils/DateTime.h>

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
  class AWS_APIGATEWAY_API GetClientCertificateResult
  {
  public:
    GetClientCertificateResult();
    GetClientCertificateResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetClientCertificateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateId = value; }

    
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateId = value; }

    
    inline void SetClientCertificateId(const char* value) { m_clientCertificateId.assign(value); }

    
    inline GetClientCertificateResult& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    
    inline GetClientCertificateResult& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(value); return *this;}

    
    inline GetClientCertificateResult& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    
    inline void SetDescription(const char* value) { m_description.assign(value); }

    
    inline GetClientCertificateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline GetClientCertificateResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    
    inline GetClientCertificateResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const Aws::String& GetPemEncodedCertificate() const{ return m_pemEncodedCertificate; }

    
    inline void SetPemEncodedCertificate(const Aws::String& value) { m_pemEncodedCertificate = value; }

    
    inline void SetPemEncodedCertificate(Aws::String&& value) { m_pemEncodedCertificate = value; }

    
    inline void SetPemEncodedCertificate(const char* value) { m_pemEncodedCertificate.assign(value); }

    
    inline GetClientCertificateResult& WithPemEncodedCertificate(const Aws::String& value) { SetPemEncodedCertificate(value); return *this;}

    
    inline GetClientCertificateResult& WithPemEncodedCertificate(Aws::String&& value) { SetPemEncodedCertificate(value); return *this;}

    
    inline GetClientCertificateResult& WithPemEncodedCertificate(const char* value) { SetPemEncodedCertificate(value); return *this;}

    
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = value; }

    
    inline GetClientCertificateResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    
    inline GetClientCertificateResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDate = value; }

    
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDate = value; }

    
    inline GetClientCertificateResult& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    
    inline GetClientCertificateResult& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(value); return *this;}

  private:
    Aws::String m_clientCertificateId;
    Aws::String m_description;
    Aws::String m_pemEncodedCertificate;
    Aws::Utils::DateTime m_createdDate;
    Aws::Utils::DateTime m_expirationDate;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
