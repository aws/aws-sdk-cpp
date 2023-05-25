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
  class CreateAssessmentTargetResult
  {
  public:
    AWS_INSPECTOR_API CreateAssessmentTargetResult();
    AWS_INSPECTOR_API CreateAssessmentTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API CreateAssessmentTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline const Aws::String& GetAssessmentTargetArn() const{ return m_assessmentTargetArn; }

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline void SetAssessmentTargetArn(const Aws::String& value) { m_assessmentTargetArn = value; }

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline void SetAssessmentTargetArn(Aws::String&& value) { m_assessmentTargetArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline void SetAssessmentTargetArn(const char* value) { m_assessmentTargetArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline CreateAssessmentTargetResult& WithAssessmentTargetArn(const Aws::String& value) { SetAssessmentTargetArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline CreateAssessmentTargetResult& WithAssessmentTargetArn(Aws::String&& value) { SetAssessmentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment target that is created.</p>
     */
    inline CreateAssessmentTargetResult& WithAssessmentTargetArn(const char* value) { SetAssessmentTargetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAssessmentTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAssessmentTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAssessmentTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_assessmentTargetArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
