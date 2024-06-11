/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class DescribeNotebookExecutionRequest : public EMRRequest
  {
  public:
    AWS_EMR_API DescribeNotebookExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNotebookExecution"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const{ return m_notebookExecutionId; }
    inline bool NotebookExecutionIdHasBeenSet() const { return m_notebookExecutionIdHasBeenSet; }
    inline void SetNotebookExecutionId(const Aws::String& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = value; }
    inline void SetNotebookExecutionId(Aws::String&& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = std::move(value); }
    inline void SetNotebookExecutionId(const char* value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId.assign(value); }
    inline DescribeNotebookExecutionRequest& WithNotebookExecutionId(const Aws::String& value) { SetNotebookExecutionId(value); return *this;}
    inline DescribeNotebookExecutionRequest& WithNotebookExecutionId(Aws::String&& value) { SetNotebookExecutionId(std::move(value)); return *this;}
    inline DescribeNotebookExecutionRequest& WithNotebookExecutionId(const char* value) { SetNotebookExecutionId(value); return *this;}
    ///@}
  private:

    Aws::String m_notebookExecutionId;
    bool m_notebookExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
