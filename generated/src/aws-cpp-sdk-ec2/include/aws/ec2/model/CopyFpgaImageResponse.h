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
  class CopyFpgaImageResponse
  {
  public:
    AWS_EC2_API CopyFpgaImageResponse();
    AWS_EC2_API CopyFpgaImageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CopyFpgaImageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the new AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }

    /**
     * <p>The ID of the new AFI.</p>
     */
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageId = value; }

    /**
     * <p>The ID of the new AFI.</p>
     */
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageId = std::move(value); }

    /**
     * <p>The ID of the new AFI.</p>
     */
    inline void SetFpgaImageId(const char* value) { m_fpgaImageId.assign(value); }

    /**
     * <p>The ID of the new AFI.</p>
     */
    inline CopyFpgaImageResponse& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}

    /**
     * <p>The ID of the new AFI.</p>
     */
    inline CopyFpgaImageResponse& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new AFI.</p>
     */
    inline CopyFpgaImageResponse& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CopyFpgaImageResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CopyFpgaImageResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_fpgaImageId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
