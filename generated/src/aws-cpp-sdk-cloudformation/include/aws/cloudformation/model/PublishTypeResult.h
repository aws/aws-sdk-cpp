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
  class PublishTypeResult
  {
  public:
    AWS_CLOUDFORMATION_API PublishTypeResult() = default;
    AWS_CLOUDFORMATION_API PublishTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API PublishTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the public extension upon
     * publication.</p>
     */
    inline const Aws::String& GetPublicTypeArn() const { return m_publicTypeArn; }
    template<typename PublicTypeArnT = Aws::String>
    void SetPublicTypeArn(PublicTypeArnT&& value) { m_publicTypeArnHasBeenSet = true; m_publicTypeArn = std::forward<PublicTypeArnT>(value); }
    template<typename PublicTypeArnT = Aws::String>
    PublishTypeResult& WithPublicTypeArn(PublicTypeArnT&& value) { SetPublicTypeArn(std::forward<PublicTypeArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    PublishTypeResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_publicTypeArn;
    bool m_publicTypeArnHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
