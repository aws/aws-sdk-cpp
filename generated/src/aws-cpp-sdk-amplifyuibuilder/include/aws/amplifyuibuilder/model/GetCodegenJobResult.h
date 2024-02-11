/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/CodegenJob.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class GetCodegenJobResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API GetCodegenJobResult();
    AWS_AMPLIFYUIBUILDER_API GetCodegenJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API GetCodegenJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration settings for the code generation job.</p>
     */
    inline const CodegenJob& GetJob() const{ return m_job; }

    /**
     * <p>The configuration settings for the code generation job.</p>
     */
    inline void SetJob(const CodegenJob& value) { m_job = value; }

    /**
     * <p>The configuration settings for the code generation job.</p>
     */
    inline void SetJob(CodegenJob&& value) { m_job = std::move(value); }

    /**
     * <p>The configuration settings for the code generation job.</p>
     */
    inline GetCodegenJobResult& WithJob(const CodegenJob& value) { SetJob(value); return *this;}

    /**
     * <p>The configuration settings for the code generation job.</p>
     */
    inline GetCodegenJobResult& WithJob(CodegenJob&& value) { SetJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCodegenJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCodegenJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCodegenJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CodegenJob m_job;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
