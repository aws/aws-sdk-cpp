﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisTemplate.h>
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
namespace CleanRooms
{
namespace Model
{
  class UpdateAnalysisTemplateResult
  {
  public:
    AWS_CLEANROOMS_API UpdateAnalysisTemplateResult() = default;
    AWS_CLEANROOMS_API UpdateAnalysisTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateAnalysisTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The analysis template.</p>
     */
    inline const AnalysisTemplate& GetAnalysisTemplate() const { return m_analysisTemplate; }
    template<typename AnalysisTemplateT = AnalysisTemplate>
    void SetAnalysisTemplate(AnalysisTemplateT&& value) { m_analysisTemplateHasBeenSet = true; m_analysisTemplate = std::forward<AnalysisTemplateT>(value); }
    template<typename AnalysisTemplateT = AnalysisTemplate>
    UpdateAnalysisTemplateResult& WithAnalysisTemplate(AnalysisTemplateT&& value) { SetAnalysisTemplate(std::forward<AnalysisTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAnalysisTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AnalysisTemplate m_analysisTemplate;
    bool m_analysisTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
