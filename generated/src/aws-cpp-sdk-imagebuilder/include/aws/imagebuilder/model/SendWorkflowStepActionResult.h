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
  class SendWorkflowStepActionResult
  {
  public:
    AWS_IMAGEBUILDER_API SendWorkflowStepActionResult();
    AWS_IMAGEBUILDER_API SendWorkflowStepActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API SendWorkflowStepActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The workflow step that sent the step action.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }

    /**
     * <p>The workflow step that sent the step action.</p>
     */
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionId = value; }

    /**
     * <p>The workflow step that sent the step action.</p>
     */
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionId = std::move(value); }

    /**
     * <p>The workflow step that sent the step action.</p>
     */
    inline void SetStepExecutionId(const char* value) { m_stepExecutionId.assign(value); }

    /**
     * <p>The workflow step that sent the step action.</p>
     */
    inline SendWorkflowStepActionResult& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}

    /**
     * <p>The workflow step that sent the step action.</p>
     */
    inline SendWorkflowStepActionResult& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}

    /**
     * <p>The workflow step that sent the step action.</p>
     */
    inline SendWorkflowStepActionResult& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that received the
     * action request.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that received the
     * action request.</p>
     */
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that received the
     * action request.</p>
     */
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that received the
     * action request.</p>
     */
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that received the
     * action request.</p>
     */
    inline SendWorkflowStepActionResult& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that received the
     * action request.</p>
     */
    inline SendWorkflowStepActionResult& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that received the
     * action request.</p>
     */
    inline SendWorkflowStepActionResult& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}


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
    inline SendWorkflowStepActionResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline SendWorkflowStepActionResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline SendWorkflowStepActionResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SendWorkflowStepActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SendWorkflowStepActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SendWorkflowStepActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_stepExecutionId;

    Aws::String m_imageBuildVersionArn;

    Aws::String m_clientToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
