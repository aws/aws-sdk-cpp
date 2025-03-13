/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /**
   * <p>Contains the output of AllocateHosts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateHostsResult">AWS
   * API Reference</a></p>
   */
  class AllocateHostsResponse
  {
  public:
    AWS_EC2_API AllocateHostsResponse() = default;
    AWS_EC2_API AllocateHostsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AllocateHostsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the allocated Dedicated Host. This is used to launch an instance
     * onto a specific host.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const { return m_hostIds; }
    template<typename HostIdsT = Aws::Vector<Aws::String>>
    void SetHostIds(HostIdsT&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::forward<HostIdsT>(value); }
    template<typename HostIdsT = Aws::Vector<Aws::String>>
    AllocateHostsResponse& WithHostIds(HostIdsT&& value) { SetHostIds(std::forward<HostIdsT>(value)); return *this;}
    template<typename HostIdsT = Aws::String>
    AllocateHostsResponse& AddHostIds(HostIdsT&& value) { m_hostIdsHasBeenSet = true; m_hostIds.emplace_back(std::forward<HostIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AllocateHostsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
