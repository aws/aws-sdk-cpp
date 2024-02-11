/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ImageBlockPublicAccessDisabledState.h>
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
  class DisableImageBlockPublicAccessResponse
  {
  public:
    AWS_EC2_API DisableImageBlockPublicAccessResponse();
    AWS_EC2_API DisableImageBlockPublicAccessResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableImageBlockPublicAccessResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns <code>unblocked</code> if the request succeeds; otherwise, it returns
     * an error.</p>
     */
    inline const ImageBlockPublicAccessDisabledState& GetImageBlockPublicAccessState() const{ return m_imageBlockPublicAccessState; }

    /**
     * <p>Returns <code>unblocked</code> if the request succeeds; otherwise, it returns
     * an error.</p>
     */
    inline void SetImageBlockPublicAccessState(const ImageBlockPublicAccessDisabledState& value) { m_imageBlockPublicAccessState = value; }

    /**
     * <p>Returns <code>unblocked</code> if the request succeeds; otherwise, it returns
     * an error.</p>
     */
    inline void SetImageBlockPublicAccessState(ImageBlockPublicAccessDisabledState&& value) { m_imageBlockPublicAccessState = std::move(value); }

    /**
     * <p>Returns <code>unblocked</code> if the request succeeds; otherwise, it returns
     * an error.</p>
     */
    inline DisableImageBlockPublicAccessResponse& WithImageBlockPublicAccessState(const ImageBlockPublicAccessDisabledState& value) { SetImageBlockPublicAccessState(value); return *this;}

    /**
     * <p>Returns <code>unblocked</code> if the request succeeds; otherwise, it returns
     * an error.</p>
     */
    inline DisableImageBlockPublicAccessResponse& WithImageBlockPublicAccessState(ImageBlockPublicAccessDisabledState&& value) { SetImageBlockPublicAccessState(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisableImageBlockPublicAccessResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisableImageBlockPublicAccessResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ImageBlockPublicAccessDisabledState m_imageBlockPublicAccessState;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
