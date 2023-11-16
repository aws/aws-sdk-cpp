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
  class CreateLifecyclePolicyResult
  {
  public:
    AWS_IMAGEBUILDER_API CreateLifecyclePolicyResult();
    AWS_IMAGEBUILDER_API CreateLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API CreateLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateLifecyclePolicyResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline CreateLifecyclePolicyResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline CreateLifecyclePolicyResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that the request
     * created.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const{ return m_lifecyclePolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that the request
     * created.</p>
     */
    inline void SetLifecyclePolicyArn(const Aws::String& value) { m_lifecyclePolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that the request
     * created.</p>
     */
    inline void SetLifecyclePolicyArn(Aws::String&& value) { m_lifecyclePolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that the request
     * created.</p>
     */
    inline void SetLifecyclePolicyArn(const char* value) { m_lifecyclePolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that the request
     * created.</p>
     */
    inline CreateLifecyclePolicyResult& WithLifecyclePolicyArn(const Aws::String& value) { SetLifecyclePolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that the request
     * created.</p>
     */
    inline CreateLifecyclePolicyResult& WithLifecyclePolicyArn(Aws::String&& value) { SetLifecyclePolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy that the request
     * created.</p>
     */
    inline CreateLifecyclePolicyResult& WithLifecyclePolicyArn(const char* value) { SetLifecyclePolicyArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_clientToken;

    Aws::String m_lifecyclePolicyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
