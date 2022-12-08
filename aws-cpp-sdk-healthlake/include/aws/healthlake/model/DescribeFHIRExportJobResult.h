/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ExportJobProperties.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace HealthLake
{
namespace Model
{
  class DescribeFHIRExportJobResult
  {
  public:
    AWS_HEALTHLAKE_API DescribeFHIRExportJobResult();
    AWS_HEALTHLAKE_API DescribeFHIRExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API DescribeFHIRExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Displays the properties of the export job, including the ID, Arn, Name, and
     * the status of the job. </p>
     */
    inline const ExportJobProperties& GetExportJobProperties() const{ return m_exportJobProperties; }

    /**
     * <p>Displays the properties of the export job, including the ID, Arn, Name, and
     * the status of the job. </p>
     */
    inline void SetExportJobProperties(const ExportJobProperties& value) { m_exportJobProperties = value; }

    /**
     * <p>Displays the properties of the export job, including the ID, Arn, Name, and
     * the status of the job. </p>
     */
    inline void SetExportJobProperties(ExportJobProperties&& value) { m_exportJobProperties = std::move(value); }

    /**
     * <p>Displays the properties of the export job, including the ID, Arn, Name, and
     * the status of the job. </p>
     */
    inline DescribeFHIRExportJobResult& WithExportJobProperties(const ExportJobProperties& value) { SetExportJobProperties(value); return *this;}

    /**
     * <p>Displays the properties of the export job, including the ID, Arn, Name, and
     * the status of the job. </p>
     */
    inline DescribeFHIRExportJobResult& WithExportJobProperties(ExportJobProperties&& value) { SetExportJobProperties(std::move(value)); return *this;}

  private:

    ExportJobProperties m_exportJobProperties;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
