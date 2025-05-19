/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/MacModificationTask.h>
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
  class CreateDelegateMacVolumeOwnershipTaskResponse
  {
  public:
    AWS_EC2_API CreateDelegateMacVolumeOwnershipTaskResponse() = default;
    AWS_EC2_API CreateDelegateMacVolumeOwnershipTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateDelegateMacVolumeOwnershipTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the volume ownership delegation task.</p>
     */
    inline const MacModificationTask& GetMacModificationTask() const { return m_macModificationTask; }
    template<typename MacModificationTaskT = MacModificationTask>
    void SetMacModificationTask(MacModificationTaskT&& value) { m_macModificationTaskHasBeenSet = true; m_macModificationTask = std::forward<MacModificationTaskT>(value); }
    template<typename MacModificationTaskT = MacModificationTask>
    CreateDelegateMacVolumeOwnershipTaskResponse& WithMacModificationTask(MacModificationTaskT&& value) { SetMacModificationTask(std::forward<MacModificationTaskT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateDelegateMacVolumeOwnershipTaskResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    MacModificationTask m_macModificationTask;
    bool m_macModificationTaskHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
