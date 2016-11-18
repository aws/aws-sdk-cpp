﻿/*
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/HsmClientCertificate.h>
#include <aws/redshift/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  class AWS_REDSHIFT_API CreateHsmClientCertificateResult
  {
  public:
    CreateHsmClientCertificateResult();
    CreateHsmClientCertificateResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateHsmClientCertificateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const HsmClientCertificate& GetHsmClientCertificate() const{ return m_hsmClientCertificate; }

    
    inline void SetHsmClientCertificate(const HsmClientCertificate& value) { m_hsmClientCertificate = value; }

    
    inline void SetHsmClientCertificate(HsmClientCertificate&& value) { m_hsmClientCertificate = value; }

    
    inline CreateHsmClientCertificateResult& WithHsmClientCertificate(const HsmClientCertificate& value) { SetHsmClientCertificate(value); return *this;}

    
    inline CreateHsmClientCertificateResult& WithHsmClientCertificate(HsmClientCertificate&& value) { SetHsmClientCertificate(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateHsmClientCertificateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateHsmClientCertificateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    HsmClientCertificate m_hsmClientCertificate;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws