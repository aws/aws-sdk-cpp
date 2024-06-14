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
    AWS_DATAZONE_API SelfGrantStatusDetail();
    AWS_DATAZONE_API SelfGrantStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SelfGrantStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database used for the data source.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline SelfGrantStatusDetail& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline SelfGrantStatusDetail& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline SelfGrantStatusDetail& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for why the operation failed.</p>
     */
    inline const Aws::String& GetFailureCause() const{ return m_failureCause; }
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }
    inline void SetFailureCause(const Aws::String& value) { m_failureCauseHasBeenSet = true; m_failureCause = value; }
    inline void SetFailureCause(Aws::String&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::move(value); }
    inline void SetFailureCause(const char* value) { m_failureCauseHasBeenSet = true; m_failureCause.assign(value); }
    inline SelfGrantStatusDetail& WithFailureCause(const Aws::String& value) { SetFailureCause(value); return *this;}
    inline SelfGrantStatusDetail& WithFailureCause(Aws::String&& value) { SetFailureCause(std::move(value)); return *this;}
    inline SelfGrantStatusDetail& WithFailureCause(const char* value) { SetFailureCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema used in the data source.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }
    inline SelfGrantStatusDetail& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline SelfGrantStatusDetail& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline SelfGrantStatusDetail& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The self granting status of the data source.</p>
     */
    inline const SelfGrantStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SelfGrantStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SelfGrantStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SelfGrantStatusDetail& WithStatus(const SelfGrantStatus& value) { SetStatus(value); return *this;}
    inline SelfGrantStatusDetail& WithStatus(SelfGrantStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_failureCause;
    bool m_failureCauseHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    SelfGrantStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
