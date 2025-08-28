/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ExportJobProperties.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_HEALTHLAKE_API DescribeFHIRExportJobResult() = default;
    AWS_HEALTHLAKE_API DescribeFHIRExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API DescribeFHIRExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The export job properties.</p>
     */
    inline const ExportJobProperties& GetExportJobProperties() const { return m_exportJobProperties; }
    template<typename ExportJobPropertiesT = ExportJobProperties>
    void SetExportJobProperties(ExportJobPropertiesT&& value) { m_exportJobPropertiesHasBeenSet = true; m_exportJobProperties = std::forward<ExportJobPropertiesT>(value); }
    template<typename ExportJobPropertiesT = ExportJobProperties>
    DescribeFHIRExportJobResult& WithExportJobProperties(ExportJobPropertiesT&& value) { SetExportJobProperties(std::forward<ExportJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFHIRExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExportJobProperties m_exportJobProperties;
    bool m_exportJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
