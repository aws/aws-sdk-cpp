/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{
  class CreateFlywheelResult
  {
  public:
    AWS_COMPREHEND_API CreateFlywheelResult();
    AWS_COMPREHEND_API CreateFlywheelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API CreateFlywheelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline void SetFlywheelArn(const char* value) { m_flywheelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline CreateFlywheelResult& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline CreateFlywheelResult& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline CreateFlywheelResult& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline const Aws::String& GetActiveModelArn() const{ return m_activeModelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(const Aws::String& value) { m_activeModelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(Aws::String&& value) { m_activeModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(const char* value) { m_activeModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline CreateFlywheelResult& WithActiveModelArn(const Aws::String& value) { SetActiveModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline CreateFlywheelResult& WithActiveModelArn(Aws::String&& value) { SetActiveModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline CreateFlywheelResult& WithActiveModelArn(const char* value) { SetActiveModelArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFlywheelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFlywheelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFlywheelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_flywheelArn;

    Aws::String m_activeModelArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
