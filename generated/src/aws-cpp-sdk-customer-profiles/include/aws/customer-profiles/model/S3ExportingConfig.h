/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Configuration information about the S3 bucket where Identity Resolution Jobs
   * write result files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/S3ExportingConfig">AWS
   * API Reference</a></p>
   */
  class S3ExportingConfig
  {
  public:
    AWS_CUSTOMERPROFILES_API S3ExportingConfig() = default;
    AWS_CUSTOMERPROFILES_API S3ExportingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API S3ExportingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket where Identity Resolution Jobs write result
     * files.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    S3ExportingConfig& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 key name of the location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline const Aws::String& GetS3KeyName() const { return m_s3KeyName; }
    inline bool S3KeyNameHasBeenSet() const { return m_s3KeyNameHasBeenSet; }
    template<typename S3KeyNameT = Aws::String>
    void SetS3KeyName(S3KeyNameT&& value) { m_s3KeyNameHasBeenSet = true; m_s3KeyName = std::forward<S3KeyNameT>(value); }
    template<typename S3KeyNameT = Aws::String>
    S3ExportingConfig& WithS3KeyName(S3KeyNameT&& value) { SetS3KeyName(std::forward<S3KeyNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3KeyName;
    bool m_s3KeyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
