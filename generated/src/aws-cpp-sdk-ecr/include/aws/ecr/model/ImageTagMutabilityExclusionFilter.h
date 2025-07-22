/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageTagMutabilityExclusionFilterType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Overrides the default image tag mutability setting of the repository for
   * image tags that match the specified filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageTagMutabilityExclusionFilter">AWS
   * API Reference</a></p>
   */
  class ImageTagMutabilityExclusionFilter
  {
  public:
    AWS_ECR_API ImageTagMutabilityExclusionFilter() = default;
    AWS_ECR_API ImageTagMutabilityExclusionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageTagMutabilityExclusionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of filter to use for excluding image tags from the
     * repository's mutability setting.</p>
     */
    inline ImageTagMutabilityExclusionFilterType GetFilterType() const { return m_filterType; }
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
    inline void SetFilterType(ImageTagMutabilityExclusionFilterType value) { m_filterTypeHasBeenSet = true; m_filterType = value; }
    inline ImageTagMutabilityExclusionFilter& WithFilterType(ImageTagMutabilityExclusionFilterType value) { SetFilterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to use when filtering image tags. Must be either a regular
     * expression pattern or a tag prefix value based on the specified filter type.</p>
     */
    inline const Aws::String& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::String>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::String>
    ImageTagMutabilityExclusionFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    ImageTagMutabilityExclusionFilterType m_filterType{ImageTagMutabilityExclusionFilterType::NOT_SET};
    bool m_filterTypeHasBeenSet = false;

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
