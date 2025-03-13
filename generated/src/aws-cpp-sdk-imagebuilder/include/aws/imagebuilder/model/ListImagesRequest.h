/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/model/Ownership.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Filter.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class ListImagesRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListImagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImages"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The owner defines which images you want to list. By default, this request
     * will only show images owned by your account. You can use this field to specify
     * if you want to view images owned by yourself, by Amazon, or those images that
     * have been shared with you by other customers.</p>
     */
    inline Ownership GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(Ownership value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline ListImagesRequest& WithOwner(Ownership value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>osVersion</code> </p> </li> <li> <p>
     * <code>platform</code> </p> </li> <li> <p> <code>type</code> </p> </li> <li> <p>
     * <code>version</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListImagesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListImagesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Requests a list of images with a specific recipe name.</p>
     */
    inline bool GetByName() const { return m_byName; }
    inline bool ByNameHasBeenSet() const { return m_byNameHasBeenSet; }
    inline void SetByName(bool value) { m_byNameHasBeenSet = true; m_byName = value; }
    inline ListImagesRequest& WithByName(bool value) { SetByName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImagesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Includes deprecated images in the response list.</p>
     */
    inline bool GetIncludeDeprecated() const { return m_includeDeprecated; }
    inline bool IncludeDeprecatedHasBeenSet() const { return m_includeDeprecatedHasBeenSet; }
    inline void SetIncludeDeprecated(bool value) { m_includeDeprecatedHasBeenSet = true; m_includeDeprecated = value; }
    inline ListImagesRequest& WithIncludeDeprecated(bool value) { SetIncludeDeprecated(value); return *this;}
    ///@}
  private:

    Ownership m_owner{Ownership::NOT_SET};
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_byName{false};
    bool m_byNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_includeDeprecated{false};
    bool m_includeDeprecatedHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
