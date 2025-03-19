/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains information from your report job about your report
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ReportDestination">AWS
   * API Reference</a></p>
   */
  class ReportDestination
  {
  public:
    AWS_BACKUP_API ReportDestination() = default;
    AWS_BACKUP_API ReportDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ReportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    ReportDestination& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetS3Keys() const { return m_s3Keys; }
    inline bool S3KeysHasBeenSet() const { return m_s3KeysHasBeenSet; }
    template<typename S3KeysT = Aws::Vector<Aws::String>>
    void SetS3Keys(S3KeysT&& value) { m_s3KeysHasBeenSet = true; m_s3Keys = std::forward<S3KeysT>(value); }
    template<typename S3KeysT = Aws::Vector<Aws::String>>
    ReportDestination& WithS3Keys(S3KeysT&& value) { SetS3Keys(std::forward<S3KeysT>(value)); return *this;}
    template<typename S3KeysT = Aws::String>
    ReportDestination& AddS3Keys(S3KeysT&& value) { m_s3KeysHasBeenSet = true; m_s3Keys.emplace_back(std::forward<S3KeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_s3Keys;
    bool m_s3KeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
