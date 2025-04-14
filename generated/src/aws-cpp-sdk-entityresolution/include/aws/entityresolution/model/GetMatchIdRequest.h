/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class GetMatchIdRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API GetMatchIdRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMatchId"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    template<typename WorkflowNameT = Aws::String>
    void SetWorkflowName(WorkflowNameT&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::forward<WorkflowNameT>(value); }
    template<typename WorkflowNameT = Aws::String>
    GetMatchIdRequest& WithWorkflowName(WorkflowNameT&& value) { SetWorkflowName(std::forward<WorkflowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecord() const { return m_record; }
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }
    template<typename RecordT = Aws::Map<Aws::String, Aws::String>>
    void SetRecord(RecordT&& value) { m_recordHasBeenSet = true; m_record = std::forward<RecordT>(value); }
    template<typename RecordT = Aws::Map<Aws::String, Aws::String>>
    GetMatchIdRequest& WithRecord(RecordT&& value) { SetRecord(std::forward<RecordT>(value)); return *this;}
    template<typename RecordKeyT = Aws::String, typename RecordValueT = Aws::String>
    GetMatchIdRequest& AddRecord(RecordKeyT&& key, RecordValueT&& value) {
      m_recordHasBeenSet = true; m_record.emplace(std::forward<RecordKeyT>(key), std::forward<RecordValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Normalizes the attributes defined in the schema in the input data. For
     * example, if an attribute has an <code>AttributeType</code> of
     * <code>PHONE_NUMBER</code>, and the data in the input table is in a format of
     * 1234567890, Entity Resolution will normalize this field in the output to
     * (123)-456-7890.</p>
     */
    inline bool GetApplyNormalization() const { return m_applyNormalization; }
    inline bool ApplyNormalizationHasBeenSet() const { return m_applyNormalizationHasBeenSet; }
    inline void SetApplyNormalization(bool value) { m_applyNormalizationHasBeenSet = true; m_applyNormalization = value; }
    inline GetMatchIdRequest& WithApplyNormalization(bool value) { SetApplyNormalization(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_record;
    bool m_recordHasBeenSet = false;

    bool m_applyNormalization{false};
    bool m_applyNormalizationHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
