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
    AWS_ACM_API GetAccountConfigurationResult() = default;
    AWS_ACM_API GetAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACM_API GetAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Expiration events configuration options associated with the Amazon Web
     * Services account.</p>
     */
    inline const ExpiryEventsConfiguration& GetExpiryEvents() const { return m_expiryEvents; }
    template<typename ExpiryEventsT = ExpiryEventsConfiguration>
    void SetExpiryEvents(ExpiryEventsT&& value) { m_expiryEventsHasBeenSet = true; m_expiryEvents = std::forward<ExpiryEventsT>(value); }
    template<typename ExpiryEventsT = ExpiryEventsConfiguration>
    GetAccountConfigurationResult& WithExpiryEvents(ExpiryEventsT&& value) { SetExpiryEvents(std::forward<ExpiryEventsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExpiryEventsConfiguration m_expiryEvents;
    bool m_expiryEventsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
