/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/model/AssignmentStatusType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API ListVirtualMFADevicesRequest : public IAMRequest
  {
  public:
    ListVirtualMFADevicesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p> The status (<code>Unassigned</code> or <code>Assigned</code>) of the devices
     * to list. If you do not specify an <code>AssignmentStatus</code>, the action
     * defaults to <code>Any</code> which lists both assigned and unassigned virtual
     * MFA devices.</p>
     */
    inline const AssignmentStatusType& GetAssignmentStatus() const{ return m_assignmentStatus; }

    /**
     * <p> The status (<code>Unassigned</code> or <code>Assigned</code>) of the devices
     * to list. If you do not specify an <code>AssignmentStatus</code>, the action
     * defaults to <code>Any</code> which lists both assigned and unassigned virtual
     * MFA devices.</p>
     */
    inline void SetAssignmentStatus(const AssignmentStatusType& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }

    /**
     * <p> The status (<code>Unassigned</code> or <code>Assigned</code>) of the devices
     * to list. If you do not specify an <code>AssignmentStatus</code>, the action
     * defaults to <code>Any</code> which lists both assigned and unassigned virtual
     * MFA devices.</p>
     */
    inline void SetAssignmentStatus(AssignmentStatusType&& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }

    /**
     * <p> The status (<code>Unassigned</code> or <code>Assigned</code>) of the devices
     * to list. If you do not specify an <code>AssignmentStatus</code>, the action
     * defaults to <code>Any</code> which lists both assigned and unassigned virtual
     * MFA devices.</p>
     */
    inline ListVirtualMFADevicesRequest& WithAssignmentStatus(const AssignmentStatusType& value) { SetAssignmentStatus(value); return *this;}

    /**
     * <p> The status (<code>Unassigned</code> or <code>Assigned</code>) of the devices
     * to list. If you do not specify an <code>AssignmentStatus</code>, the action
     * defaults to <code>Any</code> which lists both assigned and unassigned virtual
     * MFA devices.</p>
     */
    inline ListVirtualMFADevicesRequest& WithAssignmentStatus(AssignmentStatusType&& value) { SetAssignmentStatus(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListVirtualMFADevicesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListVirtualMFADevicesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListVirtualMFADevicesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline ListVirtualMFADevicesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    AssignmentStatusType m_assignmentStatus;
    bool m_assignmentStatusHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
