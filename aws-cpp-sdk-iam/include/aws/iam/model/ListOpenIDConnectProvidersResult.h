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
#include <aws/iam/model/OpenIDConnectProviderListEntry.h>
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
   * <p>Contains the response to a successful <a>ListOpenIDConnectProviders</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListOpenIDConnectProvidersResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ListOpenIDConnectProvidersResult
  {
  public:
    ListOpenIDConnectProvidersResult();
    ListOpenIDConnectProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListOpenIDConnectProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The list of IAM OIDC provider resource objects defined in the AWS
     * account.</p>
     */
    inline const Aws::Vector<OpenIDConnectProviderListEntry>& GetOpenIDConnectProviderList() const{ return m_openIDConnectProviderList; }

    /**
     * <p>The list of IAM OIDC provider resource objects defined in the AWS
     * account.</p>
     */
    inline void SetOpenIDConnectProviderList(const Aws::Vector<OpenIDConnectProviderListEntry>& value) { m_openIDConnectProviderList = value; }

    /**
     * <p>The list of IAM OIDC provider resource objects defined in the AWS
     * account.</p>
     */
    inline void SetOpenIDConnectProviderList(Aws::Vector<OpenIDConnectProviderListEntry>&& value) { m_openIDConnectProviderList = std::move(value); }

    /**
     * <p>The list of IAM OIDC provider resource objects defined in the AWS
     * account.</p>
     */
    inline ListOpenIDConnectProvidersResult& WithOpenIDConnectProviderList(const Aws::Vector<OpenIDConnectProviderListEntry>& value) { SetOpenIDConnectProviderList(value); return *this;}

    /**
     * <p>The list of IAM OIDC provider resource objects defined in the AWS
     * account.</p>
     */
    inline ListOpenIDConnectProvidersResult& WithOpenIDConnectProviderList(Aws::Vector<OpenIDConnectProviderListEntry>&& value) { SetOpenIDConnectProviderList(std::move(value)); return *this;}

    /**
     * <p>The list of IAM OIDC provider resource objects defined in the AWS
     * account.</p>
     */
    inline ListOpenIDConnectProvidersResult& AddOpenIDConnectProviderList(const OpenIDConnectProviderListEntry& value) { m_openIDConnectProviderList.push_back(value); return *this; }

    /**
     * <p>The list of IAM OIDC provider resource objects defined in the AWS
     * account.</p>
     */
    inline ListOpenIDConnectProvidersResult& AddOpenIDConnectProviderList(OpenIDConnectProviderListEntry&& value) { m_openIDConnectProviderList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListOpenIDConnectProvidersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListOpenIDConnectProvidersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<OpenIDConnectProviderListEntry> m_openIDConnectProviderList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
