/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/SetupRequest.h>
#include <aws/lightsail/model/SetupHistoryResource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/SetupStatus.h>
#include <aws/lightsail/model/SetupExecutionDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Returns a list of the commands that were ran on the target resource.</p>
   * <p>The status of each command is also returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SetupHistory">AWS
   * API Reference</a></p>
   */
  class SetupHistory
  {
  public:
    AWS_LIGHTSAIL_API SetupHistory() = default;
    AWS_LIGHTSAIL_API SetupHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API SetupHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A GUID that's used to identify the operation.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    SetupHistory& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the specified request.</p>
     */
    inline const SetupRequest& GetRequest() const { return m_request; }
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
    template<typename RequestT = SetupRequest>
    void SetRequest(RequestT&& value) { m_requestHasBeenSet = true; m_request = std::forward<RequestT>(value); }
    template<typename RequestT = SetupRequest>
    SetupHistory& WithRequest(RequestT&& value) { SetRequest(std::forward<RequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resource name for the request.</p>
     */
    inline const SetupHistoryResource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = SetupHistoryResource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = SetupHistoryResource>
    SetupHistory& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the full details of the request.</p>
     */
    inline const Aws::Vector<SetupExecutionDetails>& GetExecutionDetails() const { return m_executionDetails; }
    inline bool ExecutionDetailsHasBeenSet() const { return m_executionDetailsHasBeenSet; }
    template<typename ExecutionDetailsT = Aws::Vector<SetupExecutionDetails>>
    void SetExecutionDetails(ExecutionDetailsT&& value) { m_executionDetailsHasBeenSet = true; m_executionDetails = std::forward<ExecutionDetailsT>(value); }
    template<typename ExecutionDetailsT = Aws::Vector<SetupExecutionDetails>>
    SetupHistory& WithExecutionDetails(ExecutionDetailsT&& value) { SetExecutionDetails(std::forward<ExecutionDetailsT>(value)); return *this;}
    template<typename ExecutionDetailsT = SetupExecutionDetails>
    SetupHistory& AddExecutionDetails(ExecutionDetailsT&& value) { m_executionDetailsHasBeenSet = true; m_executionDetails.emplace_back(std::forward<ExecutionDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline SetupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SetupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SetupHistory& WithStatus(SetupStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    SetupRequest m_request;
    bool m_requestHasBeenSet = false;

    SetupHistoryResource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Vector<SetupExecutionDetails> m_executionDetails;
    bool m_executionDetailsHasBeenSet = false;

    SetupStatus m_status{SetupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
