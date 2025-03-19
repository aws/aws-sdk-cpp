/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/model/S3ResultItem.h>
#include <aws/backupsearch/model/EBSResultItem.h>
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
   * <p>This is an object representing the item returned in the results of a search
   * for a specific resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ResultItem">AWS
   * API Reference</a></p>
   */
  class ResultItem
  {
  public:
    AWS_BACKUPSEARCH_API ResultItem() = default;
    AWS_BACKUPSEARCH_API ResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API ResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>These are items returned in the search results of an Amazon S3 search.</p>
     */
    inline const S3ResultItem& GetS3ResultItem() const { return m_s3ResultItem; }
    inline bool S3ResultItemHasBeenSet() const { return m_s3ResultItemHasBeenSet; }
    template<typename S3ResultItemT = S3ResultItem>
    void SetS3ResultItem(S3ResultItemT&& value) { m_s3ResultItemHasBeenSet = true; m_s3ResultItem = std::forward<S3ResultItemT>(value); }
    template<typename S3ResultItemT = S3ResultItem>
    ResultItem& WithS3ResultItem(S3ResultItemT&& value) { SetS3ResultItem(std::forward<S3ResultItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are items returned in the search results of an Amazon EBS search.</p>
     */
    inline const EBSResultItem& GetEBSResultItem() const { return m_eBSResultItem; }
    inline bool EBSResultItemHasBeenSet() const { return m_eBSResultItemHasBeenSet; }
    template<typename EBSResultItemT = EBSResultItem>
    void SetEBSResultItem(EBSResultItemT&& value) { m_eBSResultItemHasBeenSet = true; m_eBSResultItem = std::forward<EBSResultItemT>(value); }
    template<typename EBSResultItemT = EBSResultItem>
    ResultItem& WithEBSResultItem(EBSResultItemT&& value) { SetEBSResultItem(std::forward<EBSResultItemT>(value)); return *this;}
    ///@}
  private:

    S3ResultItem m_s3ResultItem;
    bool m_s3ResultItemHasBeenSet = false;

    EBSResultItem m_eBSResultItem;
    bool m_eBSResultItemHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
