/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListOpenIDConnectProviders.html">ListOpenIDConnectProviders</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListOpenIDConnectProvidersResponse">AWS
   * API Reference</a></p>
   */
  class ListOpenIDConnectProvidersResult
  {
  public:
    AWS_IAM_API ListOpenIDConnectProvidersResult() = default;
    AWS_IAM_API ListOpenIDConnectProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListOpenIDConnectProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of IAM OIDC provider resource objects defined in the Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<OpenIDConnectProviderListEntry>& GetOpenIDConnectProviderList() const { return m_openIDConnectProviderList; }
    template<typename OpenIDConnectProviderListT = Aws::Vector<OpenIDConnectProviderListEntry>>
    void SetOpenIDConnectProviderList(OpenIDConnectProviderListT&& value) { m_openIDConnectProviderListHasBeenSet = true; m_openIDConnectProviderList = std::forward<OpenIDConnectProviderListT>(value); }
    template<typename OpenIDConnectProviderListT = Aws::Vector<OpenIDConnectProviderListEntry>>
    ListOpenIDConnectProvidersResult& WithOpenIDConnectProviderList(OpenIDConnectProviderListT&& value) { SetOpenIDConnectProviderList(std::forward<OpenIDConnectProviderListT>(value)); return *this;}
    template<typename OpenIDConnectProviderListT = OpenIDConnectProviderListEntry>
    ListOpenIDConnectProvidersResult& AddOpenIDConnectProviderList(OpenIDConnectProviderListT&& value) { m_openIDConnectProviderListHasBeenSet = true; m_openIDConnectProviderList.emplace_back(std::forward<OpenIDConnectProviderListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListOpenIDConnectProvidersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OpenIDConnectProviderListEntry> m_openIDConnectProviderList;
    bool m_openIDConnectProviderListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
