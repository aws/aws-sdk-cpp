/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/ProcessingType.h>
#include <aws/entityresolution/model/Record.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class GenerateMatchIdRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API GenerateMatchIdRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateMatchId"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name of the rule-based matching workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    template<typename WorkflowNameT = Aws::String>
    void SetWorkflowName(WorkflowNameT&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::forward<WorkflowNameT>(value); }
    template<typename WorkflowNameT = Aws::String>
    GenerateMatchIdRequest& WithWorkflowName(WorkflowNameT&& value) { SetWorkflowName(std::forward<WorkflowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The records to match.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const { return m_records; }
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
    template<typename RecordsT = Aws::Vector<Record>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<Record>>
    GenerateMatchIdRequest& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = Record>
    GenerateMatchIdRequest& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The processing mode that determines how Match IDs are generated and results
     * are saved. Each mode provides different levels of accuracy, response time, and
     * completeness of results.</p> <p>If not specified, defaults to
     * <code>CONSISTENT</code>.</p> <p> <code>CONSISTENT</code>: Performs immediate
     * lookup and matching against all existing records, with results saved
     * synchronously. Provides highest accuracy but slower response time.</p> <p>
     * <code>EVENTUAL</code> (shown as <i>Background</i> in the console): Performs
     * initial match ID lookup or generation immediately, with record updates processed
     * asynchronously in the background. Offers faster initial response time, with
     * complete matching results available later in S3. </p> <p>
     * <code>EVENTUAL_NO_LOOKUP</code> (shown as <i>Quick ID generation</i> in the
     * console): Generates new match IDs without checking existing matches, with
     * updates processed asynchronously. Provides fastest response time but should only
     * be used for records known to be unique. </p>
     */
    inline ProcessingType GetProcessingType() const { return m_processingType; }
    inline bool ProcessingTypeHasBeenSet() const { return m_processingTypeHasBeenSet; }
    inline void SetProcessingType(ProcessingType value) { m_processingTypeHasBeenSet = true; m_processingType = value; }
    inline GenerateMatchIdRequest& WithProcessingType(ProcessingType value) { SetProcessingType(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;

    ProcessingType m_processingType{ProcessingType::NOT_SET};
    bool m_processingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
