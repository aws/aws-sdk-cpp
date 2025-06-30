/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListSAMLProviders.html">ListSAMLProviders</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListSAMLProvidersResponse">AWS
   * API Reference</a></p>
   */
  class ListSAMLProvidersResult
  {
  public:
    AWS_IAM_API ListSAMLProvidersResult() = default;
    AWS_IAM_API ListSAMLProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListSAMLProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of SAML provider resource objects defined in IAM for this Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<SAMLProviderListEntry>& GetSAMLProviderList() const { return m_sAMLProviderList; }
    template<typename SAMLProviderListT = Aws::Vector<SAMLProviderListEntry>>
    void SetSAMLProviderList(SAMLProviderListT&& value) { m_sAMLProviderListHasBeenSet = true; m_sAMLProviderList = std::forward<SAMLProviderListT>(value); }
    template<typename SAMLProviderListT = Aws::Vector<SAMLProviderListEntry>>
    ListSAMLProvidersResult& WithSAMLProviderList(SAMLProviderListT&& value) { SetSAMLProviderList(std::forward<SAMLProviderListT>(value)); return *this;}
    template<typename SAMLProviderListT = SAMLProviderListEntry>
    ListSAMLProvidersResult& AddSAMLProviderList(SAMLProviderListT&& value) { m_sAMLProviderListHasBeenSet = true; m_sAMLProviderList.emplace_back(std::forward<SAMLProviderListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListSAMLProvidersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SAMLProviderListEntry> m_sAMLProviderList;
    bool m_sAMLProviderListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
