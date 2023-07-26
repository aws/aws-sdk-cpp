/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_ENTITYRESOLUTION_API GetMatchIdRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMatchId"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecord() const{ return m_record; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline void SetRecord(const Aws::Map<Aws::String, Aws::String>& value) { m_recordHasBeenSet = true; m_record = value; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline void SetRecord(Aws::Map<Aws::String, Aws::String>&& value) { m_recordHasBeenSet = true; m_record = std::move(value); }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& WithRecord(const Aws::Map<Aws::String, Aws::String>& value) { SetRecord(value); return *this;}

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& WithRecord(Aws::Map<Aws::String, Aws::String>&& value) { SetRecord(std::move(value)); return *this;}

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& AddRecord(const Aws::String& key, const Aws::String& value) { m_recordHasBeenSet = true; m_record.emplace(key, value); return *this; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& AddRecord(Aws::String&& key, const Aws::String& value) { m_recordHasBeenSet = true; m_record.emplace(std::move(key), value); return *this; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& AddRecord(const Aws::String& key, Aws::String&& value) { m_recordHasBeenSet = true; m_record.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& AddRecord(Aws::String&& key, Aws::String&& value) { m_recordHasBeenSet = true; m_record.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& AddRecord(const char* key, Aws::String&& value) { m_recordHasBeenSet = true; m_record.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& AddRecord(Aws::String&& key, const char* value) { m_recordHasBeenSet = true; m_record.emplace(std::move(key), value); return *this; }

    /**
     * <p>The record to fetch the Match ID for.</p>
     */
    inline GetMatchIdRequest& AddRecord(const char* key, const char* value) { m_recordHasBeenSet = true; m_record.emplace(key, value); return *this; }


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
    inline GetMatchIdRequest& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline GetMatchIdRequest& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline GetMatchIdRequest& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_record;
    bool m_recordHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
