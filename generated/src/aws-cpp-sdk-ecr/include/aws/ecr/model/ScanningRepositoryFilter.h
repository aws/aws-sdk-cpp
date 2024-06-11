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
    AWS_ECR_API ScanningRepositoryFilter();
    AWS_ECR_API ScanningRepositoryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ScanningRepositoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter to use when scanning.</p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }
    inline ScanningRepositoryFilter& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}
    inline ScanningRepositoryFilter& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}
    inline ScanningRepositoryFilter& WithFilter(const char* value) { SetFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type associated with the filter.</p>
     */
    inline const ScanningRepositoryFilterType& GetFilterType() const{ return m_filterType; }
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
    inline void SetFilterType(const ScanningRepositoryFilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }
    inline void SetFilterType(ScanningRepositoryFilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }
    inline ScanningRepositoryFilter& WithFilterType(const ScanningRepositoryFilterType& value) { SetFilterType(value); return *this;}
    inline ScanningRepositoryFilter& WithFilterType(ScanningRepositoryFilterType&& value) { SetFilterType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;

    ScanningRepositoryFilterType m_filterType;
    bool m_filterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
