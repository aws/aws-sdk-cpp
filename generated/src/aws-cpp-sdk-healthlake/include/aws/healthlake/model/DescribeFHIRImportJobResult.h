/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ImportJobProperties.h>
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
  class DescribeFHIRImportJobResult
  {
  public:
    AWS_HEALTHLAKE_API DescribeFHIRImportJobResult() = default;
    AWS_HEALTHLAKE_API DescribeFHIRImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTHLAKE_API DescribeFHIRImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The import job properties.</p>
     */
    inline const ImportJobProperties& GetImportJobProperties() const { return m_importJobProperties; }
    template<typename ImportJobPropertiesT = ImportJobProperties>
    void SetImportJobProperties(ImportJobPropertiesT&& value) { m_importJobPropertiesHasBeenSet = true; m_importJobProperties = std::forward<ImportJobPropertiesT>(value); }
    template<typename ImportJobPropertiesT = ImportJobProperties>
    DescribeFHIRImportJobResult& WithImportJobProperties(ImportJobPropertiesT&& value) { SetImportJobProperties(std::forward<ImportJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFHIRImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ImportJobProperties m_importJobProperties;
    bool m_importJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
