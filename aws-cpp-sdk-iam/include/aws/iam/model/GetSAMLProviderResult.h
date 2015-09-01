/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /*
    <p>Contains the response to a successful <a>GetSAMLProvider</a> request. </p>
  */
  class AWS_IAM_API GetSAMLProviderResult
  {
  public:
    GetSAMLProviderResult();
    GetSAMLProviderResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetSAMLProviderResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>The XML metadata document that includes information about an identity provider.</p>
    */
    inline const Aws::String& GetSAMLMetadataDocument() const{ return m_sAMLMetadataDocument; }

    /*
     <p>The XML metadata document that includes information about an identity provider.</p>
    */
    inline void SetSAMLMetadataDocument(const Aws::String& value) { m_sAMLMetadataDocument = value; }

    /*
     <p>The XML metadata document that includes information about an identity provider.</p>
    */
    inline void SetSAMLMetadataDocument(Aws::String&& value) { m_sAMLMetadataDocument = value; }

    /*
     <p>The XML metadata document that includes information about an identity provider.</p>
    */
    inline void SetSAMLMetadataDocument(const char* value) { m_sAMLMetadataDocument.assign(value); }

    /*
     <p>The XML metadata document that includes information about an identity provider.</p>
    */
    inline GetSAMLProviderResult& WithSAMLMetadataDocument(const Aws::String& value) { SetSAMLMetadataDocument(value); return *this;}

    /*
     <p>The XML metadata document that includes information about an identity provider.</p>
    */
    inline GetSAMLProviderResult& WithSAMLMetadataDocument(Aws::String&& value) { SetSAMLMetadataDocument(value); return *this;}

    /*
     <p>The XML metadata document that includes information about an identity provider.</p>
    */
    inline GetSAMLProviderResult& WithSAMLMetadataDocument(const char* value) { SetSAMLMetadataDocument(value); return *this;}

    /*
     <p>The date and time when the SAML provider was created.</p>
    */
    inline double GetCreateDate() const{ return m_createDate; }

    /*
     <p>The date and time when the SAML provider was created.</p>
    */
    inline void SetCreateDate(double value) { m_createDate = value; }

    /*
     <p>The date and time when the SAML provider was created.</p>
    */
    inline GetSAMLProviderResult& WithCreateDate(double value) { SetCreateDate(value); return *this;}

    /*
     <p>The expiration date and time for the SAML provider.</p>
    */
    inline double GetValidUntil() const{ return m_validUntil; }

    /*
     <p>The expiration date and time for the SAML provider.</p>
    */
    inline void SetValidUntil(double value) { m_validUntil = value; }

    /*
     <p>The expiration date and time for the SAML provider.</p>
    */
    inline GetSAMLProviderResult& WithValidUntil(double value) { SetValidUntil(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetSAMLProviderResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSAMLProviderResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_sAMLMetadataDocument;
    double m_createDate;
    double m_validUntil;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws