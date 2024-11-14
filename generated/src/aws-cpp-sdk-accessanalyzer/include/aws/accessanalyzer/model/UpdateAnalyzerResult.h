/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AnalyzerConfiguration.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class UpdateAnalyzerResult
  {
  public:
    AWS_ACCESSANALYZER_API UpdateAnalyzerResult();
    AWS_ACCESSANALYZER_API UpdateAnalyzerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API UpdateAnalyzerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const AnalyzerConfiguration& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const AnalyzerConfiguration& value) { m_configuration = value; }
    inline void SetConfiguration(AnalyzerConfiguration&& value) { m_configuration = std::move(value); }
    inline UpdateAnalyzerResult& WithConfiguration(const AnalyzerConfiguration& value) { SetConfiguration(value); return *this;}
    inline UpdateAnalyzerResult& WithConfiguration(AnalyzerConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAnalyzerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAnalyzerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAnalyzerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AnalyzerConfiguration m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
