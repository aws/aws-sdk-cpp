/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/ExecutionStatus.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The reference for the data export update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/ExecutionReference">AWS
   * API Reference</a></p>
   */
  class ExecutionReference
  {
  public:
    AWS_BCMDATAEXPORTS_API ExecutionReference();
    AWS_BCMDATAEXPORTS_API ExecutionReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API ExecutionReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for this specific execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline ExecutionReference& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline ExecutionReference& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID for this specific execution.</p>
     */
    inline ExecutionReference& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The status of this specific execution.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p>The status of this specific execution.</p>
     */
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }

    /**
     * <p>The status of this specific execution.</p>
     */
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }

    /**
     * <p>The status of this specific execution.</p>
     */
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }

    /**
     * <p>The status of this specific execution.</p>
     */
    inline ExecutionReference& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>The status of this specific execution.</p>
     */
    inline ExecutionReference& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
