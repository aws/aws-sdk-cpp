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
  class BatchPutScheduledUpdateGroupActionResult
  {
  public:
    AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionResult() = default;
    AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The names of the scheduled actions that could not be created or updated,
     * including an error message.</p>
     */
    inline const Aws::Vector<FailedScheduledUpdateGroupActionRequest>& GetFailedScheduledUpdateGroupActions() const { return m_failedScheduledUpdateGroupActions; }
    template<typename FailedScheduledUpdateGroupActionsT = Aws::Vector<FailedScheduledUpdateGroupActionRequest>>
    void SetFailedScheduledUpdateGroupActions(FailedScheduledUpdateGroupActionsT&& value) { m_failedScheduledUpdateGroupActionsHasBeenSet = true; m_failedScheduledUpdateGroupActions = std::forward<FailedScheduledUpdateGroupActionsT>(value); }
    template<typename FailedScheduledUpdateGroupActionsT = Aws::Vector<FailedScheduledUpdateGroupActionRequest>>
    BatchPutScheduledUpdateGroupActionResult& WithFailedScheduledUpdateGroupActions(FailedScheduledUpdateGroupActionsT&& value) { SetFailedScheduledUpdateGroupActions(std::forward<FailedScheduledUpdateGroupActionsT>(value)); return *this;}
    template<typename FailedScheduledUpdateGroupActionsT = FailedScheduledUpdateGroupActionRequest>
    BatchPutScheduledUpdateGroupActionResult& AddFailedScheduledUpdateGroupActions(FailedScheduledUpdateGroupActionsT&& value) { m_failedScheduledUpdateGroupActionsHasBeenSet = true; m_failedScheduledUpdateGroupActions.emplace_back(std::forward<FailedScheduledUpdateGroupActionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    BatchPutScheduledUpdateGroupActionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedScheduledUpdateGroupActionRequest> m_failedScheduledUpdateGroupActions;
    bool m_failedScheduledUpdateGroupActionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
