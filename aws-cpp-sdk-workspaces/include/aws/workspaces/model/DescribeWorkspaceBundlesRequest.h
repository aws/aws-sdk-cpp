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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DescribeWorkspaceBundles</a> operation.</p>
   */
  class AWS_WORKSPACES_API DescribeWorkspaceBundlesRequest : public WorkSpacesRequest
  {
  public:
    DescribeWorkspaceBundlesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of strings that contains the identifiers of the bundles to retrieve.
     * This parameter cannot be combined with any other filter parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBundleIds() const{ return m_bundleIds; }

    /**
     * <p>An array of strings that contains the identifiers of the bundles to retrieve.
     * This parameter cannot be combined with any other filter parameter.</p>
     */
    inline void SetBundleIds(const Aws::Vector<Aws::String>& value) { m_bundleIdsHasBeenSet = true; m_bundleIds = value; }

    /**
     * <p>An array of strings that contains the identifiers of the bundles to retrieve.
     * This parameter cannot be combined with any other filter parameter.</p>
     */
    inline void SetBundleIds(Aws::Vector<Aws::String>&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds = value; }

    /**
     * <p>An array of strings that contains the identifiers of the bundles to retrieve.
     * This parameter cannot be combined with any other filter parameter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithBundleIds(const Aws::Vector<Aws::String>& value) { SetBundleIds(value); return *this;}

    /**
     * <p>An array of strings that contains the identifiers of the bundles to retrieve.
     * This parameter cannot be combined with any other filter parameter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithBundleIds(Aws::Vector<Aws::String>&& value) { SetBundleIds(value); return *this;}

    /**
     * <p>An array of strings that contains the identifiers of the bundles to retrieve.
     * This parameter cannot be combined with any other filter parameter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& AddBundleIds(const Aws::String& value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the identifiers of the bundles to retrieve.
     * This parameter cannot be combined with any other filter parameter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& AddBundleIds(Aws::String&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the identifiers of the bundles to retrieve.
     * This parameter cannot be combined with any other filter parameter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& AddBundleIds(const char* value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(value); return *this; }

    /**
     * <p>The owner of the bundles to retrieve. This parameter cannot be combined with
     * any other filter parameter.</p> <p>This contains one of the following
     * values:</p> <ul> <li> <p>null- Retrieves the bundles that belong to the account
     * making the call.</p> </li> <li> <p> <code>AMAZON</code>- Retrieves the bundles
     * that are provided by AWS.</p> </li> </ul>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the bundles to retrieve. This parameter cannot be combined with
     * any other filter parameter.</p> <p>This contains one of the following
     * values:</p> <ul> <li> <p>null- Retrieves the bundles that belong to the account
     * making the call.</p> </li> <li> <p> <code>AMAZON</code>- Retrieves the bundles
     * that are provided by AWS.</p> </li> </ul>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the bundles to retrieve. This parameter cannot be combined with
     * any other filter parameter.</p> <p>This contains one of the following
     * values:</p> <ul> <li> <p>null- Retrieves the bundles that belong to the account
     * making the call.</p> </li> <li> <p> <code>AMAZON</code>- Retrieves the bundles
     * that are provided by AWS.</p> </li> </ul>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the bundles to retrieve. This parameter cannot be combined with
     * any other filter parameter.</p> <p>This contains one of the following
     * values:</p> <ul> <li> <p>null- Retrieves the bundles that belong to the account
     * making the call.</p> </li> <li> <p> <code>AMAZON</code>- Retrieves the bundles
     * that are provided by AWS.</p> </li> </ul>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the bundles to retrieve. This parameter cannot be combined with
     * any other filter parameter.</p> <p>This contains one of the following
     * values:</p> <ul> <li> <p>null- Retrieves the bundles that belong to the account
     * making the call.</p> </li> <li> <p> <code>AMAZON</code>- Retrieves the bundles
     * that are provided by AWS.</p> </li> </ul>
     */
    inline DescribeWorkspaceBundlesRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the bundles to retrieve. This parameter cannot be combined with
     * any other filter parameter.</p> <p>This contains one of the following
     * values:</p> <ul> <li> <p>null- Retrieves the bundles that belong to the account
     * making the call.</p> </li> <li> <p> <code>AMAZON</code>- Retrieves the bundles
     * that are provided by AWS.</p> </li> </ul>
     */
    inline DescribeWorkspaceBundlesRequest& WithOwner(Aws::String&& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the bundles to retrieve. This parameter cannot be combined with
     * any other filter parameter.</p> <p>This contains one of the following
     * values:</p> <ul> <li> <p>null- Retrieves the bundles that belong to the account
     * making the call.</p> </li> <li> <p> <code>AMAZON</code>- Retrieves the bundles
     * that are provided by AWS.</p> </li> </ul>
     */
    inline DescribeWorkspaceBundlesRequest& WithOwner(const char* value) { SetOwner(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_bundleIds;
    bool m_bundleIdsHasBeenSet;
    Aws::String m_owner;
    bool m_ownerHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
