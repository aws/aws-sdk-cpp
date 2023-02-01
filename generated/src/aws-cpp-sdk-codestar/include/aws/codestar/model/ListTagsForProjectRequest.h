/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class ListTagsForProjectRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API ListTagsForProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForProject"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the project to get tags for.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the project to get tags for.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the project to get tags for.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the project to get tags for.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the project to get tags for.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the project to get tags for.</p>
     */
    inline ListTagsForProjectRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the project to get tags for.</p>
     */
    inline ListTagsForProjectRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project to get tags for.</p>
     */
    inline ListTagsForProjectRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsForProjectRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsForProjectRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsForProjectRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsForProjectRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
