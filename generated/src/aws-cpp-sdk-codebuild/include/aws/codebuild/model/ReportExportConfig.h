﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ReportExportConfigType.h>
#include <aws/codebuild/model/S3ReportExportConfig.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about the location where the run of a report is exported.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ReportExportConfig">AWS
   * API Reference</a></p>
   */
  class ReportExportConfig
  {
  public:
    AWS_CODEBUILD_API ReportExportConfig() = default;
    AWS_CODEBUILD_API ReportExportConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ReportExportConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The export configuration type. Valid values are: </p> <ul> <li> <p>
     * <code>S3</code>: The report results are exported to an S3 bucket. </p> </li>
     * <li> <p> <code>NO_EXPORT</code>: The report results are not exported. </p> </li>
     * </ul>
     */
    inline ReportExportConfigType GetExportConfigType() const { return m_exportConfigType; }
    inline bool ExportConfigTypeHasBeenSet() const { return m_exportConfigTypeHasBeenSet; }
    inline void SetExportConfigType(ReportExportConfigType value) { m_exportConfigTypeHasBeenSet = true; m_exportConfigType = value; }
    inline ReportExportConfig& WithExportConfigType(ReportExportConfigType value) { SetExportConfigType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>S3ReportExportConfig</code> object that contains information about
     * the S3 bucket where the run of a report is exported. </p>
     */
    inline const S3ReportExportConfig& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = S3ReportExportConfig>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = S3ReportExportConfig>
    ReportExportConfig& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}
  private:

    ReportExportConfigType m_exportConfigType{ReportExportConfigType::NOT_SET};
    bool m_exportConfigTypeHasBeenSet = false;

    S3ReportExportConfig m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
