/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/RegistrationStatus.h>
#include <aws/iotfleetwise/model/TimestreamRegistrationResponse.h>
#include <aws/iotfleetwise/model/IamRegistrationResponse.h>
#include <aws/core/utils/DateTime.h>
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
  class GetRegisterAccountStatusResult
  {
  public:
    AWS_IOTFLEETWISE_API GetRegisterAccountStatusResult() = default;
    AWS_IOTFLEETWISE_API GetRegisterAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetRegisterAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique ID of the Amazon Web Services account, provided at account
     * creation. </p>
     */
    inline const Aws::String& GetCustomerAccountId() const { return m_customerAccountId; }
    template<typename CustomerAccountIdT = Aws::String>
    void SetCustomerAccountId(CustomerAccountIdT&& value) { m_customerAccountIdHasBeenSet = true; m_customerAccountId = std::forward<CustomerAccountIdT>(value); }
    template<typename CustomerAccountIdT = Aws::String>
    GetRegisterAccountStatusResult& WithCustomerAccountId(CustomerAccountIdT&& value) { SetCustomerAccountId(std::forward<CustomerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of registering your account and resources. The status can be one
     * of:</p> <ul> <li> <p> <code>REGISTRATION_SUCCESS</code> - The Amazon Web
     * Services resource is successfully registered.</p> </li> <li> <p>
     * <code>REGISTRATION_PENDING</code> - Amazon Web Services IoT FleetWise is
     * processing the registration request. This process takes approximately five
     * minutes to complete.</p> </li> <li> <p> <code>REGISTRATION_FAILURE</code> -
     * Amazon Web Services IoT FleetWise can't register the AWS resource. Try again
     * later.</p> </li> </ul>
     */
    inline RegistrationStatus GetAccountStatus() const { return m_accountStatus; }
    inline void SetAccountStatus(RegistrationStatus value) { m_accountStatusHasBeenSet = true; m_accountStatus = value; }
    inline GetRegisterAccountStatusResult& WithAccountStatus(RegistrationStatus value) { SetAccountStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the registered Amazon Timestream resources or errors, if
     * any.</p>
     */
    inline const TimestreamRegistrationResponse& GetTimestreamRegistrationResponse() const { return m_timestreamRegistrationResponse; }
    template<typename TimestreamRegistrationResponseT = TimestreamRegistrationResponse>
    void SetTimestreamRegistrationResponse(TimestreamRegistrationResponseT&& value) { m_timestreamRegistrationResponseHasBeenSet = true; m_timestreamRegistrationResponse = std::forward<TimestreamRegistrationResponseT>(value); }
    template<typename TimestreamRegistrationResponseT = TimestreamRegistrationResponse>
    GetRegisterAccountStatusResult& WithTimestreamRegistrationResponse(TimestreamRegistrationResponseT&& value) { SetTimestreamRegistrationResponse(std::forward<TimestreamRegistrationResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the registered IAM resources or errors, if any. </p>
     */
    inline const IamRegistrationResponse& GetIamRegistrationResponse() const { return m_iamRegistrationResponse; }
    template<typename IamRegistrationResponseT = IamRegistrationResponse>
    void SetIamRegistrationResponse(IamRegistrationResponseT&& value) { m_iamRegistrationResponseHasBeenSet = true; m_iamRegistrationResponse = std::forward<IamRegistrationResponseT>(value); }
    template<typename IamRegistrationResponseT = IamRegistrationResponse>
    GetRegisterAccountStatusResult& WithIamRegistrationResponse(IamRegistrationResponseT&& value) { SetIamRegistrationResponse(std::forward<IamRegistrationResponseT>(value)); return *this;}
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
    GetRegisterAccountStatusResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    GetRegisterAccountStatusResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRegisterAccountStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerAccountId;
    bool m_customerAccountIdHasBeenSet = false;

    RegistrationStatus m_accountStatus{RegistrationStatus::NOT_SET};
    bool m_accountStatusHasBeenSet = false;

    TimestreamRegistrationResponse m_timestreamRegistrationResponse;
    bool m_timestreamRegistrationResponseHasBeenSet = false;

    IamRegistrationResponse m_iamRegistrationResponse;
    bool m_iamRegistrationResponseHasBeenSet = false;

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
