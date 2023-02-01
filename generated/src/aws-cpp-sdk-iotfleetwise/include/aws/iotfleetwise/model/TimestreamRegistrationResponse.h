/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/RegistrationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about the registered Amazon Timestream resources or errors, if
   * any.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/TimestreamRegistrationResponse">AWS
   * API Reference</a></p>
   */
  class TimestreamRegistrationResponse
  {
  public:
    AWS_IOTFLEETWISE_API TimestreamRegistrationResponse();
    AWS_IOTFLEETWISE_API TimestreamRegistrationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimestreamRegistrationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Timestream database.</p>
     */
    inline const Aws::String& GetTimestreamDatabaseName() const{ return m_timestreamDatabaseName; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline bool TimestreamDatabaseNameHasBeenSet() const { return m_timestreamDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetTimestreamDatabaseName(const Aws::String& value) { m_timestreamDatabaseNameHasBeenSet = true; m_timestreamDatabaseName = value; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetTimestreamDatabaseName(Aws::String&& value) { m_timestreamDatabaseNameHasBeenSet = true; m_timestreamDatabaseName = std::move(value); }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetTimestreamDatabaseName(const char* value) { m_timestreamDatabaseNameHasBeenSet = true; m_timestreamDatabaseName.assign(value); }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamDatabaseName(const Aws::String& value) { SetTimestreamDatabaseName(value); return *this;}

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamDatabaseName(Aws::String&& value) { SetTimestreamDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamDatabaseName(const char* value) { SetTimestreamDatabaseName(value); return *this;}


    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline const Aws::String& GetTimestreamTableName() const{ return m_timestreamTableName; }

    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline bool TimestreamTableNameHasBeenSet() const { return m_timestreamTableNameHasBeenSet; }

    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline void SetTimestreamTableName(const Aws::String& value) { m_timestreamTableNameHasBeenSet = true; m_timestreamTableName = value; }

    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline void SetTimestreamTableName(Aws::String&& value) { m_timestreamTableNameHasBeenSet = true; m_timestreamTableName = std::move(value); }

    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline void SetTimestreamTableName(const char* value) { m_timestreamTableNameHasBeenSet = true; m_timestreamTableName.assign(value); }

    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamTableName(const Aws::String& value) { SetTimestreamTableName(value); return *this;}

    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamTableName(Aws::String&& value) { SetTimestreamTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamTableName(const char* value) { SetTimestreamTableName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline const Aws::String& GetTimestreamDatabaseArn() const{ return m_timestreamDatabaseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline bool TimestreamDatabaseArnHasBeenSet() const { return m_timestreamDatabaseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline void SetTimestreamDatabaseArn(const Aws::String& value) { m_timestreamDatabaseArnHasBeenSet = true; m_timestreamDatabaseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline void SetTimestreamDatabaseArn(Aws::String&& value) { m_timestreamDatabaseArnHasBeenSet = true; m_timestreamDatabaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline void SetTimestreamDatabaseArn(const char* value) { m_timestreamDatabaseArnHasBeenSet = true; m_timestreamDatabaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamDatabaseArn(const Aws::String& value) { SetTimestreamDatabaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamDatabaseArn(Aws::String&& value) { SetTimestreamDatabaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamDatabaseArn(const char* value) { SetTimestreamDatabaseArn(value); return *this;}


    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline const Aws::String& GetTimestreamTableArn() const{ return m_timestreamTableArn; }

    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline bool TimestreamTableArnHasBeenSet() const { return m_timestreamTableArnHasBeenSet; }

    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline void SetTimestreamTableArn(const Aws::String& value) { m_timestreamTableArnHasBeenSet = true; m_timestreamTableArn = value; }

    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline void SetTimestreamTableArn(Aws::String&& value) { m_timestreamTableArnHasBeenSet = true; m_timestreamTableArn = std::move(value); }

    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline void SetTimestreamTableArn(const char* value) { m_timestreamTableArnHasBeenSet = true; m_timestreamTableArn.assign(value); }

    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamTableArn(const Aws::String& value) { SetTimestreamTableArn(value); return *this;}

    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamTableArn(Aws::String&& value) { SetTimestreamTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline TimestreamRegistrationResponse& WithTimestreamTableArn(const char* value) { SetTimestreamTableArn(value); return *this;}


    /**
     * <p>The status of registering your Amazon Timestream resources. The status can be
     * one of <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }

    /**
     * <p>The status of registering your Amazon Timestream resources. The status can be
     * one of <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }

    /**
     * <p>The status of registering your Amazon Timestream resources. The status can be
     * one of <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }

    /**
     * <p>The status of registering your Amazon Timestream resources. The status can be
     * one of <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline void SetRegistrationStatus(RegistrationStatus&& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = std::move(value); }

    /**
     * <p>The status of registering your Amazon Timestream resources. The status can be
     * one of <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline TimestreamRegistrationResponse& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}

    /**
     * <p>The status of registering your Amazon Timestream resources. The status can be
     * one of <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline TimestreamRegistrationResponse& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(std::move(value)); return *this;}


    /**
     * <p>A message associated with a registration error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline TimestreamRegistrationResponse& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline TimestreamRegistrationResponse& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline TimestreamRegistrationResponse& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_timestreamDatabaseName;
    bool m_timestreamDatabaseNameHasBeenSet = false;

    Aws::String m_timestreamTableName;
    bool m_timestreamTableNameHasBeenSet = false;

    Aws::String m_timestreamDatabaseArn;
    bool m_timestreamDatabaseArnHasBeenSet = false;

    Aws::String m_timestreamTableArn;
    bool m_timestreamTableArnHasBeenSet = false;

    RegistrationStatus m_registrationStatus;
    bool m_registrationStatusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
