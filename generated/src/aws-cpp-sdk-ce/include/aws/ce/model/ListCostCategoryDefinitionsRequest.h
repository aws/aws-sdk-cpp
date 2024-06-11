/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class ListCostCategoryDefinitionsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCostCategoryDefinitions"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline const Aws::String& GetEffectiveOn() const{ return m_effectiveOn; }
    inline bool EffectiveOnHasBeenSet() const { return m_effectiveOnHasBeenSet; }
    inline void SetEffectiveOn(const Aws::String& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = value; }
    inline void SetEffectiveOn(Aws::String&& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = std::move(value); }
    inline void SetEffectiveOn(const char* value) { m_effectiveOnHasBeenSet = true; m_effectiveOn.assign(value); }
    inline ListCostCategoryDefinitionsRequest& WithEffectiveOn(const Aws::String& value) { SetEffectiveOn(value); return *this;}
    inline ListCostCategoryDefinitionsRequest& WithEffectiveOn(Aws::String&& value) { SetEffectiveOn(std::move(value)); return *this;}
    inline ListCostCategoryDefinitionsRequest& WithEffectiveOn(const char* value) { SetEffectiveOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCostCategoryDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCostCategoryDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCostCategoryDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of entries a paginated response contains. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCostCategoryDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_effectiveOn;
    bool m_effectiveOnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
