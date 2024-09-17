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
    AWS_LIGHTSAIL_API SetupHistory();
    AWS_LIGHTSAIL_API SetupHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API SetupHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A GUID that's used to identify the operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }
    inline SetupHistory& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline SetupHistory& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline SetupHistory& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the specified request.</p>
     */
    inline const SetupRequest& GetRequest() const{ return m_request; }
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
    inline void SetRequest(const SetupRequest& value) { m_requestHasBeenSet = true; m_request = value; }
    inline void SetRequest(SetupRequest&& value) { m_requestHasBeenSet = true; m_request = std::move(value); }
    inline SetupHistory& WithRequest(const SetupRequest& value) { SetRequest(value); return *this;}
    inline SetupHistory& WithRequest(SetupRequest&& value) { SetRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resource name for the request.</p>
     */
    inline const SetupHistoryResource& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const SetupHistoryResource& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(SetupHistoryResource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline SetupHistory& WithResource(const SetupHistoryResource& value) { SetResource(value); return *this;}
    inline SetupHistory& WithResource(SetupHistoryResource&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the full details of the request.</p>
     */
    inline const Aws::Vector<SetupExecutionDetails>& GetExecutionDetails() const{ return m_executionDetails; }
    inline bool ExecutionDetailsHasBeenSet() const { return m_executionDetailsHasBeenSet; }
    inline void SetExecutionDetails(const Aws::Vector<SetupExecutionDetails>& value) { m_executionDetailsHasBeenSet = true; m_executionDetails = value; }
    inline void SetExecutionDetails(Aws::Vector<SetupExecutionDetails>&& value) { m_executionDetailsHasBeenSet = true; m_executionDetails = std::move(value); }
    inline SetupHistory& WithExecutionDetails(const Aws::Vector<SetupExecutionDetails>& value) { SetExecutionDetails(value); return *this;}
    inline SetupHistory& WithExecutionDetails(Aws::Vector<SetupExecutionDetails>&& value) { SetExecutionDetails(std::move(value)); return *this;}
    inline SetupHistory& AddExecutionDetails(const SetupExecutionDetails& value) { m_executionDetailsHasBeenSet = true; m_executionDetails.push_back(value); return *this; }
    inline SetupHistory& AddExecutionDetails(SetupExecutionDetails&& value) { m_executionDetailsHasBeenSet = true; m_executionDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline const SetupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SetupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SetupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SetupHistory& WithStatus(const SetupStatus& value) { SetStatus(value); return *this;}
    inline SetupHistory& WithStatus(SetupStatus&& value) { SetStatus(std::move(value)); return *this;}
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

    SetupStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
