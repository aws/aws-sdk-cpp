/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/ResourceFilterCriteria.h>
#include <aws/inspector2/model/SbomReportFormat.h>
#include <aws/inspector2/model/Destination.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class CreateSbomExportRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API CreateSbomExportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSbomExport"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The resource filter criteria for the software bill of materials (SBOM)
     * report.</p>
     */
    inline const ResourceFilterCriteria& GetResourceFilterCriteria() const { return m_resourceFilterCriteria; }
    inline bool ResourceFilterCriteriaHasBeenSet() const { return m_resourceFilterCriteriaHasBeenSet; }
    template<typename ResourceFilterCriteriaT = ResourceFilterCriteria>
    void SetResourceFilterCriteria(ResourceFilterCriteriaT&& value) { m_resourceFilterCriteriaHasBeenSet = true; m_resourceFilterCriteria = std::forward<ResourceFilterCriteriaT>(value); }
    template<typename ResourceFilterCriteriaT = ResourceFilterCriteria>
    CreateSbomExportRequest& WithResourceFilterCriteria(ResourceFilterCriteriaT&& value) { SetResourceFilterCriteria(std::forward<ResourceFilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the software bill of materials (SBOM) report.</p>
     */
    inline SbomReportFormat GetReportFormat() const { return m_reportFormat; }
    inline bool ReportFormatHasBeenSet() const { return m_reportFormatHasBeenSet; }
    inline void SetReportFormat(SbomReportFormat value) { m_reportFormatHasBeenSet = true; m_reportFormat = value; }
    inline CreateSbomExportRequest& WithReportFormat(SbomReportFormat value) { SetReportFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details of the Amazon S3 bucket and KMS key used to export
     * findings.</p>
     */
    inline const Destination& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = Destination>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = Destination>
    CreateSbomExportRequest& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}
  private:

    ResourceFilterCriteria m_resourceFilterCriteria;
    bool m_resourceFilterCriteriaHasBeenSet = false;

    SbomReportFormat m_reportFormat{SbomReportFormat::NOT_SET};
    bool m_reportFormatHasBeenSet = false;

    Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
