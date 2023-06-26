/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Bot.h>
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
  class RegenerateSecurityTokenResult
  {
  public:
    AWS_CHIME_API RegenerateSecurityTokenResult();
    AWS_CHIME_API RegenerateSecurityTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API RegenerateSecurityTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A resource that allows Enterprise account administrators to configure an
     * interface that receives events from Amazon Chime.</p>
     */
    inline const Bot& GetBot() const{ return m_bot; }

    /**
     * <p>A resource that allows Enterprise account administrators to configure an
     * interface that receives events from Amazon Chime.</p>
     */
    inline void SetBot(const Bot& value) { m_bot = value; }

    /**
     * <p>A resource that allows Enterprise account administrators to configure an
     * interface that receives events from Amazon Chime.</p>
     */
    inline void SetBot(Bot&& value) { m_bot = std::move(value); }

    /**
     * <p>A resource that allows Enterprise account administrators to configure an
     * interface that receives events from Amazon Chime.</p>
     */
    inline RegenerateSecurityTokenResult& WithBot(const Bot& value) { SetBot(value); return *this;}

    /**
     * <p>A resource that allows Enterprise account administrators to configure an
     * interface that receives events from Amazon Chime.</p>
     */
    inline RegenerateSecurityTokenResult& WithBot(Bot&& value) { SetBot(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RegenerateSecurityTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RegenerateSecurityTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RegenerateSecurityTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Bot m_bot;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
