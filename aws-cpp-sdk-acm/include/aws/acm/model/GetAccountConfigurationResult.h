/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ExpiryEventsConfiguration.h>
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
  class AWS_ACM_API GetAccountConfigurationResult
  {
  public:
    GetAccountConfigurationResult();
    GetAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Expiration events configuration options associated with the AWS account.</p>
     */
    inline const ExpiryEventsConfiguration& GetExpiryEvents() const{ return m_expiryEvents; }

    /**
     * <p>Expiration events configuration options associated with the AWS account.</p>
     */
    inline void SetExpiryEvents(const ExpiryEventsConfiguration& value) { m_expiryEvents = value; }

    /**
     * <p>Expiration events configuration options associated with the AWS account.</p>
     */
    inline void SetExpiryEvents(ExpiryEventsConfiguration&& value) { m_expiryEvents = std::move(value); }

    /**
     * <p>Expiration events configuration options associated with the AWS account.</p>
     */
    inline GetAccountConfigurationResult& WithExpiryEvents(const ExpiryEventsConfiguration& value) { SetExpiryEvents(value); return *this;}

    /**
     * <p>Expiration events configuration options associated with the AWS account.</p>
     */
    inline GetAccountConfigurationResult& WithExpiryEvents(ExpiryEventsConfiguration&& value) { SetExpiryEvents(std::move(value)); return *this;}

  private:

    ExpiryEventsConfiguration m_expiryEvents;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
