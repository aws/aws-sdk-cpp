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
    AWS_IOTFLEETWISE_API TimestreamRegistrationResponse() = default;
    AWS_IOTFLEETWISE_API TimestreamRegistrationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimestreamRegistrationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Timestream database.</p>
     */
    inline const Aws::String& GetTimestreamDatabaseName() const { return m_timestreamDatabaseName; }
    inline bool TimestreamDatabaseNameHasBeenSet() const { return m_timestreamDatabaseNameHasBeenSet; }
    template<typename TimestreamDatabaseNameT = Aws::String>
    void SetTimestreamDatabaseName(TimestreamDatabaseNameT&& value) { m_timestreamDatabaseNameHasBeenSet = true; m_timestreamDatabaseName = std::forward<TimestreamDatabaseNameT>(value); }
    template<typename TimestreamDatabaseNameT = Aws::String>
    TimestreamRegistrationResponse& WithTimestreamDatabaseName(TimestreamDatabaseNameT&& value) { SetTimestreamDatabaseName(std::forward<TimestreamDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Timestream database table.</p>
     */
    inline const Aws::String& GetTimestreamTableName() const { return m_timestreamTableName; }
    inline bool TimestreamTableNameHasBeenSet() const { return m_timestreamTableNameHasBeenSet; }
    template<typename TimestreamTableNameT = Aws::String>
    void SetTimestreamTableName(TimestreamTableNameT&& value) { m_timestreamTableNameHasBeenSet = true; m_timestreamTableName = std::forward<TimestreamTableNameT>(value); }
    template<typename TimestreamTableNameT = Aws::String>
    TimestreamRegistrationResponse& WithTimestreamTableName(TimestreamTableNameT&& value) { SetTimestreamTableName(std::forward<TimestreamTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Timestream database.</p>
     */
    inline const Aws::String& GetTimestreamDatabaseArn() const { return m_timestreamDatabaseArn; }
    inline bool TimestreamDatabaseArnHasBeenSet() const { return m_timestreamDatabaseArnHasBeenSet; }
    template<typename TimestreamDatabaseArnT = Aws::String>
    void SetTimestreamDatabaseArn(TimestreamDatabaseArnT&& value) { m_timestreamDatabaseArnHasBeenSet = true; m_timestreamDatabaseArn = std::forward<TimestreamDatabaseArnT>(value); }
    template<typename TimestreamDatabaseArnT = Aws::String>
    TimestreamRegistrationResponse& WithTimestreamDatabaseArn(TimestreamDatabaseArnT&& value) { SetTimestreamDatabaseArn(std::forward<TimestreamDatabaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Timestream database table.</p>
     */
    inline const Aws::String& GetTimestreamTableArn() const { return m_timestreamTableArn; }
    inline bool TimestreamTableArnHasBeenSet() const { return m_timestreamTableArnHasBeenSet; }
    template<typename TimestreamTableArnT = Aws::String>
    void SetTimestreamTableArn(TimestreamTableArnT&& value) { m_timestreamTableArnHasBeenSet = true; m_timestreamTableArn = std::forward<TimestreamTableArnT>(value); }
    template<typename TimestreamTableArnT = Aws::String>
    TimestreamRegistrationResponse& WithTimestreamTableArn(TimestreamTableArnT&& value) { SetTimestreamTableArn(std::forward<TimestreamTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of registering your Amazon Timestream resources. The status can be
     * one of <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline RegistrationStatus GetRegistrationStatus() const { return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(RegistrationStatus value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline TimestreamRegistrationResponse& WithRegistrationStatus(RegistrationStatus value) { SetRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message associated with a registration error.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    TimestreamRegistrationResponse& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timestreamDatabaseName;
    bool m_timestreamDatabaseNameHasBeenSet = false;

    Aws::String m_timestreamTableName;
    bool m_timestreamTableNameHasBeenSet = false;

    Aws::String m_timestreamDatabaseArn;
    bool m_timestreamDatabaseArnHasBeenSet = false;

    Aws::String m_timestreamTableArn;
    bool m_timestreamTableArnHasBeenSet = false;

    RegistrationStatus m_registrationStatus{RegistrationStatus::NOT_SET};
    bool m_registrationStatusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
