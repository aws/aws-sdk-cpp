/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Termination.h>
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
namespace Chime
{
namespace Model
{
  class PutVoiceConnectorTerminationResult
  {
  public:
    AWS_CHIME_API PutVoiceConnectorTerminationResult();
    AWS_CHIME_API PutVoiceConnectorTerminationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API PutVoiceConnectorTerminationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated termination setting details.</p>
     */
    inline const Termination& GetTermination() const{ return m_termination; }

    /**
     * <p>The updated termination setting details.</p>
     */
    inline void SetTermination(const Termination& value) { m_termination = value; }

    /**
     * <p>The updated termination setting details.</p>
     */
    inline void SetTermination(Termination&& value) { m_termination = std::move(value); }

    /**
     * <p>The updated termination setting details.</p>
     */
    inline PutVoiceConnectorTerminationResult& WithTermination(const Termination& value) { SetTermination(value); return *this;}

    /**
     * <p>The updated termination setting details.</p>
     */
    inline PutVoiceConnectorTerminationResult& WithTermination(Termination&& value) { SetTermination(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutVoiceConnectorTerminationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutVoiceConnectorTerminationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutVoiceConnectorTerminationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Termination m_termination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
