/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FpgaImageAttribute.h>
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
  class ModifyFpgaImageAttributeResponse
  {
  public:
    AWS_EC2_API ModifyFpgaImageAttributeResponse() = default;
    AWS_EC2_API ModifyFpgaImageAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyFpgaImageAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the attribute.</p>
     */
    inline const FpgaImageAttribute& GetFpgaImageAttribute() const { return m_fpgaImageAttribute; }
    template<typename FpgaImageAttributeT = FpgaImageAttribute>
    void SetFpgaImageAttribute(FpgaImageAttributeT&& value) { m_fpgaImageAttributeHasBeenSet = true; m_fpgaImageAttribute = std::forward<FpgaImageAttributeT>(value); }
    template<typename FpgaImageAttributeT = FpgaImageAttribute>
    ModifyFpgaImageAttributeResponse& WithFpgaImageAttribute(FpgaImageAttributeT&& value) { SetFpgaImageAttribute(std::forward<FpgaImageAttributeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyFpgaImageAttributeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    FpgaImageAttribute m_fpgaImageAttribute;
    bool m_fpgaImageAttributeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
