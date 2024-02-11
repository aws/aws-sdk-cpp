/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/SbomReportFormat.h>
#include <aws/inspector2/model/ResourceFilterCriteria.h>
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
    AWS_INSPECTOR2_API CreateSbomExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSbomExport"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The output format for the software bill of materials (SBOM) report.</p>
     */
    inline const SbomReportFormat& GetReportFormat() const{ return m_reportFormat; }

    /**
     * <p>The output format for the software bill of materials (SBOM) report.</p>
     */
    inline bool ReportFormatHasBeenSet() const { return m_reportFormatHasBeenSet; }

    /**
     * <p>The output format for the software bill of materials (SBOM) report.</p>
     */
    inline void SetReportFormat(const SbomReportFormat& value) { m_reportFormatHasBeenSet = true; m_reportFormat = value; }

    /**
     * <p>The output format for the software bill of materials (SBOM) report.</p>
     */
    inline void SetReportFormat(SbomReportFormat&& value) { m_reportFormatHasBeenSet = true; m_reportFormat = std::move(value); }

    /**
     * <p>The output format for the software bill of materials (SBOM) report.</p>
     */
    inline CreateSbomExportRequest& WithReportFormat(const SbomReportFormat& value) { SetReportFormat(value); return *this;}

    /**
     * <p>The output format for the software bill of materials (SBOM) report.</p>
     */
    inline CreateSbomExportRequest& WithReportFormat(SbomReportFormat&& value) { SetReportFormat(std::move(value)); return *this;}


    /**
     * <p>The resource filter criteria for the software bill of materials (SBOM)
     * report.</p>
     */
    inline const ResourceFilterCriteria& GetResourceFilterCriteria() const{ return m_resourceFilterCriteria; }

    /**
     * <p>The resource filter criteria for the software bill of materials (SBOM)
     * report.</p>
     */
    inline bool ResourceFilterCriteriaHasBeenSet() const { return m_resourceFilterCriteriaHasBeenSet; }

    /**
     * <p>The resource filter criteria for the software bill of materials (SBOM)
     * report.</p>
     */
    inline void SetResourceFilterCriteria(const ResourceFilterCriteria& value) { m_resourceFilterCriteriaHasBeenSet = true; m_resourceFilterCriteria = value; }

    /**
     * <p>The resource filter criteria for the software bill of materials (SBOM)
     * report.</p>
     */
    inline void SetResourceFilterCriteria(ResourceFilterCriteria&& value) { m_resourceFilterCriteriaHasBeenSet = true; m_resourceFilterCriteria = std::move(value); }

    /**
     * <p>The resource filter criteria for the software bill of materials (SBOM)
     * report.</p>
     */
    inline CreateSbomExportRequest& WithResourceFilterCriteria(const ResourceFilterCriteria& value) { SetResourceFilterCriteria(value); return *this;}

    /**
     * <p>The resource filter criteria for the software bill of materials (SBOM)
     * report.</p>
     */
    inline CreateSbomExportRequest& WithResourceFilterCriteria(ResourceFilterCriteria&& value) { SetResourceFilterCriteria(std::move(value)); return *this;}


    
    inline const Destination& GetS3Destination() const{ return m_s3Destination; }

    
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    
    inline void SetS3Destination(const Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    
    inline void SetS3Destination(Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    
    inline CreateSbomExportRequest& WithS3Destination(const Destination& value) { SetS3Destination(value); return *this;}

    
    inline CreateSbomExportRequest& WithS3Destination(Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    SbomReportFormat m_reportFormat;
    bool m_reportFormatHasBeenSet = false;

    ResourceFilterCriteria m_resourceFilterCriteria;
    bool m_resourceFilterCriteriaHasBeenSet = false;

    Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
