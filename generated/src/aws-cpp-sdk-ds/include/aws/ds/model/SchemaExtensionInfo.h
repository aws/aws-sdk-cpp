/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SchemaExtensionInfo
  {
  public:
    AWS_DIRECTORYSERVICE_API SchemaExtensionInfo() = default;
    AWS_DIRECTORYSERVICE_API SchemaExtensionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API SchemaExtensionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the directory to which the schema extension is applied.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    SchemaExtensionInfo& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the schema extension.</p>
     */
    inline const Aws::String& GetSchemaExtensionId() const { return m_schemaExtensionId; }
    inline bool SchemaExtensionIdHasBeenSet() const { return m_schemaExtensionIdHasBeenSet; }
    template<typename SchemaExtensionIdT = Aws::String>
    void SetSchemaExtensionId(SchemaExtensionIdT&& value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId = std::forward<SchemaExtensionIdT>(value); }
    template<typename SchemaExtensionIdT = Aws::String>
    SchemaExtensionInfo& WithSchemaExtensionId(SchemaExtensionIdT&& value) { SetSchemaExtensionId(std::forward<SchemaExtensionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the schema extension.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SchemaExtensionInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the schema extension.</p>
     */
    inline SchemaExtensionStatus GetSchemaExtensionStatus() const { return m_schemaExtensionStatus; }
    inline bool SchemaExtensionStatusHasBeenSet() const { return m_schemaExtensionStatusHasBeenSet; }
    inline void SetSchemaExtensionStatus(SchemaExtensionStatus value) { m_schemaExtensionStatusHasBeenSet = true; m_schemaExtensionStatus = value; }
    inline SchemaExtensionInfo& WithSchemaExtensionStatus(SchemaExtensionStatus value) { SetSchemaExtensionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the <code>SchemaExtensionStatus</code>.</p>
     */
    inline const Aws::String& GetSchemaExtensionStatusReason() const { return m_schemaExtensionStatusReason; }
    inline bool SchemaExtensionStatusReasonHasBeenSet() const { return m_schemaExtensionStatusReasonHasBeenSet; }
    template<typename SchemaExtensionStatusReasonT = Aws::String>
    void SetSchemaExtensionStatusReason(SchemaExtensionStatusReasonT&& value) { m_schemaExtensionStatusReasonHasBeenSet = true; m_schemaExtensionStatusReason = std::forward<SchemaExtensionStatusReasonT>(value); }
    template<typename SchemaExtensionStatusReasonT = Aws::String>
    SchemaExtensionInfo& WithSchemaExtensionStatusReason(SchemaExtensionStatusReasonT&& value) { SetSchemaExtensionStatusReason(std::forward<SchemaExtensionStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the schema extension started being applied to the
     * directory.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    SchemaExtensionInfo& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the schema extension was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    SchemaExtensionInfo& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_schemaExtensionId;
    bool m_schemaExtensionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SchemaExtensionStatus m_schemaExtensionStatus{SchemaExtensionStatus::NOT_SET};
    bool m_schemaExtensionStatusHasBeenSet = false;

    Aws::String m_schemaExtensionStatusReason;
    bool m_schemaExtensionStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime{};
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime{};
    bool m_endDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
