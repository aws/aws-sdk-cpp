/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API DescribeWorkspaceBundlesRequest : public WorkSpacesRequest
  {
  public:
    DescribeWorkspaceBundlesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaceBundles"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBundleIds() const{ return m_bundleIds; }

    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline bool BundleIdsHasBeenSet() const { return m_bundleIdsHasBeenSet; }

    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline void SetBundleIds(const Aws::Vector<Aws::String>& value) { m_bundleIdsHasBeenSet = true; m_bundleIds = value; }

    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline void SetBundleIds(Aws::Vector<Aws::String>&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds = std::move(value); }

    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithBundleIds(const Aws::Vector<Aws::String>& value) { SetBundleIds(value); return *this;}

    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithBundleIds(Aws::Vector<Aws::String>&& value) { SetBundleIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& AddBundleIds(const Aws::String& value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& AddBundleIds(Aws::String&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline DescribeWorkspaceBundlesRequest& AddBundleIds(const char* value) { m_bundleIdsHasBeenSet = true; m_bundleIds.push_back(value); return *this; }


    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>Specify <code>AMAZON</code> to describe the bundles provided by
     * AWS or null to describe the bundles that belong to your account.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>Specify <code>AMAZON</code> to describe the bundles provided by
     * AWS or null to describe the bundles that belong to your account.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>Specify <code>AMAZON</code> to describe the bundles provided by
     * AWS or null to describe the bundles that belong to your account.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>Specify <code>AMAZON</code> to describe the bundles provided by
     * AWS or null to describe the bundles that belong to your account.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>Specify <code>AMAZON</code> to describe the bundles provided by
     * AWS or null to describe the bundles that belong to your account.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>Specify <code>AMAZON</code> to describe the bundles provided by
     * AWS or null to describe the bundles that belong to your account.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>Specify <code>AMAZON</code> to describe the bundles provided by
     * AWS or null to describe the bundles that belong to your account.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>Specify <code>AMAZON</code> to describe the bundles provided by
     * AWS or null to describe the bundles that belong to your account.</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline DescribeWorkspaceBundlesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
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
