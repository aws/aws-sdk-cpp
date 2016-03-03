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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/EntityType.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GetAccountAuthorizationDetailsRequest : public IAMRequest
  {
  public:
    GetAccountAuthorizationDetailsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A list of entity types (user, group, role, local managed policy, or AWS
     * managed policy) for filtering the results.</p>
     */
    inline const Aws::Vector<EntityType>& GetFilter() const{ return m_filter; }

    /**
     * <p>A list of entity types (user, group, role, local managed policy, or AWS
     * managed policy) for filtering the results.</p>
     */
    inline void SetFilter(const Aws::Vector<EntityType>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A list of entity types (user, group, role, local managed policy, or AWS
     * managed policy) for filtering the results.</p>
     */
    inline void SetFilter(Aws::Vector<EntityType>&& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A list of entity types (user, group, role, local managed policy, or AWS
     * managed policy) for filtering the results.</p>
     */
    inline GetAccountAuthorizationDetailsRequest& WithFilter(const Aws::Vector<EntityType>& value) { SetFilter(value); return *this;}

    /**
     * <p>A list of entity types (user, group, role, local managed policy, or AWS
     * managed policy) for filtering the results.</p>
     */
    inline GetAccountAuthorizationDetailsRequest& WithFilter(Aws::Vector<EntityType>&& value) { SetFilter(value); return *this;}

    /**
     * <p>A list of entity types (user, group, role, local managed policy, or AWS
     * managed policy) for filtering the results.</p>
     */
    inline GetAccountAuthorizationDetailsRequest& AddFilter(const EntityType& value) { m_filterHasBeenSet = true; m_filter.push_back(value); return *this; }

    /**
     * <p>A list of entity types (user, group, role, local managed policy, or AWS
     * managed policy) for filtering the results.</p>
     */
    inline GetAccountAuthorizationDetailsRequest& AddFilter(EntityType&& value) { m_filterHasBeenSet = true; m_filter.push_back(value); return *this; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from. </p>
     */
    inline long GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from. </p>
     */
    inline void SetMaxItems(long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from. </p>
     */
    inline GetAccountAuthorizationDetailsRequest& WithMaxItems(long value) { SetMaxItems(value); return *this;}

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
    inline GetAccountAuthorizationDetailsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline GetAccountAuthorizationDetailsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline GetAccountAuthorizationDetailsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::Vector<EntityType> m_filter;
    bool m_filterHasBeenSet;
    long m_maxItems;
    bool m_maxItemsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
