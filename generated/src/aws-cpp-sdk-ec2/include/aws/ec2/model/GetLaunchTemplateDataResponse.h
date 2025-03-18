/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseLaunchTemplateData.h>
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
  class GetLaunchTemplateDataResponse
  {
  public:
    AWS_EC2_API GetLaunchTemplateDataResponse() = default;
    AWS_EC2_API GetLaunchTemplateDataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetLaunchTemplateDataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The instance data.</p>
     */
    inline const ResponseLaunchTemplateData& GetLaunchTemplateData() const { return m_launchTemplateData; }
    template<typename LaunchTemplateDataT = ResponseLaunchTemplateData>
    void SetLaunchTemplateData(LaunchTemplateDataT&& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = std::forward<LaunchTemplateDataT>(value); }
    template<typename LaunchTemplateDataT = ResponseLaunchTemplateData>
    GetLaunchTemplateDataResponse& WithLaunchTemplateData(LaunchTemplateDataT&& value) { SetLaunchTemplateData(std::forward<LaunchTemplateDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetLaunchTemplateDataResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ResponseLaunchTemplateData m_launchTemplateData;
    bool m_launchTemplateDataHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
