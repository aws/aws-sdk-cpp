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
    AWS_KENDRA_API BatchDeleteFeaturedResultsSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteFeaturedResultsSet"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    BatchDeleteFeaturedResultsSetRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the featured results sets that you want to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeaturedResultsSetIds() const { return m_featuredResultsSetIds; }
    inline bool FeaturedResultsSetIdsHasBeenSet() const { return m_featuredResultsSetIdsHasBeenSet; }
    template<typename FeaturedResultsSetIdsT = Aws::Vector<Aws::String>>
    void SetFeaturedResultsSetIds(FeaturedResultsSetIdsT&& value) { m_featuredResultsSetIdsHasBeenSet = true; m_featuredResultsSetIds = std::forward<FeaturedResultsSetIdsT>(value); }
    template<typename FeaturedResultsSetIdsT = Aws::Vector<Aws::String>>
    BatchDeleteFeaturedResultsSetRequest& WithFeaturedResultsSetIds(FeaturedResultsSetIdsT&& value) { SetFeaturedResultsSetIds(std::forward<FeaturedResultsSetIdsT>(value)); return *this;}
    template<typename FeaturedResultsSetIdsT = Aws::String>
    BatchDeleteFeaturedResultsSetRequest& AddFeaturedResultsSetIds(FeaturedResultsSetIdsT&& value) { m_featuredResultsSetIdsHasBeenSet = true; m_featuredResultsSetIds.emplace_back(std::forward<FeaturedResultsSetIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_featuredResultsSetIds;
    bool m_featuredResultsSetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
