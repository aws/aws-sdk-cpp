/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LaunchTemplateVersion.h>
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
  class DescribeLaunchTemplateVersionsResponse
  {
  public:
    AWS_EC2_API DescribeLaunchTemplateVersionsResponse() = default;
    AWS_EC2_API DescribeLaunchTemplateVersionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLaunchTemplateVersionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the launch template versions.</p>
     */
    inline const Aws::Vector<LaunchTemplateVersion>& GetLaunchTemplateVersions() const { return m_launchTemplateVersions; }
    template<typename LaunchTemplateVersionsT = Aws::Vector<LaunchTemplateVersion>>
    void SetLaunchTemplateVersions(LaunchTemplateVersionsT&& value) { m_launchTemplateVersionsHasBeenSet = true; m_launchTemplateVersions = std::forward<LaunchTemplateVersionsT>(value); }
    template<typename LaunchTemplateVersionsT = Aws::Vector<LaunchTemplateVersion>>
    DescribeLaunchTemplateVersionsResponse& WithLaunchTemplateVersions(LaunchTemplateVersionsT&& value) { SetLaunchTemplateVersions(std::forward<LaunchTemplateVersionsT>(value)); return *this;}
    template<typename LaunchTemplateVersionsT = LaunchTemplateVersion>
    DescribeLaunchTemplateVersionsResponse& AddLaunchTemplateVersions(LaunchTemplateVersionsT&& value) { m_launchTemplateVersionsHasBeenSet = true; m_launchTemplateVersions.emplace_back(std::forward<LaunchTemplateVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLaunchTemplateVersionsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLaunchTemplateVersionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LaunchTemplateVersion> m_launchTemplateVersions;
    bool m_launchTemplateVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
