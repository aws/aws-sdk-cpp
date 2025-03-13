/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetCatalogsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetCatalogsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCatalogs"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the parent catalog in which the catalog resides. If none is
     * provided, the Amazon Web Services Account Number is used by default.</p>
     */
    inline const Aws::String& GetParentCatalogId() const { return m_parentCatalogId; }
    inline bool ParentCatalogIdHasBeenSet() const { return m_parentCatalogIdHasBeenSet; }
    template<typename ParentCatalogIdT = Aws::String>
    void SetParentCatalogId(ParentCatalogIdT&& value) { m_parentCatalogIdHasBeenSet = true; m_parentCatalogId = std::forward<ParentCatalogIdT>(value); }
    template<typename ParentCatalogIdT = Aws::String>
    GetCatalogsRequest& WithParentCatalogId(ParentCatalogIdT&& value) { SetParentCatalogId(std::forward<ParentCatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCatalogsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of catalogs to return in one response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCatalogsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to list all catalogs across the catalog hierarchy, starting from the
     * <code>ParentCatalogId</code>. Defaults to <code>false</code> . When
     * <code>true</code>, all catalog objects in the <code>ParentCatalogID</code>
     * hierarchy are enumerated in the response.</p>
     */
    inline bool GetRecursive() const { return m_recursive; }
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }
    inline GetCatalogsRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to list the default catalog in the account and region in the
     * response. Defaults to <code>false</code>. When <code>true</code> and
     * <code>ParentCatalogId = NULL | Amazon Web Services Account ID</code>, all
     * catalogs and the default catalog are enumerated in the response.</p> <p>When the
     * <code>ParentCatalogId</code> is not equal to null, and this attribute is passed
     * as <code>false</code> or <code>true</code>, an
     * <code>InvalidInputException</code> is thrown.</p>
     */
    inline bool GetIncludeRoot() const { return m_includeRoot; }
    inline bool IncludeRootHasBeenSet() const { return m_includeRootHasBeenSet; }
    inline void SetIncludeRoot(bool value) { m_includeRootHasBeenSet = true; m_includeRoot = value; }
    inline GetCatalogsRequest& WithIncludeRoot(bool value) { SetIncludeRoot(value); return *this;}
    ///@}
  private:

    Aws::String m_parentCatalogId;
    bool m_parentCatalogIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_recursive{false};
    bool m_recursiveHasBeenSet = false;

    bool m_includeRoot{false};
    bool m_includeRootHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
