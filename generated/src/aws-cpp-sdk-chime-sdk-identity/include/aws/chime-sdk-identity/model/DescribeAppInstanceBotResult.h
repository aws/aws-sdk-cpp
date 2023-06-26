/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceBot.h>
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
  class DescribeAppInstanceBotResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceBotResult();
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detials of the <code>AppInstanceBot</code>.</p>
     */
    inline const AppInstanceBot& GetAppInstanceBot() const{ return m_appInstanceBot; }

    /**
     * <p>The detials of the <code>AppInstanceBot</code>.</p>
     */
    inline void SetAppInstanceBot(const AppInstanceBot& value) { m_appInstanceBot = value; }

    /**
     * <p>The detials of the <code>AppInstanceBot</code>.</p>
     */
    inline void SetAppInstanceBot(AppInstanceBot&& value) { m_appInstanceBot = std::move(value); }

    /**
     * <p>The detials of the <code>AppInstanceBot</code>.</p>
     */
    inline DescribeAppInstanceBotResult& WithAppInstanceBot(const AppInstanceBot& value) { SetAppInstanceBot(value); return *this;}

    /**
     * <p>The detials of the <code>AppInstanceBot</code>.</p>
     */
    inline DescribeAppInstanceBotResult& WithAppInstanceBot(AppInstanceBot&& value) { SetAppInstanceBot(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAppInstanceBotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAppInstanceBotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAppInstanceBotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppInstanceBot m_appInstanceBot;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
