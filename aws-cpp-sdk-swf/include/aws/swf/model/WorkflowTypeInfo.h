﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/WorkflowType.h>
#include <aws/swf/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Contains information about a workflow type.</p>
   */
  class AWS_SWF_API WorkflowTypeInfo
  {
  public:
    WorkflowTypeInfo();
    WorkflowTypeInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkflowTypeInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline WorkflowTypeInfo& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The workflow type this information is about.</p>
     */
    inline WorkflowTypeInfo& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline const RegistrationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline void SetStatus(const RegistrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline void SetStatus(RegistrationStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline WorkflowTypeInfo& WithStatus(const RegistrationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the workflow type.</p>
     */
    inline WorkflowTypeInfo& WithStatus(RegistrationStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline WorkflowTypeInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline WorkflowTypeInfo& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the type registered through
     * <a>RegisterWorkflowType</a>.</p>
     */
    inline WorkflowTypeInfo& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The date when this type was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date when this type was registered.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date when this type was registered.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date when this type was registered.</p>
     */
    inline WorkflowTypeInfo& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date when this type was registered.</p>
     */
    inline WorkflowTypeInfo& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const{ return m_deprecationDate; }

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline void SetDeprecationDate(const Aws::Utils::DateTime& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline void SetDeprecationDate(Aws::Utils::DateTime&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline WorkflowTypeInfo& WithDeprecationDate(const Aws::Utils::DateTime& value) { SetDeprecationDate(value); return *this;}

    /**
     * <p>If the type is in deprecated state, then it is set to the date when the type
     * was deprecated.</p>
     */
    inline WorkflowTypeInfo& WithDeprecationDate(Aws::Utils::DateTime&& value) { SetDeprecationDate(value); return *this;}

  private:
    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet;
    RegistrationStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
    Aws::Utils::DateTime m_deprecationDate;
    bool m_deprecationDateHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
