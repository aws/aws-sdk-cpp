/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ExpiryEventsConfiguration.h>
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
namespace ACM
{
namespace Model
{
  class GetAccountConfigurationResult
  {
  public:
    AWS_ACM_API GetAccountConfigurationResult();
    AWS_ACM_API GetAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACM_API GetAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Expiration events configuration options associated with the Amazon Web
     * Services account.</p>
     */
    inline const ExpiryEventsConfiguration& GetExpiryEvents() const{ return m_expiryEvents; }

    /**
     * <p>Expiration events configuration options associated with the Amazon Web
     * Services account.</p>
     */
    inline void SetExpiryEvents(const ExpiryEventsConfiguration& value) { m_expiryEvents = value; }

    /**
     * <p>Expiration events configuration options associated with the Amazon Web
     * Services account.</p>
     */
    inline void SetExpiryEvents(ExpiryEventsConfiguration&& value) { m_expiryEvents = std::move(value); }

    /**
     * <p>Expiration events configuration options associated with the Amazon Web
     * Services account.</p>
     */
    inline GetAccountConfigurationResult& WithExpiryEvents(const ExpiryEventsConfiguration& value) { SetExpiryEvents(value); return *this;}

    /**
     * <p>Expiration events configuration options associated with the Amazon Web
     * Services account.</p>
     */
    inline GetAccountConfigurationResult& WithExpiryEvents(ExpiryEventsConfiguration&& value) { SetExpiryEvents(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccountConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccountConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccountConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ExpiryEventsConfiguration m_expiryEvents;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
