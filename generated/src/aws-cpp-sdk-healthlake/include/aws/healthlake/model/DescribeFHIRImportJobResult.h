/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ImportJobProperties.h>
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
  class DescribeFHIRImportJobResult
  {
  public:
    AWS_HEALTHLAKE_API DescribeFHIRImportJobResult();
    AWS_HEALTHLAKE_API DescribeFHIRImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API DescribeFHIRImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the Import job request, including the ID, ARN, name, and
     * the status of the job.</p>
     */
    inline const ImportJobProperties& GetImportJobProperties() const{ return m_importJobProperties; }

    /**
     * <p>The properties of the Import job request, including the ID, ARN, name, and
     * the status of the job.</p>
     */
    inline void SetImportJobProperties(const ImportJobProperties& value) { m_importJobProperties = value; }

    /**
     * <p>The properties of the Import job request, including the ID, ARN, name, and
     * the status of the job.</p>
     */
    inline void SetImportJobProperties(ImportJobProperties&& value) { m_importJobProperties = std::move(value); }

    /**
     * <p>The properties of the Import job request, including the ID, ARN, name, and
     * the status of the job.</p>
     */
    inline DescribeFHIRImportJobResult& WithImportJobProperties(const ImportJobProperties& value) { SetImportJobProperties(value); return *this;}

    /**
     * <p>The properties of the Import job request, including the ID, ARN, name, and
     * the status of the job.</p>
     */
    inline DescribeFHIRImportJobResult& WithImportJobProperties(ImportJobProperties&& value) { SetImportJobProperties(std::move(value)); return *this;}

  private:

    ImportJobProperties m_importJobProperties;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
