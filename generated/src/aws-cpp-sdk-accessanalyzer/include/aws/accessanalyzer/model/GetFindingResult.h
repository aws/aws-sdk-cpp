﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/Finding.h>
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
  /**
   * <p>The response to the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetFindingResponse">AWS
   * API Reference</a></p>
   */
  class GetFindingResult
  {
  public:
    AWS_ACCESSANALYZER_API GetFindingResult();
    AWS_ACCESSANALYZER_API GetFindingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetFindingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>finding</code> object that contains finding details.</p>
     */
    inline const Finding& GetFinding() const{ return m_finding; }
    inline void SetFinding(const Finding& value) { m_finding = value; }
    inline void SetFinding(Finding&& value) { m_finding = std::move(value); }
    inline GetFindingResult& WithFinding(const Finding& value) { SetFinding(value); return *this;}
    inline GetFindingResult& WithFinding(Finding&& value) { SetFinding(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFindingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFindingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFindingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Finding m_finding;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
