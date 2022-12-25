/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A summary of the call execution that includes an execution ID, the type of
   * execution (for example, <code>Command</code>), and the date/time of the
   * execution using a datetime object that is saved in the following format:
   * yyyy-MM-dd'T'HH:mm:ss'Z'.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ComplianceExecutionSummary">AWS
   * API Reference</a></p>
   */
  class ComplianceExecutionSummary
  {
  public:
    AWS_SSM_API ComplianceExecutionSummary();
    AWS_SSM_API ComplianceExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ComplianceExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time the execution ran as a datetime object that is saved in the
     * following format: yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The time the execution ran as a datetime object that is saved in the
     * following format: yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }

    /**
     * <p>The time the execution ran as a datetime object that is saved in the
     * following format: yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline void SetExecutionTime(const Aws::Utils::DateTime& value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }

    /**
     * <p>The time the execution ran as a datetime object that is saved in the
     * following format: yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline void SetExecutionTime(Aws::Utils::DateTime&& value) { m_executionTimeHasBeenSet = true; m_executionTime = std::move(value); }

    /**
     * <p>The time the execution ran as a datetime object that is saved in the
     * following format: yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline ComplianceExecutionSummary& WithExecutionTime(const Aws::Utils::DateTime& value) { SetExecutionTime(value); return *this;}

    /**
     * <p>The time the execution ran as a datetime object that is saved in the
     * following format: yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline ComplianceExecutionSummary& WithExecutionTime(Aws::Utils::DateTime&& value) { SetExecutionTime(std::move(value)); return *this;}


    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline ComplianceExecutionSummary& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline ComplianceExecutionSummary& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>An ID created by the system when <code>PutComplianceItems</code> was called.
     * For example, <code>CommandID</code> is a valid execution ID. You can use this ID
     * in subsequent calls.</p>
     */
    inline ComplianceExecutionSummary& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline const Aws::String& GetExecutionType() const{ return m_executionType; }

    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }

    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline void SetExecutionType(const Aws::String& value) { m_executionTypeHasBeenSet = true; m_executionType = value; }

    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline void SetExecutionType(Aws::String&& value) { m_executionTypeHasBeenSet = true; m_executionType = std::move(value); }

    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline void SetExecutionType(const char* value) { m_executionTypeHasBeenSet = true; m_executionType.assign(value); }

    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline ComplianceExecutionSummary& WithExecutionType(const Aws::String& value) { SetExecutionType(value); return *this;}

    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline ComplianceExecutionSummary& WithExecutionType(Aws::String&& value) { SetExecutionType(std::move(value)); return *this;}

    /**
     * <p>The type of execution. For example, <code>Command</code> is a valid execution
     * type.</p>
     */
    inline ComplianceExecutionSummary& WithExecutionType(const char* value) { SetExecutionType(value); return *this;}

  private:

    Aws::Utils::DateTime m_executionTime;
    bool m_executionTimeHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_executionType;
    bool m_executionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
