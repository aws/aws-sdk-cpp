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
  class CancelImportTaskResponse
  {
  public:
    AWS_EC2_API CancelImportTaskResponse() = default;
    AWS_EC2_API CancelImportTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CancelImportTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline const Aws::String& GetImportTaskId() const { return m_importTaskId; }
    template<typename ImportTaskIdT = Aws::String>
    void SetImportTaskId(ImportTaskIdT&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::forward<ImportTaskIdT>(value); }
    template<typename ImportTaskIdT = Aws::String>
    CancelImportTaskResponse& WithImportTaskId(ImportTaskIdT&& value) { SetImportTaskId(std::forward<ImportTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline const Aws::String& GetPreviousState() const { return m_previousState; }
    template<typename PreviousStateT = Aws::String>
    void SetPreviousState(PreviousStateT&& value) { m_previousStateHasBeenSet = true; m_previousState = std::forward<PreviousStateT>(value); }
    template<typename PreviousStateT = Aws::String>
    CancelImportTaskResponse& WithPreviousState(PreviousStateT&& value) { SetPreviousState(std::forward<PreviousStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    CancelImportTaskResponse& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CancelImportTaskResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet = false;

    Aws::String m_previousState;
    bool m_previousStateHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
