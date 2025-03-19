/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/RegistrationStatus.h>
#include <aws/iotfleetwise/model/TimestreamResources.h>
#include <aws/iotfleetwise/model/IamResources.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class RegisterAccountResult
  {
  public:
    AWS_IOTFLEETWISE_API RegisterAccountResult() = default;
    AWS_IOTFLEETWISE_API RegisterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API RegisterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The status of registering your Amazon Web Services account, IAM role, and
     * Timestream resources. </p>
     */
    inline RegistrationStatus GetRegisterAccountStatus() const { return m_registerAccountStatus; }
    inline void SetRegisterAccountStatus(RegistrationStatus value) { m_registerAccountStatusHasBeenSet = true; m_registerAccountStatus = value; }
    inline RegisterAccountResult& WithRegisterAccountStatus(RegistrationStatus value) { SetRegisterAccountStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const TimestreamResources& GetTimestreamResources() const { return m_timestreamResources; }
    template<typename TimestreamResourcesT = TimestreamResources>
    void SetTimestreamResources(TimestreamResourcesT&& value) { m_timestreamResourcesHasBeenSet = true; m_timestreamResources = std::forward<TimestreamResourcesT>(value); }
    template<typename TimestreamResourcesT = TimestreamResources>
    RegisterAccountResult& WithTimestreamResources(TimestreamResourcesT&& value) { SetTimestreamResources(std::forward<TimestreamResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The registered IAM resource that allows Amazon Web Services IoT FleetWise to
     * send data to Amazon Timestream. </p>
     */
    inline const IamResources& GetIamResources() const { return m_iamResources; }
    template<typename IamResourcesT = IamResources>
    void SetIamResources(IamResourcesT&& value) { m_iamResourcesHasBeenSet = true; m_iamResources = std::forward<IamResourcesT>(value); }
    template<typename IamResourcesT = IamResources>
    RegisterAccountResult& WithIamResources(IamResourcesT&& value) { SetIamResources(std::forward<IamResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the account was registered, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    RegisterAccountResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time this registration was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    RegisterAccountResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RegistrationStatus m_registerAccountStatus{RegistrationStatus::NOT_SET};
    bool m_registerAccountStatusHasBeenSet = false;

    TimestreamResources m_timestreamResources;
    bool m_timestreamResourcesHasBeenSet = false;

    IamResources m_iamResources;
    bool m_iamResourcesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
