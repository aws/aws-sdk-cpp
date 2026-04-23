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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/SchemaExtensionStatus.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Information about a schema extension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/SchemaExtensionInfo">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API SchemaExtensionInfo
  {
  public:
    SchemaExtensionInfo();
    SchemaExtensionInfo(Aws::Utils::Json::JsonView jsonValue);
    SchemaExtensionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline SchemaExtensionInfo& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline SchemaExtensionInfo& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline SchemaExtensionInfo& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline const Aws::String& GetSchemaExtensionId() const{ return m_schemaExtensionId; }

    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline bool SchemaExtensionIdHasBeenSet() const { return m_schemaExtensionIdHasBeenSet; }

    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline void SetSchemaExtensionId(const Aws::String& value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId = value; }

    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline void SetSchemaExtensionId(Aws::String&& value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId = std::move(value); }

    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline void SetSchemaExtensionId(const char* value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId.assign(value); }

    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline SchemaExtensionInfo& WithSchemaExtensionId(const Aws::String& value) { SetSchemaExtensionId(value); return *this;}

    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline SchemaExtensionInfo& WithSchemaExtensionId(Aws::String&& value) { SetSchemaExtensionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline SchemaExtensionInfo& WithSchemaExtensionId(const char* value) { SetSchemaExtensionId(value); return *this;}


    /**
     * <p>A description of the schema extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline SchemaExtensionInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the schema extension.</p>
     */
    inline SchemaExtensionInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the schema extension.</p>
     */
    inline SchemaExtensionInfo& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the schema extension.</p>
     */
    inline const SchemaExtensionStatus& GetSchemaExtensionStatus() const{ return m_schemaExtensionStatus; }

    /**
     * <p>The current status of the schema extension.</p>
     */
    inline bool SchemaExtensionStatusHasBeenSet() const { return m_schemaExtensionStatusHasBeenSet; }

    /**
     * <p>The current status of the schema extension.</p>
     */
    inline void SetSchemaExtensionStatus(const SchemaExtensionStatus& value) { m_schemaExtensionStatusHasBeenSet = true; m_schemaExtensionStatus = value; }

    /**
     * <p>The current status of the schema extension.</p>
     */
    inline void SetSchemaExtensionStatus(SchemaExtensionStatus&& value) { m_schemaExtensionStatusHasBeenSet = true; m_schemaExtensionStatus = std::move(value); }

    /**
     * <p>The current status of the schema extension.</p>
     */
    inline SchemaExtensionInfo& WithSchemaExtensionStatus(const SchemaExtensionStatus& value) { SetSchemaExtensionStatus(value); return *this;}

    /**
     * <p>The current status of the schema extension.</p>
     */
    inline SchemaExtensionInfo& WithSchemaExtensionStatus(SchemaExtensionStatus&& value) { SetSchemaExtensionStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline const Aws::String& GetSchemaExtensionStatusReason() const{ return m_schemaExtensionStatusReason; }

    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline bool SchemaExtensionStatusReasonHasBeenSet() const { return m_schemaExtensionStatusReasonHasBeenSet; }

    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline void SetSchemaExtensionStatusReason(const Aws::String& value) { m_schemaExtensionStatusReasonHasBeenSet = true; m_schemaExtensionStatusReason = value; }

    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline void SetSchemaExtensionStatusReason(Aws::String&& value) { m_schemaExtensionStatusReasonHasBeenSet = true; m_schemaExtensionStatusReason = std::move(value); }

    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline void SetSchemaExtensionStatusReason(const char* value) { m_schemaExtensionStatusReasonHasBeenSet = true; m_schemaExtensionStatusReason.assign(value); }

    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline SchemaExtensionInfo& WithSchemaExtensionStatusReason(const Aws::String& value) { SetSchemaExtensionStatusReason(value); return *this;}

    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline SchemaExtensionInfo& WithSchemaExtensionStatusReason(Aws::String&& value) { SetSchemaExtensionStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline SchemaExtensionInfo& WithSchemaExtensionStatusReason(const char* value) { SetSchemaExtensionStatusReason(value); return *this;}


    /**
     * <p>The date and time that the schema extension started being applied to the
     * directory.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date and time that the schema extension started being applied to the
     * directory.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the schema extension started being applied to the
     * directory.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date and time that the schema extension started being applied to the
     * directory.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date and time that the schema extension started being applied to the
     * directory.</p>
     */
    inline SchemaExtensionInfo& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time that the schema extension started being applied to the
     * directory.</p>
     */
    inline SchemaExtensionInfo& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the schema extension was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time that the schema extension was completed.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the schema extension was completed.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time that the schema extension was completed.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time that the schema extension was completed.</p>
     */
    inline SchemaExtensionInfo& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time that the schema extension was completed.</p>
     */
    inline SchemaExtensionInfo& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_schemaExtensionId;
    bool m_schemaExtensionIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    SchemaExtensionStatus m_schemaExtensionStatus;
    bool m_schemaExtensionStatusHasBeenSet;

    Aws::String m_schemaExtensionStatusReason;
    bool m_schemaExtensionStatusReasonHasBeenSet;

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
