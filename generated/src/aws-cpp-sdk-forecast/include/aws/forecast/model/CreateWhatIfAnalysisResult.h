﻿/**
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
  class CreateWhatIfAnalysisResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateWhatIfAnalysisResult();
    AWS_FORECASTSERVICE_API CreateWhatIfAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateWhatIfAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const{ return m_whatIfAnalysisArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline void SetWhatIfAnalysisArn(const Aws::String& value) { m_whatIfAnalysisArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline void SetWhatIfAnalysisArn(Aws::String&& value) { m_whatIfAnalysisArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline void SetWhatIfAnalysisArn(const char* value) { m_whatIfAnalysisArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline CreateWhatIfAnalysisResult& WithWhatIfAnalysisArn(const Aws::String& value) { SetWhatIfAnalysisArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline CreateWhatIfAnalysisResult& WithWhatIfAnalysisArn(Aws::String&& value) { SetWhatIfAnalysisArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline CreateWhatIfAnalysisResult& WithWhatIfAnalysisArn(const char* value) { SetWhatIfAnalysisArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateWhatIfAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateWhatIfAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateWhatIfAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_whatIfAnalysisArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
