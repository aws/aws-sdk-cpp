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
    AWS_KENDRA_API FeaturedResultsConflictException();
    AWS_KENDRA_API FeaturedResultsConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedResultsConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline FeaturedResultsConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline FeaturedResultsConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An explanation for the conflicting queries.</p>
     */
    inline FeaturedResultsConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline const Aws::Vector<ConflictingItem>& GetConflictingItems() const{ return m_conflictingItems; }

    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline bool ConflictingItemsHasBeenSet() const { return m_conflictingItemsHasBeenSet; }

    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline void SetConflictingItems(const Aws::Vector<ConflictingItem>& value) { m_conflictingItemsHasBeenSet = true; m_conflictingItems = value; }

    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline void SetConflictingItems(Aws::Vector<ConflictingItem>&& value) { m_conflictingItemsHasBeenSet = true; m_conflictingItems = std::move(value); }

    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline FeaturedResultsConflictException& WithConflictingItems(const Aws::Vector<ConflictingItem>& value) { SetConflictingItems(value); return *this;}

    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline FeaturedResultsConflictException& WithConflictingItems(Aws::Vector<ConflictingItem>&& value) { SetConflictingItems(std::move(value)); return *this;}

    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline FeaturedResultsConflictException& AddConflictingItems(const ConflictingItem& value) { m_conflictingItemsHasBeenSet = true; m_conflictingItems.push_back(value); return *this; }

    /**
     * <p>A list of the conflicting queries, including the query text, the name for the
     * featured results set, and the identifier of the featured results set.</p>
     */
    inline FeaturedResultsConflictException& AddConflictingItems(ConflictingItem&& value) { m_conflictingItemsHasBeenSet = true; m_conflictingItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<ConflictingItem> m_conflictingItems;
    bool m_conflictingItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
