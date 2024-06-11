﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListRepositoriesRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API ListRepositoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositories"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation. Batch sizes are 1,000 for list repository operations. When the client
     * sends the token back to CodeCommit, another page of 1,000 records is
     * retrieved.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRepositoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRepositoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRepositoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria used to sort the results of a list repositories operation.</p>
     */
    inline const SortByEnum& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SortByEnum& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SortByEnum&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListRepositoriesRequest& WithSortBy(const SortByEnum& value) { SetSortBy(value); return *this;}
    inline ListRepositoriesRequest& WithSortBy(SortByEnum&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which to sort the results of a list repositories operation.</p>
     */
    inline const OrderEnum& GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(const OrderEnum& value) { m_orderHasBeenSet = true; m_order = value; }
    inline void SetOrder(OrderEnum&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }
    inline ListRepositoriesRequest& WithOrder(const OrderEnum& value) { SetOrder(value); return *this;}
    inline ListRepositoriesRequest& WithOrder(OrderEnum&& value) { SetOrder(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortByEnum m_sortBy;
    bool m_sortByHasBeenSet = false;

    OrderEnum m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
