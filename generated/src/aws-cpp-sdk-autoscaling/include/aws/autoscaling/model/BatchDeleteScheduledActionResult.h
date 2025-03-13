/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/FailedScheduledUpdateGroupActionRequest.h>
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
namespace AutoScaling
{
namespace Model
{
  class BatchDeleteScheduledActionResult
  {
  public:
    AWS_AUTOSCALING_API BatchDeleteScheduledActionResult() = default;
    AWS_AUTOSCALING_API BatchDeleteScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API BatchDeleteScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The names of the scheduled actions that could not be deleted, including an
     * error message.</p>
     */
    inline const Aws::Vector<FailedScheduledUpdateGroupActionRequest>& GetFailedScheduledActions() const { return m_failedScheduledActions; }
    template<typename FailedScheduledActionsT = Aws::Vector<FailedScheduledUpdateGroupActionRequest>>
    void SetFailedScheduledActions(FailedScheduledActionsT&& value) { m_failedScheduledActionsHasBeenSet = true; m_failedScheduledActions = std::forward<FailedScheduledActionsT>(value); }
    template<typename FailedScheduledActionsT = Aws::Vector<FailedScheduledUpdateGroupActionRequest>>
    BatchDeleteScheduledActionResult& WithFailedScheduledActions(FailedScheduledActionsT&& value) { SetFailedScheduledActions(std::forward<FailedScheduledActionsT>(value)); return *this;}
    template<typename FailedScheduledActionsT = FailedScheduledUpdateGroupActionRequest>
    BatchDeleteScheduledActionResult& AddFailedScheduledActions(FailedScheduledActionsT&& value) { m_failedScheduledActionsHasBeenSet = true; m_failedScheduledActions.emplace_back(std::forward<FailedScheduledActionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    BatchDeleteScheduledActionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedScheduledUpdateGroupActionRequest> m_failedScheduledActions;
    bool m_failedScheduledActionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
