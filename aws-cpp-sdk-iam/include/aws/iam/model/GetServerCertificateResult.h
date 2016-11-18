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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ServerCertificate.h>
#include <aws/iam/model/ResponseMetadata.h>

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
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetServerCertificate</a> request.
   * </p>
   */
  class AWS_IAM_API GetServerCertificateResult
  {
  public:
    GetServerCertificateResult();
    GetServerCertificateResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetServerCertificateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A structure containing details about the server certificate.</p>
     */
    inline const ServerCertificate& GetServerCertificate() const{ return m_serverCertificate; }

    /**
     * <p>A structure containing details about the server certificate.</p>
     */
    inline void SetServerCertificate(const ServerCertificate& value) { m_serverCertificate = value; }

    /**
     * <p>A structure containing details about the server certificate.</p>
     */
    inline void SetServerCertificate(ServerCertificate&& value) { m_serverCertificate = value; }

    /**
     * <p>A structure containing details about the server certificate.</p>
     */
    inline GetServerCertificateResult& WithServerCertificate(const ServerCertificate& value) { SetServerCertificate(value); return *this;}

    /**
     * <p>A structure containing details about the server certificate.</p>
     */
    inline GetServerCertificateResult& WithServerCertificate(ServerCertificate&& value) { SetServerCertificate(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetServerCertificateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetServerCertificateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ServerCertificate m_serverCertificate;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws