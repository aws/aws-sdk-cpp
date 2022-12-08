/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ConversionTask.h>
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
  class ImportVolumeResponse
  {
  public:
    AWS_EC2_API ImportVolumeResponse();
    AWS_EC2_API ImportVolumeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ImportVolumeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the conversion task.</p>
     */
    inline const ConversionTask& GetConversionTask() const{ return m_conversionTask; }

    /**
     * <p>Information about the conversion task.</p>
     */
    inline void SetConversionTask(const ConversionTask& value) { m_conversionTask = value; }

    /**
     * <p>Information about the conversion task.</p>
     */
    inline void SetConversionTask(ConversionTask&& value) { m_conversionTask = std::move(value); }

    /**
     * <p>Information about the conversion task.</p>
     */
    inline ImportVolumeResponse& WithConversionTask(const ConversionTask& value) { SetConversionTask(value); return *this;}

    /**
     * <p>Information about the conversion task.</p>
     */
    inline ImportVolumeResponse& WithConversionTask(ConversionTask&& value) { SetConversionTask(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ImportVolumeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ImportVolumeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ConversionTask m_conversionTask;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
