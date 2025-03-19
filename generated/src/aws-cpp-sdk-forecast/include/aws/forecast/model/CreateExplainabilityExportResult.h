/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{
  class CreateExplainabilityExportResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult() = default;
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline const Aws::String& GetExplainabilityExportArn() const { return m_explainabilityExportArn; }
    template<typename ExplainabilityExportArnT = Aws::String>
    void SetExplainabilityExportArn(ExplainabilityExportArnT&& value) { m_explainabilityExportArnHasBeenSet = true; m_explainabilityExportArn = std::forward<ExplainabilityExportArnT>(value); }
    template<typename ExplainabilityExportArnT = Aws::String>
    CreateExplainabilityExportResult& WithExplainabilityExportArn(ExplainabilityExportArnT&& value) { SetExplainabilityExportArn(std::forward<ExplainabilityExportArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateExplainabilityExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_explainabilityExportArn;
    bool m_explainabilityExportArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
