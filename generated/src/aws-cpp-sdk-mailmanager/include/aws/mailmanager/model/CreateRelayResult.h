/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{
  class CreateRelayResult
  {
  public:
    AWS_MAILMANAGER_API CreateRelayResult();
    AWS_MAILMANAGER_API CreateRelayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API CreateRelayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier of the created relay resource.</p>
     */
    inline const Aws::String& GetRelayId() const{ return m_relayId; }
    inline void SetRelayId(const Aws::String& value) { m_relayId = value; }
    inline void SetRelayId(Aws::String&& value) { m_relayId = std::move(value); }
    inline void SetRelayId(const char* value) { m_relayId.assign(value); }
    inline CreateRelayResult& WithRelayId(const Aws::String& value) { SetRelayId(value); return *this;}
    inline CreateRelayResult& WithRelayId(Aws::String&& value) { SetRelayId(std::move(value)); return *this;}
    inline CreateRelayResult& WithRelayId(const char* value) { SetRelayId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRelayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRelayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRelayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_relayId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
