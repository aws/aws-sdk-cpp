/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/model/S3ExportSpecification.h>
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
   * <p>This contains the export specification object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ExportSpecification">AWS
   * API Reference</a></p>
   */
  class ExportSpecification
  {
  public:
    AWS_BACKUPSEARCH_API ExportSpecification() = default;
    AWS_BACKUPSEARCH_API ExportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API ExportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This specifies the destination Amazon S3 bucket for the export job. And, if
     * included, it also specifies the destination prefix.</p>
     */
    inline const S3ExportSpecification& GetS3ExportSpecification() const { return m_s3ExportSpecification; }
    inline bool S3ExportSpecificationHasBeenSet() const { return m_s3ExportSpecificationHasBeenSet; }
    template<typename S3ExportSpecificationT = S3ExportSpecification>
    void SetS3ExportSpecification(S3ExportSpecificationT&& value) { m_s3ExportSpecificationHasBeenSet = true; m_s3ExportSpecification = std::forward<S3ExportSpecificationT>(value); }
    template<typename S3ExportSpecificationT = S3ExportSpecification>
    ExportSpecification& WithS3ExportSpecification(S3ExportSpecificationT&& value) { SetS3ExportSpecification(std::forward<S3ExportSpecificationT>(value)); return *this;}
    ///@}
  private:

    S3ExportSpecification m_s3ExportSpecification;
    bool m_s3ExportSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
