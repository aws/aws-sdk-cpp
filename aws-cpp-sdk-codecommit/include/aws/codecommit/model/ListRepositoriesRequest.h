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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/SortByEnum.h>
#include <aws/codecommit/model/OrderEnum.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of a list repositories operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositoriesInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API ListRepositoriesRequest : public CodeCommitRequest
  {
  public:
    ListRepositoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositories"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline ListRepositoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline ListRepositoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to AWS CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline ListRepositoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The criteria used to sort the results of a list repositories operation.</p>
     */
    inline const SortByEnum& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The criteria used to sort the results of a list repositories operation.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The criteria used to sort the results of a list repositories operation.</p>
     */
    inline void SetSortBy(const SortByEnum& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The criteria used to sort the results of a list repositories operation.</p>
     */
    inline void SetSortBy(SortByEnum&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The criteria used to sort the results of a list repositories operation.</p>
     */
    inline ListRepositoriesRequest& WithSortBy(const SortByEnum& value) { SetSortBy(value); return *this;}

    /**
     * <p>The criteria used to sort the results of a list repositories operation.</p>
     */
    inline ListRepositoriesRequest& WithSortBy(SortByEnum&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The order in which to sort the results of a list repositories operation.</p>
     */
    inline const OrderEnum& GetOrder() const{ return m_order; }

    /**
     * <p>The order in which to sort the results of a list repositories operation.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order in which to sort the results of a list repositories operation.</p>
     */
    inline void SetOrder(const OrderEnum& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order in which to sort the results of a list repositories operation.</p>
     */
    inline void SetOrder(OrderEnum&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order in which to sort the results of a list repositories operation.</p>
     */
    inline ListRepositoriesRequest& WithOrder(const OrderEnum& value) { SetOrder(value); return *this;}

    /**
     * <p>The order in which to sort the results of a list repositories operation.</p>
     */
    inline ListRepositoriesRequest& WithOrder(OrderEnum&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    SortByEnum m_sortBy;
    bool m_sortByHasBeenSet;

    OrderEnum m_order;
    bool m_orderHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
