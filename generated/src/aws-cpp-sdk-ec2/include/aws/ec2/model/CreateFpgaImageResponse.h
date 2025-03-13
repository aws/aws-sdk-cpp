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
    AWS_EC2_API CreateFpgaImageResponse() = default;
    AWS_EC2_API CreateFpgaImageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateFpgaImageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The FPGA image identifier (AFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageId() const { return m_fpgaImageId; }
    template<typename FpgaImageIdT = Aws::String>
    void SetFpgaImageId(FpgaImageIdT&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::forward<FpgaImageIdT>(value); }
    template<typename FpgaImageIdT = Aws::String>
    CreateFpgaImageResponse& WithFpgaImageId(FpgaImageIdT&& value) { SetFpgaImageId(std::forward<FpgaImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The global FPGA image identifier (AGFI ID).</p>
     */
    inline const Aws::String& GetFpgaImageGlobalId() const { return m_fpgaImageGlobalId; }
    template<typename FpgaImageGlobalIdT = Aws::String>
    void SetFpgaImageGlobalId(FpgaImageGlobalIdT&& value) { m_fpgaImageGlobalIdHasBeenSet = true; m_fpgaImageGlobalId = std::forward<FpgaImageGlobalIdT>(value); }
    template<typename FpgaImageGlobalIdT = Aws::String>
    CreateFpgaImageResponse& WithFpgaImageGlobalId(FpgaImageGlobalIdT&& value) { SetFpgaImageGlobalId(std::forward<FpgaImageGlobalIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateFpgaImageResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet = false;

    Aws::String m_fpgaImageGlobalId;
    bool m_fpgaImageGlobalIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
