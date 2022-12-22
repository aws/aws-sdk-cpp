/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchOrchestratorFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeInstancePatchesRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeInstancePatchesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstancePatches"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline DescribeInstancePatchesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline DescribeInstancePatchesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed node whose patch state information should be
     * retrieved.</p>
     */
    inline DescribeInstancePatchesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> </li>
     * </ul>
     */
    inline const Aws::Vector<PatchOrchestratorFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> </li>
     * </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> </li>
     * </ul>
     */
    inline void SetFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> </li>
     * </ul>
     */
    inline void SetFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> </li>
     * </ul>
     */
    inline DescribeInstancePatchesRequest& WithFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> </li>
     * </ul>
     */
    inline DescribeInstancePatchesRequest& WithFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> </li>
     * </ul>
     */
    inline DescribeInstancePatchesRequest& AddFilters(const PatchOrchestratorFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribeInstancePatches</code>include the
     * following:</p> <ul> <li> <p> <b> <code>Classification</code> </b> </p> <p>Sample
     * values: <code>Security</code> | <code>SecurityUpdates</code> </p> </li> <li> <p>
     * <b> <code>KBId</code> </b> </p> <p>Sample values: <code>KB4480056</code> |
     * <code>java-1.7.0-openjdk.x86_64</code> </p> </li> <li> <p> <b>
     * <code>Severity</code> </b> </p> <p>Sample values: <code>Important</code> |
     * <code>Medium</code> | <code>Low</code> </p> </li> <li> <p> <b>
     * <code>State</code> </b> </p> <p>Sample values: <code>Installed</code> |
     * <code>InstalledOther</code> | <code>InstalledPendingReboot</code> </p> </li>
     * </ul>
     */
    inline DescribeInstancePatchesRequest& AddFilters(PatchOrchestratorFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstancePatchesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstancePatchesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstancePatchesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline DescribeInstancePatchesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<PatchOrchestratorFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
