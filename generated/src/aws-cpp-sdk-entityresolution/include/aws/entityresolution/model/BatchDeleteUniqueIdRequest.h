/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class BatchDeleteUniqueIdRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API BatchDeleteUniqueIdRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteUniqueId"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;

    AWS_ENTITYRESOLUTION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    template<typename WorkflowNameT = Aws::String>
    void SetWorkflowName(WorkflowNameT&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::forward<WorkflowNameT>(value); }
    template<typename WorkflowNameT = Aws::String>
    BatchDeleteUniqueIdRequest& WithWorkflowName(WorkflowNameT&& value) { SetWorkflowName(std::forward<WorkflowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline const Aws::String& GetInputSource() const { return m_inputSource; }
    inline bool InputSourceHasBeenSet() const { return m_inputSourceHasBeenSet; }
    template<typename InputSourceT = Aws::String>
    void SetInputSource(InputSourceT&& value) { m_inputSourceHasBeenSet = true; m_inputSource = std::forward<InputSourceT>(value); }
    template<typename InputSourceT = Aws::String>
    BatchDeleteUniqueIdRequest& WithInputSource(InputSourceT&& value) { SetInputSource(std::forward<InputSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique IDs to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUniqueIds() const { return m_uniqueIds; }
    inline bool UniqueIdsHasBeenSet() const { return m_uniqueIdsHasBeenSet; }
    template<typename UniqueIdsT = Aws::Vector<Aws::String>>
    void SetUniqueIds(UniqueIdsT&& value) { m_uniqueIdsHasBeenSet = true; m_uniqueIds = std::forward<UniqueIdsT>(value); }
    template<typename UniqueIdsT = Aws::Vector<Aws::String>>
    BatchDeleteUniqueIdRequest& WithUniqueIds(UniqueIdsT&& value) { SetUniqueIds(std::forward<UniqueIdsT>(value)); return *this;}
    template<typename UniqueIdsT = Aws::String>
    BatchDeleteUniqueIdRequest& AddUniqueIds(UniqueIdsT&& value) { m_uniqueIdsHasBeenSet = true; m_uniqueIds.emplace_back(std::forward<UniqueIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    Aws::String m_inputSource;
    bool m_inputSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_uniqueIds;
    bool m_uniqueIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
