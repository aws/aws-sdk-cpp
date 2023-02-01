/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/S3ExportingLocation.h>
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
   * <p>The S3 location where Identity Resolution Jobs write result
   * files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ExportingLocation">AWS
   * API Reference</a></p>
   */
  class ExportingLocation
  {
  public:
    AWS_CUSTOMERPROFILES_API ExportingLocation();
    AWS_CUSTOMERPROFILES_API ExportingLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ExportingLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the S3 location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline const S3ExportingLocation& GetS3Exporting() const{ return m_s3Exporting; }

    /**
     * <p>Information about the S3 location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline bool S3ExportingHasBeenSet() const { return m_s3ExportingHasBeenSet; }

    /**
     * <p>Information about the S3 location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline void SetS3Exporting(const S3ExportingLocation& value) { m_s3ExportingHasBeenSet = true; m_s3Exporting = value; }

    /**
     * <p>Information about the S3 location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline void SetS3Exporting(S3ExportingLocation&& value) { m_s3ExportingHasBeenSet = true; m_s3Exporting = std::move(value); }

    /**
     * <p>Information about the S3 location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline ExportingLocation& WithS3Exporting(const S3ExportingLocation& value) { SetS3Exporting(value); return *this;}

    /**
     * <p>Information about the S3 location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline ExportingLocation& WithS3Exporting(S3ExportingLocation&& value) { SetS3Exporting(std::move(value)); return *this;}

  private:

    S3ExportingLocation m_s3Exporting;
    bool m_s3ExportingHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
