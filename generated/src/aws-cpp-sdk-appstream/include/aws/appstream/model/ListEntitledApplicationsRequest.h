/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class ListEntitledApplicationsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API ListEntitledApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEntitledApplications"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline ListEntitledApplicationsRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline ListEntitledApplicationsRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline ListEntitledApplicationsRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The name of the entitlement.</p>
     */
    inline const Aws::String& GetEntitlementName() const{ return m_entitlementName; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline bool EntitlementNameHasBeenSet() const { return m_entitlementNameHasBeenSet; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetEntitlementName(const Aws::String& value) { m_entitlementNameHasBeenSet = true; m_entitlementName = value; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetEntitlementName(Aws::String&& value) { m_entitlementNameHasBeenSet = true; m_entitlementName = std::move(value); }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetEntitlementName(const char* value) { m_entitlementNameHasBeenSet = true; m_entitlementName.assign(value); }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline ListEntitledApplicationsRequest& WithEntitlementName(const Aws::String& value) { SetEntitlementName(value); return *this;}

    /**
     * <p>The name of the entitlement.</p>
     */
    inline ListEntitledApplicationsRequest& WithEntitlementName(Aws::String&& value) { SetEntitlementName(std::move(value)); return *this;}

    /**
     * <p>The name of the entitlement.</p>
     */
    inline ListEntitledApplicationsRequest& WithEntitlementName(const char* value) { SetEntitlementName(value); return *this;}


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListEntitledApplicationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListEntitledApplicationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListEntitledApplicationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline ListEntitledApplicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_entitlementName;
    bool m_entitlementNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
