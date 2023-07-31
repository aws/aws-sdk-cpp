/**
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
    AWS_CLEANROOMS_API UpdateAnalysisTemplateResult();
    AWS_CLEANROOMS_API UpdateAnalysisTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateAnalysisTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The analysis template.</p>
     */
    inline const AnalysisTemplate& GetAnalysisTemplate() const{ return m_analysisTemplate; }

    /**
     * <p>The analysis template.</p>
     */
    inline void SetAnalysisTemplate(const AnalysisTemplate& value) { m_analysisTemplate = value; }

    /**
     * <p>The analysis template.</p>
     */
    inline void SetAnalysisTemplate(AnalysisTemplate&& value) { m_analysisTemplate = std::move(value); }

    /**
     * <p>The analysis template.</p>
     */
    inline UpdateAnalysisTemplateResult& WithAnalysisTemplate(const AnalysisTemplate& value) { SetAnalysisTemplate(value); return *this;}

    /**
     * <p>The analysis template.</p>
     */
    inline UpdateAnalysisTemplateResult& WithAnalysisTemplate(AnalysisTemplate&& value) { SetAnalysisTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAnalysisTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAnalysisTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAnalysisTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AnalysisTemplate m_analysisTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
