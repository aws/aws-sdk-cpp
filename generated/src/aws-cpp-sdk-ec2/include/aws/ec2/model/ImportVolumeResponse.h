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
    AWS_EC2_API ImportVolumeResponse() = default;
    AWS_EC2_API ImportVolumeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ImportVolumeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the conversion task.</p>
     */
    inline const ConversionTask& GetConversionTask() const { return m_conversionTask; }
    template<typename ConversionTaskT = ConversionTask>
    void SetConversionTask(ConversionTaskT&& value) { m_conversionTaskHasBeenSet = true; m_conversionTask = std::forward<ConversionTaskT>(value); }
    template<typename ConversionTaskT = ConversionTask>
    ImportVolumeResponse& WithConversionTask(ConversionTaskT&& value) { SetConversionTask(std::forward<ConversionTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ImportVolumeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ConversionTask m_conversionTask;
    bool m_conversionTaskHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
