/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateFpgaImageResponse
  {
  public:
    AWS_EC2_API CreateFpgaImageResponse();
    AWS_EC2_API CreateFpgaImageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateFpgaImageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageId = value; }

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageId = std::move(value); }

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline void SetFpgaImageId(const char* value) { m_fpgaImageId.assign(value); }

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline CreateFpgaImageResponse& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline CreateFpgaImageResponse& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}

    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline CreateFpgaImageResponse& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}


    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageGlobalId() const{ return m_fpgaImageGlobalId; }

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline void SetFpgaImageGlobalId(const Aws::String& value) { m_fpgaImageGlobalId = value; }

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline void SetFpgaImageGlobalId(Aws::String&& value) { m_fpgaImageGlobalId = std::move(value); }

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline void SetFpgaImageGlobalId(const char* value) { m_fpgaImageGlobalId.assign(value); }

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline CreateFpgaImageResponse& WithFpgaImageGlobalId(const Aws::String& value) { SetFpgaImageGlobalId(value); return *this;}

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline CreateFpgaImageResponse& WithFpgaImageGlobalId(Aws::String&& value) { SetFpgaImageGlobalId(std::move(value)); return *this;}

    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline CreateFpgaImageResponse& WithFpgaImageGlobalId(const char* value) { SetFpgaImageGlobalId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateFpgaImageResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateFpgaImageResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_fpgaImageId;

    Aws::String m_fpgaImageGlobalId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
