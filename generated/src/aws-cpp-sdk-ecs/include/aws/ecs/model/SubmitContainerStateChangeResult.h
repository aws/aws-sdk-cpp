/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{
  class SubmitContainerStateChangeResult
  {
  public:
    AWS_ECS_API SubmitContainerStateChangeResult();
    AWS_ECS_API SubmitContainerStateChangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API SubmitContainerStateChangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline const Aws::String& GetAcknowledgment() const{ return m_acknowledgment; }

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline void SetAcknowledgment(const Aws::String& value) { m_acknowledgment = value; }

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline void SetAcknowledgment(Aws::String&& value) { m_acknowledgment = std::move(value); }

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline void SetAcknowledgment(const char* value) { m_acknowledgment.assign(value); }

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline SubmitContainerStateChangeResult& WithAcknowledgment(const Aws::String& value) { SetAcknowledgment(value); return *this;}

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline SubmitContainerStateChangeResult& WithAcknowledgment(Aws::String&& value) { SetAcknowledgment(std::move(value)); return *this;}

    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline SubmitContainerStateChangeResult& WithAcknowledgment(const char* value) { SetAcknowledgment(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SubmitContainerStateChangeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SubmitContainerStateChangeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SubmitContainerStateChangeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_acknowledgment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
