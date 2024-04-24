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
    AWS_ENTITYRESOLUTION_API BatchDeleteUniqueIdRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteUniqueId"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;

    AWS_ENTITYRESOLUTION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline const Aws::String& GetInputSource() const{ return m_inputSource; }

    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline bool InputSourceHasBeenSet() const { return m_inputSourceHasBeenSet; }

    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline void SetInputSource(const Aws::String& value) { m_inputSourceHasBeenSet = true; m_inputSource = value; }

    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline void SetInputSource(Aws::String&& value) { m_inputSourceHasBeenSet = true; m_inputSource = std::move(value); }

    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline void SetInputSource(const char* value) { m_inputSourceHasBeenSet = true; m_inputSource.assign(value); }

    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline BatchDeleteUniqueIdRequest& WithInputSource(const Aws::String& value) { SetInputSource(value); return *this;}

    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline BatchDeleteUniqueIdRequest& WithInputSource(Aws::String&& value) { SetInputSource(std::move(value)); return *this;}

    /**
     * <p>The input source for the batch delete unique ID operation.</p>
     */
    inline BatchDeleteUniqueIdRequest& WithInputSource(const char* value) { SetInputSource(value); return *this;}


    /**
     * <p>The unique IDs to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUniqueIds() const{ return m_uniqueIds; }

    /**
     * <p>The unique IDs to delete.</p>
     */
    inline bool UniqueIdsHasBeenSet() const { return m_uniqueIdsHasBeenSet; }

    /**
     * <p>The unique IDs to delete.</p>
     */
    inline void SetUniqueIds(const Aws::Vector<Aws::String>& value) { m_uniqueIdsHasBeenSet = true; m_uniqueIds = value; }

    /**
     * <p>The unique IDs to delete.</p>
     */
    inline void SetUniqueIds(Aws::Vector<Aws::String>&& value) { m_uniqueIdsHasBeenSet = true; m_uniqueIds = std::move(value); }

    /**
     * <p>The unique IDs to delete.</p>
     */
    inline BatchDeleteUniqueIdRequest& WithUniqueIds(const Aws::Vector<Aws::String>& value) { SetUniqueIds(value); return *this;}

    /**
     * <p>The unique IDs to delete.</p>
     */
    inline BatchDeleteUniqueIdRequest& WithUniqueIds(Aws::Vector<Aws::String>&& value) { SetUniqueIds(std::move(value)); return *this;}

    /**
     * <p>The unique IDs to delete.</p>
     */
    inline BatchDeleteUniqueIdRequest& AddUniqueIds(const Aws::String& value) { m_uniqueIdsHasBeenSet = true; m_uniqueIds.push_back(value); return *this; }

    /**
     * <p>The unique IDs to delete.</p>
     */
    inline BatchDeleteUniqueIdRequest& AddUniqueIds(Aws::String&& value) { m_uniqueIdsHasBeenSet = true; m_uniqueIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique IDs to delete.</p>
     */
    inline BatchDeleteUniqueIdRequest& AddUniqueIds(const char* value) { m_uniqueIdsHasBeenSet = true; m_uniqueIds.push_back(value); return *this; }


    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline BatchDeleteUniqueIdRequest& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline BatchDeleteUniqueIdRequest& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline BatchDeleteUniqueIdRequest& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}

  private:

    Aws::String m_inputSource;
    bool m_inputSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_uniqueIds;
    bool m_uniqueIdsHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
