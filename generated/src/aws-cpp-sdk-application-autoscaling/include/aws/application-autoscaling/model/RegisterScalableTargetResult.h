/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{
  class RegisterScalableTargetResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetResult();
    AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the scalable target.</p>
     */
    inline const Aws::String& GetScalableTargetARN() const{ return m_scalableTargetARN; }

    /**
     * <p>The ARN of the scalable target.</p>
     */
    inline void SetScalableTargetARN(const Aws::String& value) { m_scalableTargetARN = value; }

    /**
     * <p>The ARN of the scalable target.</p>
     */
    inline void SetScalableTargetARN(Aws::String&& value) { m_scalableTargetARN = std::move(value); }

    /**
     * <p>The ARN of the scalable target.</p>
     */
    inline void SetScalableTargetARN(const char* value) { m_scalableTargetARN.assign(value); }

    /**
     * <p>The ARN of the scalable target.</p>
     */
    inline RegisterScalableTargetResult& WithScalableTargetARN(const Aws::String& value) { SetScalableTargetARN(value); return *this;}

    /**
     * <p>The ARN of the scalable target.</p>
     */
    inline RegisterScalableTargetResult& WithScalableTargetARN(Aws::String&& value) { SetScalableTargetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scalable target.</p>
     */
    inline RegisterScalableTargetResult& WithScalableTargetARN(const char* value) { SetScalableTargetARN(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RegisterScalableTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RegisterScalableTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RegisterScalableTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_scalableTargetARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
