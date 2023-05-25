/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class UpdateAppInstanceBotResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API UpdateAppInstanceBotResult();
    AWS_CHIMESDKIDENTITY_API UpdateAppInstanceBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API UpdateAppInstanceBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the <code>AppInstanceBot</code>.</p>
     */
    inline const Aws::String& GetAppInstanceBotArn() const{ return m_appInstanceBotArn; }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code>.</p>
     */
    inline void SetAppInstanceBotArn(const Aws::String& value) { m_appInstanceBotArn = value; }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code>.</p>
     */
    inline void SetAppInstanceBotArn(Aws::String&& value) { m_appInstanceBotArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code>.</p>
     */
    inline void SetAppInstanceBotArn(const char* value) { m_appInstanceBotArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstanceBot</code>.</p>
     */
    inline UpdateAppInstanceBotResult& WithAppInstanceBotArn(const Aws::String& value) { SetAppInstanceBotArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceBot</code>.</p>
     */
    inline UpdateAppInstanceBotResult& WithAppInstanceBotArn(Aws::String&& value) { SetAppInstanceBotArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceBot</code>.</p>
     */
    inline UpdateAppInstanceBotResult& WithAppInstanceBotArn(const char* value) { SetAppInstanceBotArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAppInstanceBotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAppInstanceBotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAppInstanceBotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appInstanceBotArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
