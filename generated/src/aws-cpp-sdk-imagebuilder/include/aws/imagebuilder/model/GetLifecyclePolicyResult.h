/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecyclePolicy.h>
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
  class GetLifecyclePolicyResult
  {
  public:
    AWS_IMAGEBUILDER_API GetLifecyclePolicyResult();
    AWS_IMAGEBUILDER_API GetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the image lifecycle policy resource that was returned.</p>
     */
    inline const LifecyclePolicy& GetLifecyclePolicy() const{ return m_lifecyclePolicy; }

    /**
     * <p>The ARN of the image lifecycle policy resource that was returned.</p>
     */
    inline void SetLifecyclePolicy(const LifecyclePolicy& value) { m_lifecyclePolicy = value; }

    /**
     * <p>The ARN of the image lifecycle policy resource that was returned.</p>
     */
    inline void SetLifecyclePolicy(LifecyclePolicy&& value) { m_lifecyclePolicy = std::move(value); }

    /**
     * <p>The ARN of the image lifecycle policy resource that was returned.</p>
     */
    inline GetLifecyclePolicyResult& WithLifecyclePolicy(const LifecyclePolicy& value) { SetLifecyclePolicy(value); return *this;}

    /**
     * <p>The ARN of the image lifecycle policy resource that was returned.</p>
     */
    inline GetLifecyclePolicyResult& WithLifecyclePolicy(LifecyclePolicy&& value) { SetLifecyclePolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LifecyclePolicy m_lifecyclePolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
