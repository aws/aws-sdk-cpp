/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ImageBlockPublicAccessEnabledState.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  class EnableImageBlockPublicAccessResponse
  {
  public:
    AWS_EC2_API EnableImageBlockPublicAccessResponse() = default;
    AWS_EC2_API EnableImageBlockPublicAccessResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableImageBlockPublicAccessResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>block-new-sharing</code> if the request succeeds; otherwise, it
     * returns an error.</p>
     */
    inline ImageBlockPublicAccessEnabledState GetImageBlockPublicAccessState() const { return m_imageBlockPublicAccessState; }
    inline void SetImageBlockPublicAccessState(ImageBlockPublicAccessEnabledState value) { m_imageBlockPublicAccessStateHasBeenSet = true; m_imageBlockPublicAccessState = value; }
    inline EnableImageBlockPublicAccessResponse& WithImageBlockPublicAccessState(ImageBlockPublicAccessEnabledState value) { SetImageBlockPublicAccessState(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    EnableImageBlockPublicAccessResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ImageBlockPublicAccessEnabledState m_imageBlockPublicAccessState{ImageBlockPublicAccessEnabledState::NOT_SET};
    bool m_imageBlockPublicAccessStateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
