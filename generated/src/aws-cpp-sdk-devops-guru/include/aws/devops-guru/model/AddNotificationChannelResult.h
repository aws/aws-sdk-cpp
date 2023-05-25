/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class AddNotificationChannelResult
  {
  public:
    AWS_DEVOPSGURU_API AddNotificationChannelResult();
    AWS_DEVOPSGURU_API AddNotificationChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API AddNotificationChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline AddNotificationChannelResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline AddNotificationChannelResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the added notification channel. </p>
     */
    inline AddNotificationChannelResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AddNotificationChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AddNotificationChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AddNotificationChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
