/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ConflictingItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>An error message with a list of conflicting queries used across different
   * sets of featured results. This occurred with the request for a new featured
   * results set. Check that the queries you specified for featured results are
   * unique per featured results set for each index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FeaturedResultsConflictException">AWS
   * API Reference</a></p>
   */
  class FeaturedResultsConflictException
  {
  public:
    AWS_KENDRA_API FeaturedResultsConflictException() = default;
    AWS_KENDRA_API FeaturedResultsConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedResultsConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FeaturedResultsConflictException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline const Aws::Vector<ConflictingItem>& GetConflictingItems() const { return m_conflictingItems; }
    inline bool ConflictingItemsHasBeenSet() const { return m_conflictingItemsHasBeenSet; }
    template<typename ConflictingItemsT = Aws::Vector<ConflictingItem>>
    void SetConflictingItems(ConflictingItemsT&& value) { m_conflictingItemsHasBeenSet = true; m_conflictingItems = std::forward<ConflictingItemsT>(value); }
    template<typename ConflictingItemsT = Aws::Vector<ConflictingItem>>
    FeaturedResultsConflictException& WithConflictingItems(ConflictingItemsT&& value) { SetConflictingItems(std::forward<ConflictingItemsT>(value)); return *this;}
    template<typename ConflictingItemsT = ConflictingItem>
    FeaturedResultsConflictException& AddConflictingItems(ConflictingItemsT&& value) { m_conflictingItemsHasBeenSet = true; m_conflictingItems.emplace_back(std::forward<ConflictingItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<ConflictingItem> m_conflictingItems;
    bool m_conflictingItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
