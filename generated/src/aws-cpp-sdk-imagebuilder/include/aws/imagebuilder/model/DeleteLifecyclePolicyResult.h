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
  class DeleteLifecyclePolicyResult
  {
  public:
    AWS_IMAGEBUILDER_API DeleteLifecyclePolicyResult();
    AWS_IMAGEBUILDER_API DeleteLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API DeleteLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the lifecycle policy that was deleted.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const{ return m_lifecyclePolicyArn; }

    /**
     * <p>The ARN of the lifecycle policy that was deleted.</p>
     */
    inline void SetLifecyclePolicyArn(const Aws::String& value) { m_lifecyclePolicyArn = value; }

    /**
     * <p>The ARN of the lifecycle policy that was deleted.</p>
     */
    inline void SetLifecyclePolicyArn(Aws::String&& value) { m_lifecyclePolicyArn = std::move(value); }

    /**
     * <p>The ARN of the lifecycle policy that was deleted.</p>
     */
    inline void SetLifecyclePolicyArn(const char* value) { m_lifecyclePolicyArn.assign(value); }

    /**
     * <p>The ARN of the lifecycle policy that was deleted.</p>
     */
    inline DeleteLifecyclePolicyResult& WithLifecyclePolicyArn(const Aws::String& value) { SetLifecyclePolicyArn(value); return *this;}

    /**
     * <p>The ARN of the lifecycle policy that was deleted.</p>
     */
    inline DeleteLifecyclePolicyResult& WithLifecyclePolicyArn(Aws::String&& value) { SetLifecyclePolicyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the lifecycle policy that was deleted.</p>
     */
    inline DeleteLifecyclePolicyResult& WithLifecyclePolicyArn(const char* value) { SetLifecyclePolicyArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_lifecyclePolicyArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
