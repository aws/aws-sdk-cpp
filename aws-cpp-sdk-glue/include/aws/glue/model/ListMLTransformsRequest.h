/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TransformFilterCriteria.h>
#include <aws/glue/model/TransformSortCriteria.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ListMLTransformsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ListMLTransformsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMLTransforms"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline ListMLTransformsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline ListMLTransformsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation request.</p>
     */
    inline ListMLTransformsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline ListMLTransformsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A <code>TransformFilterCriteria</code> used to filter the machine learning
     * transforms.</p>
     */
    inline const TransformFilterCriteria& GetFilter() const{ return m_filter; }

    /**
     * <p>A <code>TransformFilterCriteria</code> used to filter the machine learning
     * transforms.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A <code>TransformFilterCriteria</code> used to filter the machine learning
     * transforms.</p>
     */
    inline void SetFilter(const TransformFilterCriteria& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A <code>TransformFilterCriteria</code> used to filter the machine learning
     * transforms.</p>
     */
    inline void SetFilter(TransformFilterCriteria&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A <code>TransformFilterCriteria</code> used to filter the machine learning
     * transforms.</p>
     */
    inline ListMLTransformsRequest& WithFilter(const TransformFilterCriteria& value) { SetFilter(value); return *this;}

    /**
     * <p>A <code>TransformFilterCriteria</code> used to filter the machine learning
     * transforms.</p>
     */
    inline ListMLTransformsRequest& WithFilter(TransformFilterCriteria&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>A <code>TransformSortCriteria</code> used to sort the machine learning
     * transforms.</p>
     */
    inline const TransformSortCriteria& GetSort() const{ return m_sort; }

    /**
     * <p>A <code>TransformSortCriteria</code> used to sort the machine learning
     * transforms.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>A <code>TransformSortCriteria</code> used to sort the machine learning
     * transforms.</p>
     */
    inline void SetSort(const TransformSortCriteria& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>A <code>TransformSortCriteria</code> used to sort the machine learning
     * transforms.</p>
     */
    inline void SetSort(TransformSortCriteria&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>A <code>TransformSortCriteria</code> used to sort the machine learning
     * transforms.</p>
     */
    inline ListMLTransformsRequest& WithSort(const TransformSortCriteria& value) { SetSort(value); return *this;}

    /**
     * <p>A <code>TransformSortCriteria</code> used to sort the machine learning
     * transforms.</p>
     */
    inline ListMLTransformsRequest& WithSort(TransformSortCriteria&& value) { SetSort(std::move(value)); return *this;}


    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies to return only these tagged resources.</p>
     */
    inline ListMLTransformsRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    TransformFilterCriteria m_filter;
    bool m_filterHasBeenSet = false;

    TransformSortCriteria m_sort;
    bool m_sortHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
