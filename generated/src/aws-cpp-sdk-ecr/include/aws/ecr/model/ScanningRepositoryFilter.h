/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ScanningRepositoryFilterType.h>
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
   * <p>The details of a scanning repository filter. For more information on how to
   * use filters, see <a
   * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/image-scanning.html#image-scanning-filters">Using
   * filters</a> in the <i>Amazon Elastic Container Registry User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ScanningRepositoryFilter">AWS
   * API Reference</a></p>
   */
  class ScanningRepositoryFilter
  {
  public:
    AWS_ECR_API ScanningRepositoryFilter() = default;
    AWS_ECR_API ScanningRepositoryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ScanningRepositoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter to use when scanning.</p>
     */
    inline const Aws::String& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::String>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::String>
    ScanningRepositoryFilter& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type associated with the filter.</p>
     */
    inline ScanningRepositoryFilterType GetFilterType() const { return m_filterType; }
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
    inline void SetFilterType(ScanningRepositoryFilterType value) { m_filterTypeHasBeenSet = true; m_filterType = value; }
    inline ScanningRepositoryFilter& WithFilterType(ScanningRepositoryFilterType value) { SetFilterType(value); return *this;}
    ///@}
  private:

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;

    ScanningRepositoryFilterType m_filterType{ScanningRepositoryFilterType::NOT_SET};
    bool m_filterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
