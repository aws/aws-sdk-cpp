/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SelfGrantStatus.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details for the self granting status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SelfGrantStatusDetail">AWS
   * API Reference</a></p>
   */
  class SelfGrantStatusDetail
  {
  public:
    AWS_DATAZONE_API SelfGrantStatusDetail() = default;
    AWS_DATAZONE_API SelfGrantStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SelfGrantStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database used for the data source.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    SelfGrantStatusDetail& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for why the operation failed.</p>
     */
    inline const Aws::String& GetFailureCause() const { return m_failureCause; }
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }
    template<typename FailureCauseT = Aws::String>
    void SetFailureCause(FailureCauseT&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::forward<FailureCauseT>(value); }
    template<typename FailureCauseT = Aws::String>
    SelfGrantStatusDetail& WithFailureCause(FailureCauseT&& value) { SetFailureCause(std::forward<FailureCauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema used in the data source.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    SelfGrantStatusDetail& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The self granting status of the data source.</p>
     */
    inline SelfGrantStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SelfGrantStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SelfGrantStatusDetail& WithStatus(SelfGrantStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_failureCause;
    bool m_failureCauseHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    SelfGrantStatus m_status{SelfGrantStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
