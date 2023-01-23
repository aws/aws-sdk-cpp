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
    AWS_IOTFLEETWISE_API GetRegisterAccountStatusResult();
    AWS_IOTFLEETWISE_API GetRegisterAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetRegisterAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The unique ID of the Amazon Web Services account, provided at account
     * creation. </p>
     */
    inline const Aws::String& GetCustomerAccountId() const{ return m_customerAccountId; }

    /**
     * <p> The unique ID of the Amazon Web Services account, provided at account
     * creation. </p>
     */
    inline void SetCustomerAccountId(const Aws::String& value) { m_customerAccountId = value; }

    /**
     * <p> The unique ID of the Amazon Web Services account, provided at account
     * creation. </p>
     */
    inline void SetCustomerAccountId(Aws::String&& value) { m_customerAccountId = std::move(value); }

    /**
     * <p> The unique ID of the Amazon Web Services account, provided at account
     * creation. </p>
     */
    inline void SetCustomerAccountId(const char* value) { m_customerAccountId.assign(value); }

    /**
     * <p> The unique ID of the Amazon Web Services account, provided at account
     * creation. </p>
     */
    inline GetRegisterAccountStatusResult& WithCustomerAccountId(const Aws::String& value) { SetCustomerAccountId(value); return *this;}

    /**
     * <p> The unique ID of the Amazon Web Services account, provided at account
     * creation. </p>
     */
    inline GetRegisterAccountStatusResult& WithCustomerAccountId(Aws::String&& value) { SetCustomerAccountId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of the Amazon Web Services account, provided at account
     * creation. </p>
     */
    inline GetRegisterAccountStatusResult& WithCustomerAccountId(const char* value) { SetCustomerAccountId(value); return *this;}


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
    inline const RegistrationStatus& GetAccountStatus() const{ return m_accountStatus; }

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
    inline void SetAccountStatus(const RegistrationStatus& value) { m_accountStatus = value; }

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
    inline void SetAccountStatus(RegistrationStatus&& value) { m_accountStatus = std::move(value); }

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
    inline GetRegisterAccountStatusResult& WithAccountStatus(const RegistrationStatus& value) { SetAccountStatus(value); return *this;}

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
    inline GetRegisterAccountStatusResult& WithAccountStatus(RegistrationStatus&& value) { SetAccountStatus(std::move(value)); return *this;}


    /**
     * <p> Information about the registered Amazon Timestream resources or errors, if
     * any.</p>
     */
    inline const TimestreamRegistrationResponse& GetTimestreamRegistrationResponse() const{ return m_timestreamRegistrationResponse; }

    /**
     * <p> Information about the registered Amazon Timestream resources or errors, if
     * any.</p>
     */
    inline void SetTimestreamRegistrationResponse(const TimestreamRegistrationResponse& value) { m_timestreamRegistrationResponse = value; }

    /**
     * <p> Information about the registered Amazon Timestream resources or errors, if
     * any.</p>
     */
    inline void SetTimestreamRegistrationResponse(TimestreamRegistrationResponse&& value) { m_timestreamRegistrationResponse = std::move(value); }

    /**
     * <p> Information about the registered Amazon Timestream resources or errors, if
     * any.</p>
     */
    inline GetRegisterAccountStatusResult& WithTimestreamRegistrationResponse(const TimestreamRegistrationResponse& value) { SetTimestreamRegistrationResponse(value); return *this;}

    /**
     * <p> Information about the registered Amazon Timestream resources or errors, if
     * any.</p>
     */
    inline GetRegisterAccountStatusResult& WithTimestreamRegistrationResponse(TimestreamRegistrationResponse&& value) { SetTimestreamRegistrationResponse(std::move(value)); return *this;}


    /**
     * <p> Information about the registered IAM resources or errors, if any. </p>
     */
    inline const IamRegistrationResponse& GetIamRegistrationResponse() const{ return m_iamRegistrationResponse; }

    /**
     * <p> Information about the registered IAM resources or errors, if any. </p>
     */
    inline void SetIamRegistrationResponse(const IamRegistrationResponse& value) { m_iamRegistrationResponse = value; }

    /**
     * <p> Information about the registered IAM resources or errors, if any. </p>
     */
    inline void SetIamRegistrationResponse(IamRegistrationResponse&& value) { m_iamRegistrationResponse = std::move(value); }

    /**
     * <p> Information about the registered IAM resources or errors, if any. </p>
     */
    inline GetRegisterAccountStatusResult& WithIamRegistrationResponse(const IamRegistrationResponse& value) { SetIamRegistrationResponse(value); return *this;}

    /**
     * <p> Information about the registered IAM resources or errors, if any. </p>
     */
    inline GetRegisterAccountStatusResult& WithIamRegistrationResponse(IamRegistrationResponse&& value) { SetIamRegistrationResponse(std::move(value)); return *this;}


    /**
     * <p> The time the account was registered, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time the account was registered, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p> The time the account was registered, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p> The time the account was registered, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline GetRegisterAccountStatusResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time the account was registered, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline GetRegisterAccountStatusResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The time this registration was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p> The time this registration was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p> The time this registration was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p> The time this registration was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline GetRegisterAccountStatusResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p> The time this registration was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline GetRegisterAccountStatusResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_customerAccountId;

    RegistrationStatus m_accountStatus;

    TimestreamRegistrationResponse m_timestreamRegistrationResponse;

    IamRegistrationResponse m_iamRegistrationResponse;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
