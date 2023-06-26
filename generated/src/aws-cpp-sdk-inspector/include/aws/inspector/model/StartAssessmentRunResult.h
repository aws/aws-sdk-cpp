/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{
  class StartAssessmentRunResult
  {
  public:
    AWS_INSPECTOR_API StartAssessmentRunResult();
    AWS_INSPECTOR_API StartAssessmentRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API StartAssessmentRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArn = value; }

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArn = std::move(value); }

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArn.assign(value); }

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline StartAssessmentRunResult& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline StartAssessmentRunResult& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment run that has been started.</p>
     */
    inline StartAssessmentRunResult& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartAssessmentRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartAssessmentRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartAssessmentRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_assessmentRunArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
