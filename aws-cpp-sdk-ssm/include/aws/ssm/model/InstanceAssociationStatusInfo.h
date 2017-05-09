/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/InstanceAssociationOutputUrl.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Status information about the instance association.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAssociationStatusInfo">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstanceAssociationStatusInfo
  {
  public:
    InstanceAssociationStatusInfo();
    InstanceAssociationStatusInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceAssociationStatusInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID.</p>
     */
    inline InstanceAssociationStatusInfo& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline InstanceAssociationStatusInfo& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline InstanceAssociationStatusInfo& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

    /**
     * <p>The name of the association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the association.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the association.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the association.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the association.</p>
     */
    inline InstanceAssociationStatusInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the association.</p>
     */
    inline InstanceAssociationStatusInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the association.</p>
     */
    inline InstanceAssociationStatusInfo& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The association document verions.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The association document verions.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The association document verions.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The association document verions.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The association document verions.</p>
     */
    inline InstanceAssociationStatusInfo& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The association document verions.</p>
     */
    inline InstanceAssociationStatusInfo& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The association document verions.</p>
     */
    inline InstanceAssociationStatusInfo& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The instance ID where the association was created.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID where the association was created.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID where the association was created.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID where the association was created.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID where the association was created.</p>
     */
    inline InstanceAssociationStatusInfo& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID where the association was created.</p>
     */
    inline InstanceAssociationStatusInfo& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID where the association was created.</p>
     */
    inline InstanceAssociationStatusInfo& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The date the instance association executed. </p>
     */
    inline const Aws::Utils::DateTime& GetExecutionDate() const{ return m_executionDate; }

    /**
     * <p>The date the instance association executed. </p>
     */
    inline void SetExecutionDate(const Aws::Utils::DateTime& value) { m_executionDateHasBeenSet = true; m_executionDate = value; }

    /**
     * <p>The date the instance association executed. </p>
     */
    inline void SetExecutionDate(Aws::Utils::DateTime&& value) { m_executionDateHasBeenSet = true; m_executionDate = std::move(value); }

    /**
     * <p>The date the instance association executed. </p>
     */
    inline InstanceAssociationStatusInfo& WithExecutionDate(const Aws::Utils::DateTime& value) { SetExecutionDate(value); return *this;}

    /**
     * <p>The date the instance association executed. </p>
     */
    inline InstanceAssociationStatusInfo& WithExecutionDate(Aws::Utils::DateTime&& value) { SetExecutionDate(std::move(value)); return *this;}

    /**
     * <p>Status information about the instance association.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Status information about the instance association.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status information about the instance association.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status information about the instance association.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Status information about the instance association.</p>
     */
    inline InstanceAssociationStatusInfo& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Status information about the instance association.</p>
     */
    inline InstanceAssociationStatusInfo& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Status information about the instance association.</p>
     */
    inline InstanceAssociationStatusInfo& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>Detailed status information about the instance association.</p>
     */
    inline const Aws::String& GetDetailedStatus() const{ return m_detailedStatus; }

    /**
     * <p>Detailed status information about the instance association.</p>
     */
    inline void SetDetailedStatus(const Aws::String& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }

    /**
     * <p>Detailed status information about the instance association.</p>
     */
    inline void SetDetailedStatus(Aws::String&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }

    /**
     * <p>Detailed status information about the instance association.</p>
     */
    inline void SetDetailedStatus(const char* value) { m_detailedStatusHasBeenSet = true; m_detailedStatus.assign(value); }

    /**
     * <p>Detailed status information about the instance association.</p>
     */
    inline InstanceAssociationStatusInfo& WithDetailedStatus(const Aws::String& value) { SetDetailedStatus(value); return *this;}

    /**
     * <p>Detailed status information about the instance association.</p>
     */
    inline InstanceAssociationStatusInfo& WithDetailedStatus(Aws::String&& value) { SetDetailedStatus(std::move(value)); return *this;}

    /**
     * <p>Detailed status information about the instance association.</p>
     */
    inline InstanceAssociationStatusInfo& WithDetailedStatus(const char* value) { SetDetailedStatus(value); return *this;}

    /**
     * <p>Summary information about association execution.</p>
     */
    inline const Aws::String& GetExecutionSummary() const{ return m_executionSummary; }

    /**
     * <p>Summary information about association execution.</p>
     */
    inline void SetExecutionSummary(const Aws::String& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = value; }

    /**
     * <p>Summary information about association execution.</p>
     */
    inline void SetExecutionSummary(Aws::String&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::move(value); }

    /**
     * <p>Summary information about association execution.</p>
     */
    inline void SetExecutionSummary(const char* value) { m_executionSummaryHasBeenSet = true; m_executionSummary.assign(value); }

    /**
     * <p>Summary information about association execution.</p>
     */
    inline InstanceAssociationStatusInfo& WithExecutionSummary(const Aws::String& value) { SetExecutionSummary(value); return *this;}

    /**
     * <p>Summary information about association execution.</p>
     */
    inline InstanceAssociationStatusInfo& WithExecutionSummary(Aws::String&& value) { SetExecutionSummary(std::move(value)); return *this;}

    /**
     * <p>Summary information about association execution.</p>
     */
    inline InstanceAssociationStatusInfo& WithExecutionSummary(const char* value) { SetExecutionSummary(value); return *this;}

    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline InstanceAssociationStatusInfo& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline InstanceAssociationStatusInfo& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline InstanceAssociationStatusInfo& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

    /**
     * <p>A URL for an Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline const InstanceAssociationOutputUrl& GetOutputUrl() const{ return m_outputUrl; }

    /**
     * <p>A URL for an Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline void SetOutputUrl(const InstanceAssociationOutputUrl& value) { m_outputUrlHasBeenSet = true; m_outputUrl = value; }

    /**
     * <p>A URL for an Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline void SetOutputUrl(InstanceAssociationOutputUrl&& value) { m_outputUrlHasBeenSet = true; m_outputUrl = std::move(value); }

    /**
     * <p>A URL for an Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline InstanceAssociationStatusInfo& WithOutputUrl(const InstanceAssociationOutputUrl& value) { SetOutputUrl(value); return *this;}

    /**
     * <p>A URL for an Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline InstanceAssociationStatusInfo& WithOutputUrl(InstanceAssociationOutputUrl&& value) { SetOutputUrl(std::move(value)); return *this;}

  private:
    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::Utils::DateTime m_executionDate;
    bool m_executionDateHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet;
    Aws::String m_executionSummary;
    bool m_executionSummaryHasBeenSet;
    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;
    InstanceAssociationOutputUrl m_outputUrl;
    bool m_outputUrlHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
