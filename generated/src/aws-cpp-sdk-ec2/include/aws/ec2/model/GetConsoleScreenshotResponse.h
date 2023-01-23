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
  class GetConsoleScreenshotResponse
  {
  public:
    AWS_EC2_API GetConsoleScreenshotResponse();
    AWS_EC2_API GetConsoleScreenshotResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetConsoleScreenshotResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The data that comprises the image.</p>
     */
    inline const Aws::String& GetImageData() const{ return m_imageData; }

    /**
     * <p>The data that comprises the image.</p>
     */
    inline void SetImageData(const Aws::String& value) { m_imageData = value; }

    /**
     * <p>The data that comprises the image.</p>
     */
    inline void SetImageData(Aws::String&& value) { m_imageData = std::move(value); }

    /**
     * <p>The data that comprises the image.</p>
     */
    inline void SetImageData(const char* value) { m_imageData.assign(value); }

    /**
     * <p>The data that comprises the image.</p>
     */
    inline GetConsoleScreenshotResponse& WithImageData(const Aws::String& value) { SetImageData(value); return *this;}

    /**
     * <p>The data that comprises the image.</p>
     */
    inline GetConsoleScreenshotResponse& WithImageData(Aws::String&& value) { SetImageData(std::move(value)); return *this;}

    /**
     * <p>The data that comprises the image.</p>
     */
    inline GetConsoleScreenshotResponse& WithImageData(const char* value) { SetImageData(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetConsoleScreenshotResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetConsoleScreenshotResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline GetConsoleScreenshotResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetConsoleScreenshotResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetConsoleScreenshotResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_imageData;

    Aws::String m_instanceId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
