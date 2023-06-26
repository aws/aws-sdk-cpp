/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/LFTag.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class SearchTablesByLFTagsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API SearchTablesByLFTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTablesByLFTags"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline SearchTablesByLFTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline SearchTablesByLFTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline SearchTablesByLFTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline SearchTablesByLFTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline SearchTablesByLFTagsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline SearchTablesByLFTagsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline SearchTablesByLFTagsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A list of conditions (<code>LFTag</code> structures) to search for in table
     * resources.</p>
     */
    inline const Aws::Vector<LFTag>& GetExpression() const{ return m_expression; }

    /**
     * <p>A list of conditions (<code>LFTag</code> structures) to search for in table
     * resources.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>A list of conditions (<code>LFTag</code> structures) to search for in table
     * resources.</p>
     */
    inline void SetExpression(const Aws::Vector<LFTag>& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A list of conditions (<code>LFTag</code> structures) to search for in table
     * resources.</p>
     */
    inline void SetExpression(Aws::Vector<LFTag>&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A list of conditions (<code>LFTag</code> structures) to search for in table
     * resources.</p>
     */
    inline SearchTablesByLFTagsRequest& WithExpression(const Aws::Vector<LFTag>& value) { SetExpression(value); return *this;}

    /**
     * <p>A list of conditions (<code>LFTag</code> structures) to search for in table
     * resources.</p>
     */
    inline SearchTablesByLFTagsRequest& WithExpression(Aws::Vector<LFTag>&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A list of conditions (<code>LFTag</code> structures) to search for in table
     * resources.</p>
     */
    inline SearchTablesByLFTagsRequest& AddExpression(const LFTag& value) { m_expressionHasBeenSet = true; m_expression.push_back(value); return *this; }

    /**
     * <p>A list of conditions (<code>LFTag</code> structures) to search for in table
     * resources.</p>
     */
    inline SearchTablesByLFTagsRequest& AddExpression(LFTag&& value) { m_expressionHasBeenSet = true; m_expression.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::Vector<LFTag> m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
