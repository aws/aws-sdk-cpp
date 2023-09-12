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
    AWS_EC2_API EnableImageBlockPublicAccessResponse();
    AWS_EC2_API EnableImageBlockPublicAccessResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableImageBlockPublicAccessResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns <code>block-new-sharing</code> if the request succeeds; otherwise, it
     * returns an error.</p>
     */
    inline const ImageBlockPublicAccessEnabledState& GetImageBlockPublicAccessState() const{ return m_imageBlockPublicAccessState; }

    /**
     * <p>Returns <code>block-new-sharing</code> if the request succeeds; otherwise, it
     * returns an error.</p>
     */
    inline void SetImageBlockPublicAccessState(const ImageBlockPublicAccessEnabledState& value) { m_imageBlockPublicAccessState = value; }

    /**
     * <p>Returns <code>block-new-sharing</code> if the request succeeds; otherwise, it
     * returns an error.</p>
     */
    inline void SetImageBlockPublicAccessState(ImageBlockPublicAccessEnabledState&& value) { m_imageBlockPublicAccessState = std::move(value); }

    /**
     * <p>Returns <code>block-new-sharing</code> if the request succeeds; otherwise, it
     * returns an error.</p>
     */
    inline EnableImageBlockPublicAccessResponse& WithImageBlockPublicAccessState(const ImageBlockPublicAccessEnabledState& value) { SetImageBlockPublicAccessState(value); return *this;}

    /**
     * <p>Returns <code>block-new-sharing</code> if the request succeeds; otherwise, it
     * returns an error.</p>
     */
    inline EnableImageBlockPublicAccessResponse& WithImageBlockPublicAccessState(ImageBlockPublicAccessEnabledState&& value) { SetImageBlockPublicAccessState(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableImageBlockPublicAccessResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableImageBlockPublicAccessResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ImageBlockPublicAccessEnabledState m_imageBlockPublicAccessState;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
