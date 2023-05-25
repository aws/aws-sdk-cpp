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
    AWS_KENDRA_API DescribeFeaturedResultsSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFeaturedResultsSet"; }

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
    inline DescribeFeaturedResultsSetRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline DescribeFeaturedResultsSetRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline DescribeFeaturedResultsSetRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const{ return m_featuredResultsSetId; }

    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline bool FeaturedResultsSetIdHasBeenSet() const { return m_featuredResultsSetIdHasBeenSet; }

    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline void SetFeaturedResultsSetId(const Aws::String& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = value; }

    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline void SetFeaturedResultsSetId(Aws::String&& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = std::move(value); }

    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline void SetFeaturedResultsSetId(const char* value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId.assign(value); }

    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline DescribeFeaturedResultsSetRequest& WithFeaturedResultsSetId(const Aws::String& value) { SetFeaturedResultsSetId(value); return *this;}

    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline DescribeFeaturedResultsSetRequest& WithFeaturedResultsSetId(Aws::String&& value) { SetFeaturedResultsSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the set of featured results that you want to get
     * information on.</p>
     */
    inline DescribeFeaturedResultsSetRequest& WithFeaturedResultsSetId(const char* value) { SetFeaturedResultsSetId(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_featuredResultsSetId;
    bool m_featuredResultsSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
