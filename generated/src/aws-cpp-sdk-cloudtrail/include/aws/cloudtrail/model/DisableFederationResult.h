/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/FederationStatus.h>
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
namespace CloudTrail
{
namespace Model
{
  class DisableFederationResult
  {
  public:
    AWS_CLOUDTRAIL_API DisableFederationResult() = default;
    AWS_CLOUDTRAIL_API DisableFederationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API DisableFederationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN of the event data store for which you disabled Lake query
     * federation. </p>
     */
    inline const Aws::String& GetEventDataStoreArn() const { return m_eventDataStoreArn; }
    template<typename EventDataStoreArnT = Aws::String>
    void SetEventDataStoreArn(EventDataStoreArnT&& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = std::forward<EventDataStoreArnT>(value); }
    template<typename EventDataStoreArnT = Aws::String>
    DisableFederationResult& WithEventDataStoreArn(EventDataStoreArnT&& value) { SetEventDataStoreArn(std::forward<EventDataStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The federation status. </p>
     */
    inline FederationStatus GetFederationStatus() const { return m_federationStatus; }
    inline void SetFederationStatus(FederationStatus value) { m_federationStatusHasBeenSet = true; m_federationStatus = value; }
    inline DisableFederationResult& WithFederationStatus(FederationStatus value) { SetFederationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisableFederationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventDataStoreArn;
    bool m_eventDataStoreArnHasBeenSet = false;

    FederationStatus m_federationStatus{FederationStatus::NOT_SET};
    bool m_federationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
