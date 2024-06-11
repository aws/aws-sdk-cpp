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
    AWS_CLOUDFORMATION_API DescribePublisherResult();
    AWS_CLOUDFORMATION_API DescribePublisherResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribePublisherResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the extension publisher.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }
    inline void SetPublisherId(const Aws::String& value) { m_publisherId = value; }
    inline void SetPublisherId(Aws::String&& value) { m_publisherId = std::move(value); }
    inline void SetPublisherId(const char* value) { m_publisherId.assign(value); }
    inline DescribePublisherResult& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}
    inline DescribePublisherResult& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}
    inline DescribePublisherResult& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the publisher is verified. Currently, all registered publishers are
     * verified.</p>
     */
    inline const PublisherStatus& GetPublisherStatus() const{ return m_publisherStatus; }
    inline void SetPublisherStatus(const PublisherStatus& value) { m_publisherStatus = value; }
    inline void SetPublisherStatus(PublisherStatus&& value) { m_publisherStatus = std::move(value); }
    inline DescribePublisherResult& WithPublisherStatus(const PublisherStatus& value) { SetPublisherStatus(value); return *this;}
    inline DescribePublisherResult& WithPublisherStatus(PublisherStatus&& value) { SetPublisherStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of account used as the identity provider when registering this
     * publisher with CloudFormation.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProvider = value; }
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProvider = std::move(value); }
    inline DescribePublisherResult& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}
    inline DescribePublisherResult& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the publisher's profile with the identity provider.</p>
     */
    inline const Aws::String& GetPublisherProfile() const{ return m_publisherProfile; }
    inline void SetPublisherProfile(const Aws::String& value) { m_publisherProfile = value; }
    inline void SetPublisherProfile(Aws::String&& value) { m_publisherProfile = std::move(value); }
    inline void SetPublisherProfile(const char* value) { m_publisherProfile.assign(value); }
    inline DescribePublisherResult& WithPublisherProfile(const Aws::String& value) { SetPublisherProfile(value); return *this;}
    inline DescribePublisherResult& WithPublisherProfile(Aws::String&& value) { SetPublisherProfile(std::move(value)); return *this;}
    inline DescribePublisherResult& WithPublisherProfile(const char* value) { SetPublisherProfile(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribePublisherResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribePublisherResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_publisherId;

    PublisherStatus m_publisherStatus;

    IdentityProvider m_identityProvider;

    Aws::String m_publisherProfile;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
