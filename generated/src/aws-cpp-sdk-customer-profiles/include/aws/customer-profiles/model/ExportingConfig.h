/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/S3ExportingConfig.h>
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
   * writes result files. </p>  <p>You need to give Customer Profiles service
   * principal write permission to your S3 bucket. Otherwise, you'll get an exception
   * in the API response. For an example policy, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/cross-service-confused-deputy-prevention.html#customer-profiles-cross-service">Amazon
   * Connect Customer Profiles cross-service confused deputy prevention</a>. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ExportingConfig">AWS
   * API Reference</a></p>
   */
  class ExportingConfig
  {
  public:
    AWS_CUSTOMERPROFILES_API ExportingConfig();
    AWS_CUSTOMERPROFILES_API ExportingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ExportingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location where Identity Resolution Jobs write result files.</p>
     */
    inline const S3ExportingConfig& GetS3Exporting() const{ return m_s3Exporting; }

    /**
     * <p>The S3 location where Identity Resolution Jobs write result files.</p>
     */
    inline bool S3ExportingHasBeenSet() const { return m_s3ExportingHasBeenSet; }

    /**
     * <p>The S3 location where Identity Resolution Jobs write result files.</p>
     */
    inline void SetS3Exporting(const S3ExportingConfig& value) { m_s3ExportingHasBeenSet = true; m_s3Exporting = value; }

    /**
     * <p>The S3 location where Identity Resolution Jobs write result files.</p>
     */
    inline void SetS3Exporting(S3ExportingConfig&& value) { m_s3ExportingHasBeenSet = true; m_s3Exporting = std::move(value); }

    /**
     * <p>The S3 location where Identity Resolution Jobs write result files.</p>
     */
    inline ExportingConfig& WithS3Exporting(const S3ExportingConfig& value) { SetS3Exporting(value); return *this;}

    /**
     * <p>The S3 location where Identity Resolution Jobs write result files.</p>
     */
    inline ExportingConfig& WithS3Exporting(S3ExportingConfig&& value) { SetS3Exporting(std::move(value)); return *this;}

  private:

    S3ExportingConfig m_s3Exporting;
    bool m_s3ExportingHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
