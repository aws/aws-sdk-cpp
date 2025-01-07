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
    AWS_BACKUPSEARCH_API ItemFilters();
    AWS_BACKUPSEARCH_API ItemFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API ItemFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This array can contain CreationTimes, ETags, ObjectKeys, Sizes, or VersionIds
     * objects.</p>
     */
    inline const Aws::Vector<S3ItemFilter>& GetS3ItemFilters() const{ return m_s3ItemFilters; }
    inline bool S3ItemFiltersHasBeenSet() const { return m_s3ItemFiltersHasBeenSet; }
    inline void SetS3ItemFilters(const Aws::Vector<S3ItemFilter>& value) { m_s3ItemFiltersHasBeenSet = true; m_s3ItemFilters = value; }
    inline void SetS3ItemFilters(Aws::Vector<S3ItemFilter>&& value) { m_s3ItemFiltersHasBeenSet = true; m_s3ItemFilters = std::move(value); }
    inline ItemFilters& WithS3ItemFilters(const Aws::Vector<S3ItemFilter>& value) { SetS3ItemFilters(value); return *this;}
    inline ItemFilters& WithS3ItemFilters(Aws::Vector<S3ItemFilter>&& value) { SetS3ItemFilters(std::move(value)); return *this;}
    inline ItemFilters& AddS3ItemFilters(const S3ItemFilter& value) { m_s3ItemFiltersHasBeenSet = true; m_s3ItemFilters.push_back(value); return *this; }
    inline ItemFilters& AddS3ItemFilters(S3ItemFilter&& value) { m_s3ItemFiltersHasBeenSet = true; m_s3ItemFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This array can contain CreationTimes, FilePaths, LastModificationTimes, or
     * Sizes objects.</p>
     */
    inline const Aws::Vector<EBSItemFilter>& GetEBSItemFilters() const{ return m_eBSItemFilters; }
    inline bool EBSItemFiltersHasBeenSet() const { return m_eBSItemFiltersHasBeenSet; }
    inline void SetEBSItemFilters(const Aws::Vector<EBSItemFilter>& value) { m_eBSItemFiltersHasBeenSet = true; m_eBSItemFilters = value; }
    inline void SetEBSItemFilters(Aws::Vector<EBSItemFilter>&& value) { m_eBSItemFiltersHasBeenSet = true; m_eBSItemFilters = std::move(value); }
    inline ItemFilters& WithEBSItemFilters(const Aws::Vector<EBSItemFilter>& value) { SetEBSItemFilters(value); return *this;}
    inline ItemFilters& WithEBSItemFilters(Aws::Vector<EBSItemFilter>&& value) { SetEBSItemFilters(std::move(value)); return *this;}
    inline ItemFilters& AddEBSItemFilters(const EBSItemFilter& value) { m_eBSItemFiltersHasBeenSet = true; m_eBSItemFilters.push_back(value); return *this; }
    inline ItemFilters& AddEBSItemFilters(EBSItemFilter&& value) { m_eBSItemFiltersHasBeenSet = true; m_eBSItemFilters.push_back(std::move(value)); return *this; }
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
