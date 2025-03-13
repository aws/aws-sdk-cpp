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
    AWS_GLUE_API RedshiftSource() = default;
    AWS_GLUE_API RedshiftSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RedshiftSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Redshift data store.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RedshiftSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database to read from.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    RedshiftSource& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database table to read from.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    RedshiftSource& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline const Aws::String& GetRedshiftTmpDir() const { return m_redshiftTmpDir; }
    inline bool RedshiftTmpDirHasBeenSet() const { return m_redshiftTmpDirHasBeenSet; }
    template<typename RedshiftTmpDirT = Aws::String>
    void SetRedshiftTmpDir(RedshiftTmpDirT&& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = std::forward<RedshiftTmpDirT>(value); }
    template<typename RedshiftTmpDirT = Aws::String>
    RedshiftSource& WithRedshiftTmpDir(RedshiftTmpDirT&& value) { SetRedshiftTmpDir(std::forward<RedshiftTmpDirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role with permissions.</p>
     */
    inline const Aws::String& GetTmpDirIAMRole() const { return m_tmpDirIAMRole; }
    inline bool TmpDirIAMRoleHasBeenSet() const { return m_tmpDirIAMRoleHasBeenSet; }
    template<typename TmpDirIAMRoleT = Aws::String>
    void SetTmpDirIAMRole(TmpDirIAMRoleT&& value) { m_tmpDirIAMRoleHasBeenSet = true; m_tmpDirIAMRole = std::forward<TmpDirIAMRoleT>(value); }
    template<typename TmpDirIAMRoleT = Aws::String>
    RedshiftSource& WithTmpDirIAMRole(TmpDirIAMRoleT&& value) { SetTmpDirIAMRole(std::forward<TmpDirIAMRoleT>(value)); return *this;}
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
