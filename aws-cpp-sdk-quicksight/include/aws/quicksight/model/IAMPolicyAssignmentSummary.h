/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssignmentStatus.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>IAM policy assignment summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IAMPolicyAssignmentSummary">AWS
   * API Reference</a></p>
   */
  class IAMPolicyAssignmentSummary
  {
  public:
    AWS_QUICKSIGHT_API IAMPolicyAssignmentSummary();
    AWS_QUICKSIGHT_API IAMPolicyAssignmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IAMPolicyAssignmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Assignment name.</p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }

    /**
     * <p>Assignment name.</p>
     */
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }

    /**
     * <p>Assignment name.</p>
     */
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = value; }

    /**
     * <p>Assignment name.</p>
     */
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::move(value); }

    /**
     * <p>Assignment name.</p>
     */
    inline void SetAssignmentName(const char* value) { m_assignmentNameHasBeenSet = true; m_assignmentName.assign(value); }

    /**
     * <p>Assignment name.</p>
     */
    inline IAMPolicyAssignmentSummary& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}

    /**
     * <p>Assignment name.</p>
     */
    inline IAMPolicyAssignmentSummary& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}

    /**
     * <p>Assignment name.</p>
     */
    inline IAMPolicyAssignmentSummary& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}


    /**
     * <p>Assignment status.</p>
     */
    inline const AssignmentStatus& GetAssignmentStatus() const{ return m_assignmentStatus; }

    /**
     * <p>Assignment status.</p>
     */
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }

    /**
     * <p>Assignment status.</p>
     */
    inline void SetAssignmentStatus(const AssignmentStatus& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }

    /**
     * <p>Assignment status.</p>
     */
    inline void SetAssignmentStatus(AssignmentStatus&& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = std::move(value); }

    /**
     * <p>Assignment status.</p>
     */
    inline IAMPolicyAssignmentSummary& WithAssignmentStatus(const AssignmentStatus& value) { SetAssignmentStatus(value); return *this;}

    /**
     * <p>Assignment status.</p>
     */
    inline IAMPolicyAssignmentSummary& WithAssignmentStatus(AssignmentStatus&& value) { SetAssignmentStatus(std::move(value)); return *this;}

  private:

    Aws::String m_assignmentName;
    bool m_assignmentNameHasBeenSet = false;

    AssignmentStatus m_assignmentStatus;
    bool m_assignmentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
