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
#include <aws/ssm/model/OutputSource.h>
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
   * <p>Includes information about the specified association execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecutionTarget">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AssociationExecutionTarget
  {
  public:
    AssociationExecutionTarget();
    AssociationExecutionTarget(Aws::Utils::Json::JsonView jsonValue);
    AssociationExecutionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AssociationExecutionTarget& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline AssociationExecutionTarget& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline AssociationExecutionTarget& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


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
    inline AssociationExecutionTarget& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}

    /**
     * <p>The association version.</p>
     */
    inline AssociationExecutionTarget& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}

    /**
     * <p>The association version.</p>
     */
    inline AssociationExecutionTarget& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}


    /**
     * <p>The execution ID.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The execution ID.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>The execution ID.</p>
     */
    inline AssociationExecutionTarget& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The execution ID.</p>
     */
    inline AssociationExecutionTarget& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID.</p>
     */
    inline AssociationExecutionTarget& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The resource ID, for example, the instance ID where the association ran.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID, for example, the instance ID where the association ran.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource ID, for example, the instance ID where the association ran.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID, for example, the instance ID where the association ran.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID, for example, the instance ID where the association ran.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID, for example, the instance ID where the association ran.</p>
     */
    inline AssociationExecutionTarget& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID, for example, the instance ID where the association ran.</p>
     */
    inline AssociationExecutionTarget& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID, for example, the instance ID where the association ran.</p>
     */
    inline AssociationExecutionTarget& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The resource type, for example, instance.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type, for example, instance.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type, for example, instance.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type, for example, instance.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type, for example, instance.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type, for example, instance.</p>
     */
    inline AssociationExecutionTarget& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type, for example, instance.</p>
     */
    inline AssociationExecutionTarget& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type, for example, instance.</p>
     */
    inline AssociationExecutionTarget& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The association execution status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The association execution status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The association execution status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The association execution status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The association execution status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The association execution status.</p>
     */
    inline AssociationExecutionTarget& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The association execution status.</p>
     */
    inline AssociationExecutionTarget& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The association execution status.</p>
     */
    inline AssociationExecutionTarget& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline const Aws::String& GetDetailedStatus() const{ return m_detailedStatus; }

    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }

    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline void SetDetailedStatus(const Aws::String& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }

    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline void SetDetailedStatus(Aws::String&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }

    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline void SetDetailedStatus(const char* value) { m_detailedStatusHasBeenSet = true; m_detailedStatus.assign(value); }

    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline AssociationExecutionTarget& WithDetailedStatus(const Aws::String& value) { SetDetailedStatus(value); return *this;}

    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline AssociationExecutionTarget& WithDetailedStatus(Aws::String&& value) { SetDetailedStatus(std::move(value)); return *this;}

    /**
     * <p>Detailed information about the execution status.</p>
     */
    inline AssociationExecutionTarget& WithDetailedStatus(const char* value) { SetDetailedStatus(value); return *this;}


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
    inline AssociationExecutionTarget& WithLastExecutionDate(const Aws::Utils::DateTime& value) { SetLastExecutionDate(value); return *this;}

    /**
     * <p>The date of the last execution.</p>
     */
    inline AssociationExecutionTarget& WithLastExecutionDate(Aws::Utils::DateTime&& value) { SetLastExecutionDate(std::move(value)); return *this;}


    /**
     * <p>The location where the association details are saved.</p>
     */
    inline const OutputSource& GetOutputSource() const{ return m_outputSource; }

    /**
     * <p>The location where the association details are saved.</p>
     */
    inline bool OutputSourceHasBeenSet() const { return m_outputSourceHasBeenSet; }

    /**
     * <p>The location where the association details are saved.</p>
     */
    inline void SetOutputSource(const OutputSource& value) { m_outputSourceHasBeenSet = true; m_outputSource = value; }

    /**
     * <p>The location where the association details are saved.</p>
     */
    inline void SetOutputSource(OutputSource&& value) { m_outputSourceHasBeenSet = true; m_outputSource = std::move(value); }

    /**
     * <p>The location where the association details are saved.</p>
     */
    inline AssociationExecutionTarget& WithOutputSource(const OutputSource& value) { SetOutputSource(value); return *this;}

    /**
     * <p>The location where the association details are saved.</p>
     */
    inline AssociationExecutionTarget& WithOutputSource(OutputSource&& value) { SetOutputSource(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet;

    Aws::Utils::DateTime m_lastExecutionDate;
    bool m_lastExecutionDateHasBeenSet;

    OutputSource m_outputSource;
    bool m_outputSourceHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
