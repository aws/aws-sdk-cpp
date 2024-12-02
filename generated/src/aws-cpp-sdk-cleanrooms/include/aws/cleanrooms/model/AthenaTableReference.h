/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> A reference to a table within Athena.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AthenaTableReference">AWS
   * API Reference</a></p>
   */
  class AthenaTableReference
  {
  public:
    AWS_CLEANROOMS_API AthenaTableReference();
    AWS_CLEANROOMS_API AthenaTableReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AthenaTableReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The workgroup of the Athena table reference.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }
    inline AthenaTableReference& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}
    inline AthenaTableReference& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}
    inline AthenaTableReference& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The output location for the Athena table.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }
    inline AthenaTableReference& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}
    inline AthenaTableReference& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}
    inline AthenaTableReference& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The database name.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline AthenaTableReference& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline AthenaTableReference& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline AthenaTableReference& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table reference.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline AthenaTableReference& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline AthenaTableReference& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline AthenaTableReference& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}
  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
