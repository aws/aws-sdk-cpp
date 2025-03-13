/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/PublisherStatus.h>
#include <aws/cloudformation/model/IdentityProvider.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation
{
namespace Model
{
  class DescribePublisherResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribePublisherResult() = default;
    AWS_CLOUDFORMATION_API DescribePublisherResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribePublisherResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the extension publisher.</p>
     */
    inline const Aws::String& GetPublisherId() const { return m_publisherId; }
    template<typename PublisherIdT = Aws::String>
    void SetPublisherId(PublisherIdT&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::forward<PublisherIdT>(value); }
    template<typename PublisherIdT = Aws::String>
    DescribePublisherResult& WithPublisherId(PublisherIdT&& value) { SetPublisherId(std::forward<PublisherIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the publisher is verified. Currently, all registered publishers are
     * verified.</p>
     */
    inline PublisherStatus GetPublisherStatus() const { return m_publisherStatus; }
    inline void SetPublisherStatus(PublisherStatus value) { m_publisherStatusHasBeenSet = true; m_publisherStatus = value; }
    inline DescribePublisherResult& WithPublisherStatus(PublisherStatus value) { SetPublisherStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of account used as the identity provider when registering this
     * publisher with CloudFormation.</p>
     */
    inline IdentityProvider GetIdentityProvider() const { return m_identityProvider; }
    inline void SetIdentityProvider(IdentityProvider value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }
    inline DescribePublisherResult& WithIdentityProvider(IdentityProvider value) { SetIdentityProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the publisher's profile with the identity provider.</p>
     */
    inline const Aws::String& GetPublisherProfile() const { return m_publisherProfile; }
    template<typename PublisherProfileT = Aws::String>
    void SetPublisherProfile(PublisherProfileT&& value) { m_publisherProfileHasBeenSet = true; m_publisherProfile = std::forward<PublisherProfileT>(value); }
    template<typename PublisherProfileT = Aws::String>
    DescribePublisherResult& WithPublisherProfile(PublisherProfileT&& value) { SetPublisherProfile(std::forward<PublisherProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribePublisherResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;

    PublisherStatus m_publisherStatus{PublisherStatus::NOT_SET};
    bool m_publisherStatusHasBeenSet = false;

    IdentityProvider m_identityProvider{IdentityProvider::NOT_SET};
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_publisherProfile;
    bool m_publisherProfileHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
