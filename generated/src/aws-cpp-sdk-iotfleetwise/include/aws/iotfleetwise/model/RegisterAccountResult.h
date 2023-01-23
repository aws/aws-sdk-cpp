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
    AWS_IOTFLEETWISE_API RegisterAccountResult();
    AWS_IOTFLEETWISE_API RegisterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API RegisterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The status of registering your Amazon Web Services account, IAM role, and
     * Timestream resources. </p>
     */
    inline const RegistrationStatus& GetRegisterAccountStatus() const{ return m_registerAccountStatus; }

    /**
     * <p> The status of registering your Amazon Web Services account, IAM role, and
     * Timestream resources. </p>
     */
    inline void SetRegisterAccountStatus(const RegistrationStatus& value) { m_registerAccountStatus = value; }

    /**
     * <p> The status of registering your Amazon Web Services account, IAM role, and
     * Timestream resources. </p>
     */
    inline void SetRegisterAccountStatus(RegistrationStatus&& value) { m_registerAccountStatus = std::move(value); }

    /**
     * <p> The status of registering your Amazon Web Services account, IAM role, and
     * Timestream resources. </p>
     */
    inline RegisterAccountResult& WithRegisterAccountStatus(const RegistrationStatus& value) { SetRegisterAccountStatus(value); return *this;}

    /**
     * <p> The status of registering your Amazon Web Services account, IAM role, and
     * Timestream resources. </p>
     */
    inline RegisterAccountResult& WithRegisterAccountStatus(RegistrationStatus&& value) { SetRegisterAccountStatus(std::move(value)); return *this;}


    
    inline const TimestreamResources& GetTimestreamResources() const{ return m_timestreamResources; }

    
    inline void SetTimestreamResources(const TimestreamResources& value) { m_timestreamResources = value; }

    
    inline void SetTimestreamResources(TimestreamResources&& value) { m_timestreamResources = std::move(value); }

    
    inline RegisterAccountResult& WithTimestreamResources(const TimestreamResources& value) { SetTimestreamResources(value); return *this;}

    
    inline RegisterAccountResult& WithTimestreamResources(TimestreamResources&& value) { SetTimestreamResources(std::move(value)); return *this;}


    /**
     * <p> The registered IAM resource that allows Amazon Web Services IoT FleetWise to
     * send data to Amazon Timestream. </p>
     */
    inline const IamResources& GetIamResources() const{ return m_iamResources; }

    /**
     * <p> The registered IAM resource that allows Amazon Web Services IoT FleetWise to
     * send data to Amazon Timestream. </p>
     */
    inline void SetIamResources(const IamResources& value) { m_iamResources = value; }

    /**
     * <p> The registered IAM resource that allows Amazon Web Services IoT FleetWise to
     * send data to Amazon Timestream. </p>
     */
    inline void SetIamResources(IamResources&& value) { m_iamResources = std::move(value); }

    /**
     * <p> The registered IAM resource that allows Amazon Web Services IoT FleetWise to
     * send data to Amazon Timestream. </p>
     */
    inline RegisterAccountResult& WithIamResources(const IamResources& value) { SetIamResources(value); return *this;}

    /**
     * <p> The registered IAM resource that allows Amazon Web Services IoT FleetWise to
     * send data to Amazon Timestream. </p>
     */
    inline RegisterAccountResult& WithIamResources(IamResources&& value) { SetIamResources(std::move(value)); return *this;}


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
    inline RegisterAccountResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time the account was registered, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline RegisterAccountResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline RegisterAccountResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p> The time this registration was last updated, in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline RegisterAccountResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    RegistrationStatus m_registerAccountStatus;

    TimestreamResources m_timestreamResources;

    IamResources m_iamResources;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
