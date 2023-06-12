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
  class StartCodegenJobResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobResult();
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The code generation job for a UI component that is associated with an Amplify
     * app.</p>
     */
    inline const CodegenJob& GetEntity() const{ return m_entity; }

    /**
     * <p>The code generation job for a UI component that is associated with an Amplify
     * app.</p>
     */
    inline void SetEntity(const CodegenJob& value) { m_entity = value; }

    /**
     * <p>The code generation job for a UI component that is associated with an Amplify
     * app.</p>
     */
    inline void SetEntity(CodegenJob&& value) { m_entity = std::move(value); }

    /**
     * <p>The code generation job for a UI component that is associated with an Amplify
     * app.</p>
     */
    inline StartCodegenJobResult& WithEntity(const CodegenJob& value) { SetEntity(value); return *this;}

    /**
     * <p>The code generation job for a UI component that is associated with an Amplify
     * app.</p>
     */
    inline StartCodegenJobResult& WithEntity(CodegenJob&& value) { SetEntity(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartCodegenJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartCodegenJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartCodegenJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CodegenJob m_entity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
