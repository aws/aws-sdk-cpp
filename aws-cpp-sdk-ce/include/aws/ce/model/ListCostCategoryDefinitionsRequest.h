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
  class AWS_COSTEXPLORER_API ListCostCategoryDefinitionsRequest : public CostExplorerRequest
  {
  public:
    ListCostCategoryDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCostCategoryDefinitions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The date when the Cost Category was effective. </p>
     */
    inline const Aws::String& GetEffectiveOn() const{ return m_effectiveOn; }

    /**
     * <p> The date when the Cost Category was effective. </p>
     */
    inline bool EffectiveOnHasBeenSet() const { return m_effectiveOnHasBeenSet; }

    /**
     * <p> The date when the Cost Category was effective. </p>
     */
    inline void SetEffectiveOn(const Aws::String& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = value; }

    /**
     * <p> The date when the Cost Category was effective. </p>
     */
    inline void SetEffectiveOn(Aws::String&& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = std::move(value); }

    /**
     * <p> The date when the Cost Category was effective. </p>
     */
    inline void SetEffectiveOn(const char* value) { m_effectiveOnHasBeenSet = true; m_effectiveOn.assign(value); }

    /**
     * <p> The date when the Cost Category was effective. </p>
     */
    inline ListCostCategoryDefinitionsRequest& WithEffectiveOn(const Aws::String& value) { SetEffectiveOn(value); return *this;}

    /**
     * <p> The date when the Cost Category was effective. </p>
     */
    inline ListCostCategoryDefinitionsRequest& WithEffectiveOn(Aws::String&& value) { SetEffectiveOn(std::move(value)); return *this;}

    /**
     * <p> The date when the Cost Category was effective. </p>
     */
    inline ListCostCategoryDefinitionsRequest& WithEffectiveOn(const char* value) { SetEffectiveOn(value); return *this;}


    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p> <p>You can use this information to retrieve the full
     * Cost Category information using <code>DescribeCostCategory</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p> <p>You can use this information to retrieve the full
     * Cost Category information using <code>DescribeCostCategory</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p> <p>You can use this information to retrieve the full
     * Cost Category information using <code>DescribeCostCategory</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p> <p>You can use this information to retrieve the full
     * Cost Category information using <code>DescribeCostCategory</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p> <p>You can use this information to retrieve the full
     * Cost Category information using <code>DescribeCostCategory</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p> <p>You can use this information to retrieve the full
     * Cost Category information using <code>DescribeCostCategory</code>.</p>
     */
    inline ListCostCategoryDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p> <p>You can use this information to retrieve the full
     * Cost Category information using <code>DescribeCostCategory</code>.</p>
     */
    inline ListCostCategoryDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p> <p>You can use this information to retrieve the full
     * Cost Category information using <code>DescribeCostCategory</code>.</p>
     */
    inline ListCostCategoryDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_effectiveOn;
    bool m_effectiveOnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
