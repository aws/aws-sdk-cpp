/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/BCMDataExportsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

  /**
   */
  class GetExecutionRequest : public BCMDataExportsRequest
  {
  public:
    AWS_BCMDATAEXPORTS_API GetExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExecution"; }

    AWS_BCMDATAEXPORTS_API Aws::String SerializePayload() const override;

    AWS_BCMDATAEXPORTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID for this specific execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }
    inline GetExecutionRequest& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline GetExecutionRequest& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline GetExecutionRequest& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Export object that generated this
     * specific execution.</p>
     */
    inline const Aws::String& GetExportArn() const{ return m_exportArn; }
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }
    inline void SetExportArn(const Aws::String& value) { m_exportArnHasBeenSet = true; m_exportArn = value; }
    inline void SetExportArn(Aws::String&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::move(value); }
    inline void SetExportArn(const char* value) { m_exportArnHasBeenSet = true; m_exportArn.assign(value); }
    inline GetExecutionRequest& WithExportArn(const Aws::String& value) { SetExportArn(value); return *this;}
    inline GetExecutionRequest& WithExportArn(Aws::String&& value) { SetExportArn(std::move(value)); return *this;}
    inline GetExecutionRequest& WithExportArn(const char* value) { SetExportArn(value); return *this;}
    ///@}
  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
