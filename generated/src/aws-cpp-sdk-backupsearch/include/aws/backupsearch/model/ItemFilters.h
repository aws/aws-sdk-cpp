/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backupsearch/model/S3ItemFilter.h>
#include <aws/backupsearch/model/EBSItemFilter.h>
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
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>Item Filters represent all input item properties specified when the search
   * was created.</p> <p>Contains either EBSItemFilters or
   * S3ItemFilters</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ItemFilters">AWS
   * API Reference</a></p>
   */
  class ItemFilters
  {
  public:
    AWS_BACKUPSEARCH_API ItemFilters() = default;
    AWS_BACKUPSEARCH_API ItemFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API ItemFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This array can contain CreationTimes, ETags, ObjectKeys, Sizes, or VersionIds
     * objects.</p>
     */
    inline const Aws::Vector<S3ItemFilter>& GetS3ItemFilters() const { return m_s3ItemFilters; }
    inline bool S3ItemFiltersHasBeenSet() const { return m_s3ItemFiltersHasBeenSet; }
    template<typename S3ItemFiltersT = Aws::Vector<S3ItemFilter>>
    void SetS3ItemFilters(S3ItemFiltersT&& value) { m_s3ItemFiltersHasBeenSet = true; m_s3ItemFilters = std::forward<S3ItemFiltersT>(value); }
    template<typename S3ItemFiltersT = Aws::Vector<S3ItemFilter>>
    ItemFilters& WithS3ItemFilters(S3ItemFiltersT&& value) { SetS3ItemFilters(std::forward<S3ItemFiltersT>(value)); return *this;}
    template<typename S3ItemFiltersT = S3ItemFilter>
    ItemFilters& AddS3ItemFilters(S3ItemFiltersT&& value) { m_s3ItemFiltersHasBeenSet = true; m_s3ItemFilters.emplace_back(std::forward<S3ItemFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This array can contain CreationTimes, FilePaths, LastModificationTimes, or
     * Sizes objects.</p>
     */
    inline const Aws::Vector<EBSItemFilter>& GetEBSItemFilters() const { return m_eBSItemFilters; }
    inline bool EBSItemFiltersHasBeenSet() const { return m_eBSItemFiltersHasBeenSet; }
    template<typename EBSItemFiltersT = Aws::Vector<EBSItemFilter>>
    void SetEBSItemFilters(EBSItemFiltersT&& value) { m_eBSItemFiltersHasBeenSet = true; m_eBSItemFilters = std::forward<EBSItemFiltersT>(value); }
    template<typename EBSItemFiltersT = Aws::Vector<EBSItemFilter>>
    ItemFilters& WithEBSItemFilters(EBSItemFiltersT&& value) { SetEBSItemFilters(std::forward<EBSItemFiltersT>(value)); return *this;}
    template<typename EBSItemFiltersT = EBSItemFilter>
    ItemFilters& AddEBSItemFilters(EBSItemFiltersT&& value) { m_eBSItemFiltersHasBeenSet = true; m_eBSItemFilters.emplace_back(std::forward<EBSItemFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<S3ItemFilter> m_s3ItemFilters;
    bool m_s3ItemFiltersHasBeenSet = false;

    Aws::Vector<EBSItemFilter> m_eBSItemFilters;
    bool m_eBSItemFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
