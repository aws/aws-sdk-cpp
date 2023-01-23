/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/FpgaImage.h>
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
  class DescribeFpgaImagesResponse
  {
  public:
    AWS_EC2_API DescribeFpgaImagesResponse();
    AWS_EC2_API DescribeFpgaImagesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFpgaImagesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the FPGA images.</p>
     */
    inline const Aws::Vector<FpgaImage>& GetFpgaImages() const{ return m_fpgaImages; }

    /**
     * <p>Information about the FPGA images.</p>
     */
    inline void SetFpgaImages(const Aws::Vector<FpgaImage>& value) { m_fpgaImages = value; }

    /**
     * <p>Information about the FPGA images.</p>
     */
    inline void SetFpgaImages(Aws::Vector<FpgaImage>&& value) { m_fpgaImages = std::move(value); }

    /**
     * <p>Information about the FPGA images.</p>
     */
    inline DescribeFpgaImagesResponse& WithFpgaImages(const Aws::Vector<FpgaImage>& value) { SetFpgaImages(value); return *this;}

    /**
     * <p>Information about the FPGA images.</p>
     */
    inline DescribeFpgaImagesResponse& WithFpgaImages(Aws::Vector<FpgaImage>&& value) { SetFpgaImages(std::move(value)); return *this;}

    /**
     * <p>Information about the FPGA images.</p>
     */
    inline DescribeFpgaImagesResponse& AddFpgaImages(const FpgaImage& value) { m_fpgaImages.push_back(value); return *this; }

    /**
     * <p>Information about the FPGA images.</p>
     */
    inline DescribeFpgaImagesResponse& AddFpgaImages(FpgaImage&& value) { m_fpgaImages.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFpgaImagesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFpgaImagesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFpgaImagesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeFpgaImagesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeFpgaImagesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<FpgaImage> m_fpgaImages;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
