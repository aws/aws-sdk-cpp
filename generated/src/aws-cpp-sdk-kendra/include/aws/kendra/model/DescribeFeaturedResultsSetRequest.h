/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class DescribeFeaturedResultsSetRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API DescribeFeaturedResultsSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFeaturedResultsSet"; }

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
    DescribeFeaturedResultsSetRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const { return m_featuredResultsSetId; }
    inline bool FeaturedResultsSetIdHasBeenSet() const { return m_featuredResultsSetIdHasBeenSet; }
    template<typename FeaturedResultsSetIdT = Aws::String>
    void SetFeaturedResultsSetId(FeaturedResultsSetIdT&& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = std::forward<FeaturedResultsSetIdT>(value); }
    template<typename FeaturedResultsSetIdT = Aws::String>
    DescribeFeaturedResultsSetRequest& WithFeaturedResultsSetId(FeaturedResultsSetIdT&& value) { SetFeaturedResultsSetId(std::forward<FeaturedResultsSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_featuredResultsSetId;
    bool m_featuredResultsSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
