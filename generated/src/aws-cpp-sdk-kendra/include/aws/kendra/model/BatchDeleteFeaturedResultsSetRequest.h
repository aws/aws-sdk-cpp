/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class BatchDeleteFeaturedResultsSetRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API BatchDeleteFeaturedResultsSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteFeaturedResultsSet"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline BatchDeleteFeaturedResultsSetRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline BatchDeleteFeaturedResultsSetRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline BatchDeleteFeaturedResultsSetRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeaturedResultsSetIds() const{ return m_featuredResultsSetIds; }

    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline bool FeaturedResultsSetIdsHasBeenSet() const { return m_featuredResultsSetIdsHasBeenSet; }

    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline void SetFeaturedResultsSetIds(const Aws::Vector<Aws::String>& value) { m_featuredResultsSetIdsHasBeenSet = true; m_featuredResultsSetIds = value; }

    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline void SetFeaturedResultsSetIds(Aws::Vector<Aws::String>&& value) { m_featuredResultsSetIdsHasBeenSet = true; m_featuredResultsSetIds = std::move(value); }

    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline BatchDeleteFeaturedResultsSetRequest& WithFeaturedResultsSetIds(const Aws::Vector<Aws::String>& value) { SetFeaturedResultsSetIds(value); return *this;}

    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline BatchDeleteFeaturedResultsSetRequest& WithFeaturedResultsSetIds(Aws::Vector<Aws::String>&& value) { SetFeaturedResultsSetIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline BatchDeleteFeaturedResultsSetRequest& AddFeaturedResultsSetIds(const Aws::String& value) { m_featuredResultsSetIdsHasBeenSet = true; m_featuredResultsSetIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline BatchDeleteFeaturedResultsSetRequest& AddFeaturedResultsSetIds(Aws::String&& value) { m_featuredResultsSetIdsHasBeenSet = true; m_featuredResultsSetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline BatchDeleteFeaturedResultsSetRequest& AddFeaturedResultsSetIds(const char* value) { m_featuredResultsSetIdsHasBeenSet = true; m_featuredResultsSetIds.push_back(value); return *this; }

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_featuredResultsSetIds;
    bool m_featuredResultsSetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
