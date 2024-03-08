/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{
  class CreateWorkflowResult
  {
  public:
    AWS_IMAGEBUILDER_API CreateWorkflowResult();
    AWS_IMAGEBUILDER_API CreateWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API CreateWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline CreateWorkflowResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline CreateWorkflowResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline CreateWorkflowResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource that the request
     * created.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource that the request
     * created.</p>
     */
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource that the request
     * created.</p>
     */
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource that the request
     * created.</p>
     */
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource that the request
     * created.</p>
     */
    inline CreateWorkflowResult& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource that the request
     * created.</p>
     */
    inline CreateWorkflowResult& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource that the request
     * created.</p>
     */
    inline CreateWorkflowResult& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_clientToken;

    Aws::String m_workflowBuildVersionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
