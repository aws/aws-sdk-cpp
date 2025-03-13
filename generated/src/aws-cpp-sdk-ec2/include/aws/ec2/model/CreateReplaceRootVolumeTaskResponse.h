/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ReplaceRootVolumeTask.h>
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
  class CreateReplaceRootVolumeTaskResponse
  {
  public:
    AWS_EC2_API CreateReplaceRootVolumeTaskResponse() = default;
    AWS_EC2_API CreateReplaceRootVolumeTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateReplaceRootVolumeTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the root volume replacement task.</p>
     */
    inline const ReplaceRootVolumeTask& GetReplaceRootVolumeTask() const { return m_replaceRootVolumeTask; }
    template<typename ReplaceRootVolumeTaskT = ReplaceRootVolumeTask>
    void SetReplaceRootVolumeTask(ReplaceRootVolumeTaskT&& value) { m_replaceRootVolumeTaskHasBeenSet = true; m_replaceRootVolumeTask = std::forward<ReplaceRootVolumeTaskT>(value); }
    template<typename ReplaceRootVolumeTaskT = ReplaceRootVolumeTask>
    CreateReplaceRootVolumeTaskResponse& WithReplaceRootVolumeTask(ReplaceRootVolumeTaskT&& value) { SetReplaceRootVolumeTask(std::forward<ReplaceRootVolumeTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateReplaceRootVolumeTaskResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ReplaceRootVolumeTask m_replaceRootVolumeTask;
    bool m_replaceRootVolumeTaskHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
