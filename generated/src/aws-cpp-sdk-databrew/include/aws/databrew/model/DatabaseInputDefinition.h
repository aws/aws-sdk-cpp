/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/S3Location.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Connection information for dataset input files stored in a
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/DatabaseInputDefinition">AWS
   * API Reference</a></p>
   */
  class DatabaseInputDefinition
  {
  public:
    AWS_GLUEDATABREW_API DatabaseInputDefinition();
    AWS_GLUEDATABREW_API DatabaseInputDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API DatabaseInputDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline const Aws::String& GetGlueConnectionName() const{ return m_glueConnectionName; }

    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline bool GlueConnectionNameHasBeenSet() const { return m_glueConnectionNameHasBeenSet; }

    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline void SetGlueConnectionName(const Aws::String& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = value; }

    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline void SetGlueConnectionName(Aws::String&& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = std::move(value); }

    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline void SetGlueConnectionName(const char* value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName.assign(value); }

    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline DatabaseInputDefinition& WithGlueConnectionName(const Aws::String& value) { SetGlueConnectionName(value); return *this;}

    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline DatabaseInputDefinition& WithGlueConnectionName(Aws::String&& value) { SetGlueConnectionName(std::move(value)); return *this;}

    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline DatabaseInputDefinition& WithGlueConnectionName(const char* value) { SetGlueConnectionName(value); return *this;}


    /**
     * <p>The table within the target database.</p>
     */
    inline const Aws::String& GetDatabaseTableName() const{ return m_databaseTableName; }

    /**
     * <p>The table within the target database.</p>
     */
    inline bool DatabaseTableNameHasBeenSet() const { return m_databaseTableNameHasBeenSet; }

    /**
     * <p>The table within the target database.</p>
     */
    inline void SetDatabaseTableName(const Aws::String& value) { m_databaseTableNameHasBeenSet = true; m_databaseTableName = value; }

    /**
     * <p>The table within the target database.</p>
     */
    inline void SetDatabaseTableName(Aws::String&& value) { m_databaseTableNameHasBeenSet = true; m_databaseTableName = std::move(value); }

    /**
     * <p>The table within the target database.</p>
     */
    inline void SetDatabaseTableName(const char* value) { m_databaseTableNameHasBeenSet = true; m_databaseTableName.assign(value); }

    /**
     * <p>The table within the target database.</p>
     */
    inline DatabaseInputDefinition& WithDatabaseTableName(const Aws::String& value) { SetDatabaseTableName(value); return *this;}

    /**
     * <p>The table within the target database.</p>
     */
    inline DatabaseInputDefinition& WithDatabaseTableName(Aws::String&& value) { SetDatabaseTableName(std::move(value)); return *this;}

    /**
     * <p>The table within the target database.</p>
     */
    inline DatabaseInputDefinition& WithDatabaseTableName(const char* value) { SetDatabaseTableName(value); return *this;}


    
    inline const S3Location& GetTempDirectory() const{ return m_tempDirectory; }

    
    inline bool TempDirectoryHasBeenSet() const { return m_tempDirectoryHasBeenSet; }

    
    inline void SetTempDirectory(const S3Location& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = value; }

    
    inline void SetTempDirectory(S3Location&& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = std::move(value); }

    
    inline DatabaseInputDefinition& WithTempDirectory(const S3Location& value) { SetTempDirectory(value); return *this;}

    
    inline DatabaseInputDefinition& WithTempDirectory(S3Location&& value) { SetTempDirectory(std::move(value)); return *this;}


    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline DatabaseInputDefinition& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline DatabaseInputDefinition& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline DatabaseInputDefinition& WithQueryString(const char* value) { SetQueryString(value); return *this;}

  private:

    Aws::String m_glueConnectionName;
    bool m_glueConnectionNameHasBeenSet = false;

    Aws::String m_databaseTableName;
    bool m_databaseTableNameHasBeenSet = false;

    S3Location m_tempDirectory;
    bool m_tempDirectoryHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
