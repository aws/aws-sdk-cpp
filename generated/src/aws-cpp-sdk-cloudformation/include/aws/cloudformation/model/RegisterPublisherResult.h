/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class RegisterPublisherResult
  {
  public:
    AWS_CLOUDFORMATION_API RegisterPublisherResult();
    AWS_CLOUDFORMATION_API RegisterPublisherResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API RegisterPublisherResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID assigned this account by CloudFormation for publishing extensions.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }
    inline void SetPublisherId(const Aws::String& value) { m_publisherId = value; }
    inline void SetPublisherId(Aws::String&& value) { m_publisherId = std::move(value); }
    inline void SetPublisherId(const char* value) { m_publisherId.assign(value); }
    inline RegisterPublisherResult& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}
    inline RegisterPublisherResult& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}
    inline RegisterPublisherResult& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline RegisterPublisherResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline RegisterPublisherResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_publisherId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
