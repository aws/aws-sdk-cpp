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
namespace SSM
{
namespace Model
{

  /**
   * <p>Includes information about the specified association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecution">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AssociationExecution
  {
  public:
    AssociationExecution();
    AssociationExecution(Aws::Utils::Json::JsonView jsonValue);
    AssociationExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

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
    inline AssociationExecution& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline AssociationExecution& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline AssociationExecution& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The association version.</p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }

    /**
     * <p>The association version.</p>
     */
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }

    /**
     * <p>The association version.</p>
     */
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }

    /**
     * <p>The association version.</p>
     */
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }

    /**
     * <p>The association version.</p>
     */
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }

    /**
     * <p>The association version.</p>
     */
    inline AssociationExecution& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}

    /**
     * <p>The association version.</p>
     */
    inline AssociationExecution& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}

    /**
     * <p>The association version.</p>
     */
    inline AssociationExecution& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}


    /**
     * <p>The execution ID for the association.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The execution ID for the association.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>The execution ID for the association.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>The execution ID for the association.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>The execution ID for the association.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>The execution ID for the association.</p>
     */
    inline AssociationExecution& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The execution ID for the association.</p>
     */
    inline AssociationExecution& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID for the association.</p>
     */
    inline AssociationExecution& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The status of the association execution.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the association execution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the association execution.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the association execution.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the association execution.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the association execution.</p>
     */
    inline AssociationExecution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the association execution.</p>
     */
    inline AssociationExecution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the association execution.</p>
     */
    inline AssociationExecution& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline const Aws::String& GetDetailedStatus() const{ return m_detailedStatus; }

    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }

    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline void SetDetailedStatus(const Aws::String& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }

    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline void SetDetailedStatus(Aws::String&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }

    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline void SetDetailedStatus(const char* value) { m_detailedStatusHasBeenSet = true; m_detailedStatus.assign(value); }

    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline AssociationExecution& WithDetailedStatus(const Aws::String& value) { SetDetailedStatus(value); return *this;}

    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline AssociationExecution& WithDetailedStatus(Aws::String&& value) { SetDetailedStatus(std::move(value)); return *this;}

    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline AssociationExecution& WithDetailedStatus(const char* value) { SetDetailedStatus(value); return *this;}


    /**
     * <p>The time the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time the execution started.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time the execution started.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time the execution started.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time the execution started.</p>
     */
    inline AssociationExecution& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time the execution started.</p>
     */
    inline AssociationExecution& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The date of the last execution.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const{ return m_lastExecutionDate; }

    /**
     * <p>The date of the last execution.</p>
     */
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }

    /**
     * <p>The date of the last execution.</p>
     */
    inline void SetLastExecutionDate(const Aws::Utils::DateTime& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = value; }

    /**
     * <p>The date of the last execution.</p>
     */
    inline void SetLastExecutionDate(Aws::Utils::DateTime&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::move(value); }

    /**
     * <p>The date of the last execution.</p>
     */
    inline AssociationExecution& WithLastExecutionDate(const Aws::Utils::DateTime& value) { SetLastExecutionDate(value); return *this;}

    /**
     * <p>The date of the last execution.</p>
     */
    inline AssociationExecution& WithLastExecutionDate(Aws::Utils::DateTime&& value) { SetLastExecutionDate(std::move(value)); return *this;}


    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline const Aws::String& GetResourceCountByStatus() const{ return m_resourceCountByStatus; }

    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline bool ResourceCountByStatusHasBeenSet() const { return m_resourceCountByStatusHasBeenSet; }

    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline void SetResourceCountByStatus(const Aws::String& value) { m_resourceCountByStatusHasBeenSet = true; m_resourceCountByStatus = value; }

    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline void SetResourceCountByStatus(Aws::String&& value) { m_resourceCountByStatusHasBeenSet = true; m_resourceCountByStatus = std::move(value); }

    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline void SetResourceCountByStatus(const char* value) { m_resourceCountByStatusHasBeenSet = true; m_resourceCountByStatus.assign(value); }

    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline AssociationExecution& WithResourceCountByStatus(const Aws::String& value) { SetResourceCountByStatus(value); return *this;}

    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline AssociationExecution& WithResourceCountByStatus(Aws::String&& value) { SetResourceCountByStatus(std::move(value)); return *this;}

    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline AssociationExecution& WithResourceCountByStatus(const char* value) { SetResourceCountByStatus(value); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Utils::DateTime m_lastExecutionDate;
    bool m_lastExecutionDateHasBeenSet;

    Aws::String m_resourceCountByStatus;
    bool m_resourceCountByStatusHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
