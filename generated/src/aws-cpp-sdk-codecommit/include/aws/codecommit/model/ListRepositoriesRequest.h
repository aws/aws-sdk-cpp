/**
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
    AWS_CODECOMMIT_API ListRepositoriesRequest() = default;

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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositoriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria used to sort the results of a list repositories operation.</p>
     */
    inline SortByEnum GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortByEnum value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListRepositoriesRequest& WithSortBy(SortByEnum value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which to sort the results of a list repositories operation.</p>
     */
    inline OrderEnum GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(OrderEnum value) { m_orderHasBeenSet = true; m_order = value; }
    inline ListRepositoriesRequest& WithOrder(OrderEnum value) { SetOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortByEnum m_sortBy{SortByEnum::NOT_SET};
    bool m_sortByHasBeenSet = false;

    OrderEnum m_order{OrderEnum::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
