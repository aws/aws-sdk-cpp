/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobTemplateType.h>
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
namespace deadline
{
namespace Model
{
  class CopyJobTemplateResult
  {
  public:
    AWS_DEADLINE_API CopyJobTemplateResult();
    AWS_DEADLINE_API CopyJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CopyJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The format of the job template, either <code>JSON</code> or
     * <code>YAML</code>.</p>
     */
    inline const JobTemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The format of the job template, either <code>JSON</code> or
     * <code>YAML</code>.</p>
     */
    inline void SetTemplateType(const JobTemplateType& value) { m_templateType = value; }

    /**
     * <p>The format of the job template, either <code>JSON</code> or
     * <code>YAML</code>.</p>
     */
    inline void SetTemplateType(JobTemplateType&& value) { m_templateType = std::move(value); }

    /**
     * <p>The format of the job template, either <code>JSON</code> or
     * <code>YAML</code>.</p>
     */
    inline CopyJobTemplateResult& WithTemplateType(const JobTemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The format of the job template, either <code>JSON</code> or
     * <code>YAML</code>.</p>
     */
    inline CopyJobTemplateResult& WithTemplateType(JobTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CopyJobTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CopyJobTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CopyJobTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JobTemplateType m_templateType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
