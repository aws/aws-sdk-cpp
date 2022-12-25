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
    AWS_EC2_API ModifyFpgaImageAttributeResponse();
    AWS_EC2_API ModifyFpgaImageAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyFpgaImageAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the attribute.</p>
     */
    inline const FpgaImageAttribute& GetFpgaImageAttribute() const{ return m_fpgaImageAttribute; }

    /**
     * <p>Information about the attribute.</p>
     */
    inline void SetFpgaImageAttribute(const FpgaImageAttribute& value) { m_fpgaImageAttribute = value; }

    /**
     * <p>Information about the attribute.</p>
     */
    inline void SetFpgaImageAttribute(FpgaImageAttribute&& value) { m_fpgaImageAttribute = std::move(value); }

    /**
     * <p>Information about the attribute.</p>
     */
    inline ModifyFpgaImageAttributeResponse& WithFpgaImageAttribute(const FpgaImageAttribute& value) { SetFpgaImageAttribute(value); return *this;}

    /**
     * <p>Information about the attribute.</p>
     */
    inline ModifyFpgaImageAttributeResponse& WithFpgaImageAttribute(FpgaImageAttribute&& value) { SetFpgaImageAttribute(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyFpgaImageAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyFpgaImageAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    FpgaImageAttribute m_fpgaImageAttribute;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
