/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/inspector-scan/InspectorscanRequest.h>
#include <aws/core/utils/Document.h>
#include <aws/inspector-scan/model/OutputFormat.h>
#include <utility>

namespace Aws
{
namespace inspectorscan
{
namespace Model
{

  /**
   */
  class ScanSbomRequest : public InspectorscanRequest
  {
  public:
    AWS_INSPECTORSCAN_API ScanSbomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ScanSbom"; }

    AWS_INSPECTORSCAN_API Aws::String SerializePayload() const override;


    /**
     * <p>The JSON file for the SBOM you want to scan. The SBOM must be in CycloneDX
     * 1.5 format.</p>
     */
    inline Aws::Utils::DocumentView GetSbom() const{ return m_sbom; }

    /**
     * <p>The JSON file for the SBOM you want to scan. The SBOM must be in CycloneDX
     * 1.5 format.</p>
     */
    inline bool SbomHasBeenSet() const { return m_sbomHasBeenSet; }

    /**
     * <p>The JSON file for the SBOM you want to scan. The SBOM must be in CycloneDX
     * 1.5 format.</p>
     */
    inline void SetSbom(const Aws::Utils::Document& value) { m_sbomHasBeenSet = true; m_sbom = value; }

    /**
     * <p>The JSON file for the SBOM you want to scan. The SBOM must be in CycloneDX
     * 1.5 format.</p>
     */
    inline void SetSbom(Aws::Utils::Document&& value) { m_sbomHasBeenSet = true; m_sbom = std::move(value); }

    /**
     * <p>The JSON file for the SBOM you want to scan. The SBOM must be in CycloneDX
     * 1.5 format.</p>
     */
    inline ScanSbomRequest& WithSbom(const Aws::Utils::Document& value) { SetSbom(value); return *this;}

    /**
     * <p>The JSON file for the SBOM you want to scan. The SBOM must be in CycloneDX
     * 1.5 format.</p>
     */
    inline ScanSbomRequest& WithSbom(Aws::Utils::Document&& value) { SetSbom(std::move(value)); return *this;}


    /**
     * <p>The output format for the vulnerability report.</p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The output format for the vulnerability report.</p>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p>The output format for the vulnerability report.</p>
     */
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>The output format for the vulnerability report.</p>
     */
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>The output format for the vulnerability report.</p>
     */
    inline ScanSbomRequest& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The output format for the vulnerability report.</p>
     */
    inline ScanSbomRequest& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}

  private:

    Aws::Utils::Document m_sbom;
    bool m_sbomHasBeenSet = false;

    OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace inspectorscan
} // namespace Aws
