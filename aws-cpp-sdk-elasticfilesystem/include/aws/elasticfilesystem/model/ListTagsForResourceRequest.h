/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EFS
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public EFSRequest
  {
  public:
    AWS_EFS_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_EFS_API Aws::String SerializePayload() const override;

    AWS_EFS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Specifies the EFS resource you want to retrieve tags for. You can retrieve
     * tags for EFS file systems and access points using this API endpoint.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies the EFS resource you want to retrieve tags for. You can retrieve
     * tags for EFS file systems and access points using this API endpoint.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Specifies the EFS resource you want to retrieve tags for. You can retrieve
     * tags for EFS file systems and access points using this API endpoint.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies the EFS resource you want to retrieve tags for. You can retrieve
     * tags for EFS file systems and access points using this API endpoint.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Specifies the EFS resource you want to retrieve tags for. You can retrieve
     * tags for EFS file systems and access points using this API endpoint.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies the EFS resource you want to retrieve tags for. You can retrieve
     * tags for EFS file systems and access points using this API endpoint.</p>
     */
    inline ListTagsForResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies the EFS resource you want to retrieve tags for. You can retrieve
     * tags for EFS file systems and access points using this API endpoint.</p>
     */
    inline ListTagsForResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Specifies the EFS resource you want to retrieve tags for. You can retrieve
     * tags for EFS file systems and access points using this API endpoint.</p>
     */
    inline ListTagsForResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>(Optional) Specifies the maximum number of tag objects to return in the
     * response. The default value is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) Specifies the maximum number of tag objects to return in the
     * response. The default value is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) Specifies the maximum number of tag objects to return in the
     * response. The default value is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) Specifies the maximum number of tag objects to return in the
     * response. The default value is 100.</p>
     */
    inline ListTagsForResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of access point descriptions if the response payload was
     * paginated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of access point descriptions if the response payload was
     * paginated.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of access point descriptions if the response payload was
     * paginated.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of access point descriptions if the response payload was
     * paginated.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of access point descriptions if the response payload was
     * paginated.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of access point descriptions if the response payload was
     * paginated.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of access point descriptions if the response payload was
     * paginated.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) You can use <code>NextToken</code> in a subsequent request to
     * fetch the next page of access point descriptions if the response payload was
     * paginated.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
