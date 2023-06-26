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
  class StartFlywheelIterationResult
  {
  public:
    AWS_COMPREHEND_API StartFlywheelIterationResult();
    AWS_COMPREHEND_API StartFlywheelIterationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StartFlywheelIterationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArn = value; }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(const char* value) { m_flywheelArn.assign(value); }

    /**
     * <p/>
     */
    inline StartFlywheelIterationResult& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}

    /**
     * <p/>
     */
    inline StartFlywheelIterationResult& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline StartFlywheelIterationResult& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelIterationId() const{ return m_flywheelIterationId; }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(const Aws::String& value) { m_flywheelIterationId = value; }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(Aws::String&& value) { m_flywheelIterationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(const char* value) { m_flywheelIterationId.assign(value); }

    /**
     * <p/>
     */
    inline StartFlywheelIterationResult& WithFlywheelIterationId(const Aws::String& value) { SetFlywheelIterationId(value); return *this;}

    /**
     * <p/>
     */
    inline StartFlywheelIterationResult& WithFlywheelIterationId(Aws::String&& value) { SetFlywheelIterationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline StartFlywheelIterationResult& WithFlywheelIterationId(const char* value) { SetFlywheelIterationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartFlywheelIterationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartFlywheelIterationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartFlywheelIterationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_flywheelArn;

    Aws::String m_flywheelIterationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
