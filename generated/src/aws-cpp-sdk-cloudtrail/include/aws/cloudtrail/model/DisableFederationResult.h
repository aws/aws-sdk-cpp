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
    AWS_CLOUDTRAIL_API DisableFederationResult();
    AWS_CLOUDTRAIL_API DisableFederationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API DisableFederationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ARN of the event data store for which you disabled Lake query
     * federation. </p>
     */
    inline const Aws::String& GetEventDataStoreArn() const{ return m_eventDataStoreArn; }

    /**
     * <p> The ARN of the event data store for which you disabled Lake query
     * federation. </p>
     */
    inline void SetEventDataStoreArn(const Aws::String& value) { m_eventDataStoreArn = value; }

    /**
     * <p> The ARN of the event data store for which you disabled Lake query
     * federation. </p>
     */
    inline void SetEventDataStoreArn(Aws::String&& value) { m_eventDataStoreArn = std::move(value); }

    /**
     * <p> The ARN of the event data store for which you disabled Lake query
     * federation. </p>
     */
    inline void SetEventDataStoreArn(const char* value) { m_eventDataStoreArn.assign(value); }

    /**
     * <p> The ARN of the event data store for which you disabled Lake query
     * federation. </p>
     */
    inline DisableFederationResult& WithEventDataStoreArn(const Aws::String& value) { SetEventDataStoreArn(value); return *this;}

    /**
     * <p> The ARN of the event data store for which you disabled Lake query
     * federation. </p>
     */
    inline DisableFederationResult& WithEventDataStoreArn(Aws::String&& value) { SetEventDataStoreArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the event data store for which you disabled Lake query
     * federation. </p>
     */
    inline DisableFederationResult& WithEventDataStoreArn(const char* value) { SetEventDataStoreArn(value); return *this;}


    /**
     * <p> The federation status. </p>
     */
    inline const FederationStatus& GetFederationStatus() const{ return m_federationStatus; }

    /**
     * <p> The federation status. </p>
     */
    inline void SetFederationStatus(const FederationStatus& value) { m_federationStatus = value; }

    /**
     * <p> The federation status. </p>
     */
    inline void SetFederationStatus(FederationStatus&& value) { m_federationStatus = std::move(value); }

    /**
     * <p> The federation status. </p>
     */
    inline DisableFederationResult& WithFederationStatus(const FederationStatus& value) { SetFederationStatus(value); return *this;}

    /**
     * <p> The federation status. </p>
     */
    inline DisableFederationResult& WithFederationStatus(FederationStatus&& value) { SetFederationStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisableFederationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisableFederationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisableFederationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_eventDataStoreArn;

    FederationStatus m_federationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
