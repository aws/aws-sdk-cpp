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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/SAMLProviderListEntry.h>
#include <utility>

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
   * <p>Contains the response to a successful <a>ListSAMLProviders</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSAMLProvidersResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ListSAMLProvidersResult
  {
  public:
    ListSAMLProvidersResult();
    ListSAMLProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListSAMLProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The list of SAML provider resource objects defined in IAM for this AWS
     * account.</p>
     */
    inline const Aws::Vector<SAMLProviderListEntry>& GetSAMLProviderList() const{ return m_sAMLProviderList; }

    /**
     * <p>The list of SAML provider resource objects defined in IAM for this AWS
     * account.</p>
     */
    inline void SetSAMLProviderList(const Aws::Vector<SAMLProviderListEntry>& value) { m_sAMLProviderList = value; }

    /**
     * <p>The list of SAML provider resource objects defined in IAM for this AWS
     * account.</p>
     */
    inline void SetSAMLProviderList(Aws::Vector<SAMLProviderListEntry>&& value) { m_sAMLProviderList = std::move(value); }

    /**
     * <p>The list of SAML provider resource objects defined in IAM for this AWS
     * account.</p>
     */
    inline ListSAMLProvidersResult& WithSAMLProviderList(const Aws::Vector<SAMLProviderListEntry>& value) { SetSAMLProviderList(value); return *this;}

    /**
     * <p>The list of SAML provider resource objects defined in IAM for this AWS
     * account.</p>
     */
    inline ListSAMLProvidersResult& WithSAMLProviderList(Aws::Vector<SAMLProviderListEntry>&& value) { SetSAMLProviderList(std::move(value)); return *this;}

    /**
     * <p>The list of SAML provider resource objects defined in IAM for this AWS
     * account.</p>
     */
    inline ListSAMLProvidersResult& AddSAMLProviderList(const SAMLProviderListEntry& value) { m_sAMLProviderList.push_back(value); return *this; }

    /**
     * <p>The list of SAML provider resource objects defined in IAM for this AWS
     * account.</p>
     */
    inline ListSAMLProvidersResult& AddSAMLProviderList(SAMLProviderListEntry&& value) { m_sAMLProviderList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListSAMLProvidersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListSAMLProvidersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SAMLProviderListEntry> m_sAMLProviderList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
