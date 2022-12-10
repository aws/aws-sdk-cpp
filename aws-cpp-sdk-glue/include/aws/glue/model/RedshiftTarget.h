/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/UpsertRedshiftTargetOptions.h>
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
   * <p>Specifies a target that uses Amazon Redshift.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RedshiftTarget">AWS
   * API Reference</a></p>
   */
  class RedshiftTarget
  {
  public:
    AWS_GLUE_API RedshiftTarget();
    AWS_GLUE_API RedshiftTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RedshiftTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline RedshiftTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline RedshiftTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline RedshiftTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline RedshiftTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline RedshiftTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline RedshiftTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline RedshiftTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline RedshiftTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>The name of the database to write to.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database to write to.</p>
     */
    inline RedshiftTarget& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database to write to.</p>
     */
    inline RedshiftTarget& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database to write to.</p>
     */
    inline RedshiftTarget& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline RedshiftTarget& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline RedshiftTarget& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the database to write to.</p>
     */
    inline RedshiftTarget& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline const Aws::String& GetRedshiftTmpDir() const{ return m_redshiftTmpDir; }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline bool RedshiftTmpDirHasBeenSet() const { return m_redshiftTmpDirHasBeenSet; }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline void SetRedshiftTmpDir(const Aws::String& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = value; }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline void SetRedshiftTmpDir(Aws::String&& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = std::move(value); }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline void SetRedshiftTmpDir(const char* value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir.assign(value); }

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline RedshiftTarget& WithRedshiftTmpDir(const Aws::String& value) { SetRedshiftTmpDir(value); return *this;}

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline RedshiftTarget& WithRedshiftTmpDir(Aws::String&& value) { SetRedshiftTmpDir(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where temporary data can be staged when copying out of the
     * database.</p>
     */
    inline RedshiftTarget& WithRedshiftTmpDir(const char* value) { SetRedshiftTmpDir(value); return *this;}


    /**
     * <p>The IAM role with permissions.</p>
     */
    inline const Aws::String& GetTmpDirIAMRole() const{ return m_tmpDirIAMRole; }

    /**
     * <p>The IAM role with permissions.</p>
     */
    inline bool TmpDirIAMRoleHasBeenSet() const { return m_tmpDirIAMRoleHasBeenSet; }

    /**
     * <p>The IAM role with permissions.</p>
     */
    inline void SetTmpDirIAMRole(const Aws::String& value) { m_tmpDirIAMRoleHasBeenSet = true; m_tmpDirIAMRole = value; }

    /**
     * <p>The IAM role with permissions.</p>
     */
    inline void SetTmpDirIAMRole(Aws::String&& value) { m_tmpDirIAMRoleHasBeenSet = true; m_tmpDirIAMRole = std::move(value); }

    /**
     * <p>The IAM role with permissions.</p>
     */
    inline void SetTmpDirIAMRole(const char* value) { m_tmpDirIAMRoleHasBeenSet = true; m_tmpDirIAMRole.assign(value); }

    /**
     * <p>The IAM role with permissions.</p>
     */
    inline RedshiftTarget& WithTmpDirIAMRole(const Aws::String& value) { SetTmpDirIAMRole(value); return *this;}

    /**
     * <p>The IAM role with permissions.</p>
     */
    inline RedshiftTarget& WithTmpDirIAMRole(Aws::String&& value) { SetTmpDirIAMRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role with permissions.</p>
     */
    inline RedshiftTarget& WithTmpDirIAMRole(const char* value) { SetTmpDirIAMRole(value); return *this;}


    /**
     * <p>The set of options to configure an upsert operation when writing to a
     * Redshift target.</p>
     */
    inline const UpsertRedshiftTargetOptions& GetUpsertRedshiftOptions() const{ return m_upsertRedshiftOptions; }

    /**
     * <p>The set of options to configure an upsert operation when writing to a
     * Redshift target.</p>
     */
    inline bool UpsertRedshiftOptionsHasBeenSet() const { return m_upsertRedshiftOptionsHasBeenSet; }

    /**
     * <p>The set of options to configure an upsert operation when writing to a
     * Redshift target.</p>
     */
    inline void SetUpsertRedshiftOptions(const UpsertRedshiftTargetOptions& value) { m_upsertRedshiftOptionsHasBeenSet = true; m_upsertRedshiftOptions = value; }

    /**
     * <p>The set of options to configure an upsert operation when writing to a
     * Redshift target.</p>
     */
    inline void SetUpsertRedshiftOptions(UpsertRedshiftTargetOptions&& value) { m_upsertRedshiftOptionsHasBeenSet = true; m_upsertRedshiftOptions = std::move(value); }

    /**
     * <p>The set of options to configure an upsert operation when writing to a
     * Redshift target.</p>
     */
    inline RedshiftTarget& WithUpsertRedshiftOptions(const UpsertRedshiftTargetOptions& value) { SetUpsertRedshiftOptions(value); return *this;}

    /**
     * <p>The set of options to configure an upsert operation when writing to a
     * Redshift target.</p>
     */
    inline RedshiftTarget& WithUpsertRedshiftOptions(UpsertRedshiftTargetOptions&& value) { SetUpsertRedshiftOptions(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_redshiftTmpDir;
    bool m_redshiftTmpDirHasBeenSet = false;

    Aws::String m_tmpDirIAMRole;
    bool m_tmpDirIAMRoleHasBeenSet = false;

    UpsertRedshiftTargetOptions m_upsertRedshiftOptions;
    bool m_upsertRedshiftOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
