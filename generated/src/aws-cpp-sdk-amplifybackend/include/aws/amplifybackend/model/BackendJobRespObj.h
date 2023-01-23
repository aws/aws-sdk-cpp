/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The response object for this operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendJobRespObj">AWS
   * API Reference</a></p>
   */
  class BackendJobRespObj
  {
  public:
    AWS_AMPLIFYBACKEND_API BackendJobRespObj();
    AWS_AMPLIFYBACKEND_API BackendJobRespObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendJobRespObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The app ID.</p>
     */
    inline BackendJobRespObj& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline BackendJobRespObj& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline BackendJobRespObj& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const{ return m_backendEnvironmentName; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline bool BackendEnvironmentNameHasBeenSet() const { return m_backendEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(const Aws::String& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = value; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(Aws::String&& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = std::move(value); }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(const char* value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName.assign(value); }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline BackendJobRespObj& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline BackendJobRespObj& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline BackendJobRespObj& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}


    /**
     * <p>The time when the job was created.</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time when the job was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time when the job was created.</p>
     */
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time when the job was created.</p>
     */
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time when the job was created.</p>
     */
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }

    /**
     * <p>The time when the job was created.</p>
     */
    inline BackendJobRespObj& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time when the job was created.</p>
     */
    inline BackendJobRespObj& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}

    /**
     * <p>The time when the job was created.</p>
     */
    inline BackendJobRespObj& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}


    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline BackendJobRespObj& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline BackendJobRespObj& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>If the request fails, this error is returned.</p>
     */
    inline BackendJobRespObj& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>The ID for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for the job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID for the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID for the job.</p>
     */
    inline BackendJobRespObj& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for the job.</p>
     */
    inline BackendJobRespObj& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for the job.</p>
     */
    inline BackendJobRespObj& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name of the operation.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }

    /**
     * <p>The name of the operation.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The name of the operation.</p>
     */
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The name of the operation.</p>
     */
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The name of the operation.</p>
     */
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    /**
     * <p>The name of the operation.</p>
     */
    inline BackendJobRespObj& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>The name of the operation.</p>
     */
    inline BackendJobRespObj& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>The name of the operation.</p>
     */
    inline BackendJobRespObj& WithOperation(const char* value) { SetOperation(value); return *this;}


    /**
     * <p>The current status of the request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the request.</p>
     */
    inline BackendJobRespObj& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the request.</p>
     */
    inline BackendJobRespObj& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the request.</p>
     */
    inline BackendJobRespObj& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The time when the job was last updated.</p>
     */
    inline const Aws::String& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time when the job was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time when the job was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::String& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time when the job was last updated.</p>
     */
    inline void SetUpdateTime(Aws::String&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time when the job was last updated.</p>
     */
    inline void SetUpdateTime(const char* value) { m_updateTimeHasBeenSet = true; m_updateTime.assign(value); }

    /**
     * <p>The time when the job was last updated.</p>
     */
    inline BackendJobRespObj& WithUpdateTime(const Aws::String& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time when the job was last updated.</p>
     */
    inline BackendJobRespObj& WithUpdateTime(Aws::String&& value) { SetUpdateTime(std::move(value)); return *this;}

    /**
     * <p>The time when the job was last updated.</p>
     */
    inline BackendJobRespObj& WithUpdateTime(const char* value) { SetUpdateTime(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_backendEnvironmentName;
    bool m_backendEnvironmentNameHasBeenSet = false;

    Aws::String m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
