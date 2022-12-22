/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class ListAppsListsRequest : public FMSRequest
  {
  public:
    AWS_FMS_API ListAppsListsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAppsLists"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies whether the lists to retrieve are default lists owned by Firewall
     * Manager.</p>
     */
    inline bool GetDefaultLists() const{ return m_defaultLists; }

    /**
     * <p>Specifies whether the lists to retrieve are default lists owned by Firewall
     * Manager.</p>
     */
    inline bool DefaultListsHasBeenSet() const { return m_defaultListsHasBeenSet; }

    /**
     * <p>Specifies whether the lists to retrieve are default lists owned by Firewall
     * Manager.</p>
     */
    inline void SetDefaultLists(bool value) { m_defaultListsHasBeenSet = true; m_defaultLists = value; }

    /**
     * <p>Specifies whether the lists to retrieve are default lists owned by Firewall
     * Manager.</p>
     */
    inline ListAppsListsRequest& WithDefaultLists(bool value) { SetDefaultLists(value); return *this;}


    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. For all but the first request, you provide the token returned by
     * the prior request in the request parameters, to retrieve the next batch of
     * objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. For all but the first request, you provide the token returned by
     * the prior request in the request parameters, to retrieve the next batch of
     * objects.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. For all but the first request, you provide the token returned by
     * the prior request in the request parameters, to retrieve the next batch of
     * objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. For all but the first request, you provide the token returned by
     * the prior request in the request parameters, to retrieve the next batch of
     * objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. For all but the first request, you provide the token returned by
     * the prior request in the request parameters, to retrieve the next batch of
     * objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. For all but the first request, you provide the token returned by
     * the prior request in the request parameters, to retrieve the next batch of
     * objects.</p>
     */
    inline ListAppsListsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. For all but the first request, you provide the token returned by
     * the prior request in the request parameters, to retrieve the next batch of
     * objects.</p>
     */
    inline ListAppsListsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. For all but the first request, you provide the token returned by
     * the prior request in the request parameters, to retrieve the next batch of
     * objects.</p>
     */
    inline ListAppsListsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of objects that you want Firewall Manager to return for
     * this request. If more objects are available, in the response, Firewall Manager
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p> <p>If you don't specify this, Firewall
     * Manager returns all available objects.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects that you want Firewall Manager to return for
     * this request. If more objects are available, in the response, Firewall Manager
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p> <p>If you don't specify this, Firewall
     * Manager returns all available objects.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects that you want Firewall Manager to return for
     * this request. If more objects are available, in the response, Firewall Manager
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p> <p>If you don't specify this, Firewall
     * Manager returns all available objects.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects that you want Firewall Manager to return for
     * this request. If more objects are available, in the response, Firewall Manager
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p> <p>If you don't specify this, Firewall
     * Manager returns all available objects.</p>
     */
    inline ListAppsListsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    bool m_defaultLists;
    bool m_defaultListsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
