/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an Amazon Redshift data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RedshiftSource">AWS
   * API Reference</a></p>
   */
  class RedshiftSource
  {
  public:
    AWS_GLUE_API RedshiftSource();
    AWS_GLUE_API RedshiftSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RedshiftSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Redshift data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RedshiftSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RedshiftSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RedshiftSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database to read from.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline RedshiftSource& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline RedshiftSource& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline RedshiftSource& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database table to read from.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }
    inline RedshiftSource& WithTable(const Aws::String& value) { SetTable(value); return *this;}
    inline RedshiftSource& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}
    inline RedshiftSource& WithTable(const char* value) { SetTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline const Aws::String& GetRedshiftTmpDir() const{ return m_redshiftTmpDir; }
    inline bool RedshiftTmpDirHasBeenSet() const { return m_redshiftTmpDirHasBeenSet; }
    inline void SetRedshiftTmpDir(const Aws::String& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = value; }
    inline void SetRedshiftTmpDir(Aws::String&& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = std::move(value); }
    inline void SetRedshiftTmpDir(const char* value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir.assign(value); }
    inline RedshiftSource& WithRedshiftTmpDir(const Aws::String& value) { SetRedshiftTmpDir(value); return *this;}
    inline RedshiftSource& WithRedshiftTmpDir(Aws::String&& value) { SetRedshiftTmpDir(std::move(value)); return *this;}
    inline RedshiftSource& WithRedshiftTmpDir(const char* value) { SetRedshiftTmpDir(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role with permissions.</p>
     */
    inline const Aws::String& GetTmpDirIAMRole() const{ return m_tmpDirIAMRole; }
    inline bool TmpDirIAMRoleHasBeenSet() const { return m_tmpDirIAMRoleHasBeenSet; }
    inline void SetTmpDirIAMRole(const Aws::String& value) { m_tmpDirIAMRoleHasBeenSet = true; m_tmpDirIAMRole = value; }
    inline void SetTmpDirIAMRole(Aws::String&& value) { m_tmpDirIAMRoleHasBeenSet = true; m_tmpDirIAMRole = std::move(value); }
    inline void SetTmpDirIAMRole(const char* value) { m_tmpDirIAMRoleHasBeenSet = true; m_tmpDirIAMRole.assign(value); }
    inline RedshiftSource& WithTmpDirIAMRole(const Aws::String& value) { SetTmpDirIAMRole(value); return *this;}
    inline RedshiftSource& WithTmpDirIAMRole(Aws::String&& value) { SetTmpDirIAMRole(std::move(value)); return *this;}
    inline RedshiftSource& WithTmpDirIAMRole(const char* value) { SetTmpDirIAMRole(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_redshiftTmpDir;
    bool m_redshiftTmpDirHasBeenSet = false;

    Aws::String m_tmpDirIAMRole;
    bool m_tmpDirIAMRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
