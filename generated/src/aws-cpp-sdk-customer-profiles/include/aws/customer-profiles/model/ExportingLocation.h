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
    AWS_CUSTOMERPROFILES_API ExportingLocation() = default;
    AWS_CUSTOMERPROFILES_API ExportingLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ExportingLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the S3 location where Identity Resolution Jobs write result
     * files.</p>
     */
    inline const S3ExportingLocation& GetS3Exporting() const { return m_s3Exporting; }
    inline bool S3ExportingHasBeenSet() const { return m_s3ExportingHasBeenSet; }
    template<typename S3ExportingT = S3ExportingLocation>
    void SetS3Exporting(S3ExportingT&& value) { m_s3ExportingHasBeenSet = true; m_s3Exporting = std::forward<S3ExportingT>(value); }
    template<typename S3ExportingT = S3ExportingLocation>
    ExportingLocation& WithS3Exporting(S3ExportingT&& value) { SetS3Exporting(std::forward<S3ExportingT>(value)); return *this;}
    ///@}
  private:

    S3ExportingLocation m_s3Exporting;
    bool m_s3ExportingHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
