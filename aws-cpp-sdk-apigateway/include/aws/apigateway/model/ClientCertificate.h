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

  class AWS_APIGATEWAY_API ClientCertificate
  {
  public:
    ClientCertificate();
    ClientCertificate(const Aws::Utils::Json::JsonValue& jsonValue);
    ClientCertificate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }

    
    inline ClientCertificate& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    
    inline ClientCertificate& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(value); return *this;}

    
    inline ClientCertificate& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline ClientCertificate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline ClientCertificate& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    
    inline ClientCertificate& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const Aws::String& GetPemEncodedCertificate() const{ return m_pemEncodedCertificate; }

    
    inline void SetPemEncodedCertificate(const Aws::String& value) { m_pemEncodedCertificateHasBeenSet = true; m_pemEncodedCertificate = value; }

    
    inline void SetPemEncodedCertificate(Aws::String&& value) { m_pemEncodedCertificateHasBeenSet = true; m_pemEncodedCertificate = value; }

    
    inline void SetPemEncodedCertificate(const char* value) { m_pemEncodedCertificateHasBeenSet = true; m_pemEncodedCertificate.assign(value); }

    
    inline ClientCertificate& WithPemEncodedCertificate(const Aws::String& value) { SetPemEncodedCertificate(value); return *this;}

    
    inline ClientCertificate& WithPemEncodedCertificate(Aws::String&& value) { SetPemEncodedCertificate(value); return *this;}

    
    inline ClientCertificate& WithPemEncodedCertificate(const char* value) { SetPemEncodedCertificate(value); return *this;}

    
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    
    inline ClientCertificate& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    
    inline ClientCertificate& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    
    inline ClientCertificate& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    
    inline ClientCertificate& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(value); return *this;}

  private:
    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_pemEncodedCertificate;
    bool m_pemEncodedCertificateHasBeenSet;
    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;
    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
