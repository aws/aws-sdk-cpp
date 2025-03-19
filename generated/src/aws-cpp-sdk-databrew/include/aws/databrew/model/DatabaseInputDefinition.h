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
    AWS_GLUEDATABREW_API DatabaseInputDefinition() = default;
    AWS_GLUEDATABREW_API DatabaseInputDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API DatabaseInputDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Glue Connection that stores the connection information for the target
     * database.</p>
     */
    inline const Aws::String& GetGlueConnectionName() const { return m_glueConnectionName; }
    inline bool GlueConnectionNameHasBeenSet() const { return m_glueConnectionNameHasBeenSet; }
    template<typename GlueConnectionNameT = Aws::String>
    void SetGlueConnectionName(GlueConnectionNameT&& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = std::forward<GlueConnectionNameT>(value); }
    template<typename GlueConnectionNameT = Aws::String>
    DatabaseInputDefinition& WithGlueConnectionName(GlueConnectionNameT&& value) { SetGlueConnectionName(std::forward<GlueConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table within the target database.</p>
     */
    inline const Aws::String& GetDatabaseTableName() const { return m_databaseTableName; }
    inline bool DatabaseTableNameHasBeenSet() const { return m_databaseTableNameHasBeenSet; }
    template<typename DatabaseTableNameT = Aws::String>
    void SetDatabaseTableName(DatabaseTableNameT&& value) { m_databaseTableNameHasBeenSet = true; m_databaseTableName = std::forward<DatabaseTableNameT>(value); }
    template<typename DatabaseTableNameT = Aws::String>
    DatabaseInputDefinition& WithDatabaseTableName(DatabaseTableNameT&& value) { SetDatabaseTableName(std::forward<DatabaseTableNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Location& GetTempDirectory() const { return m_tempDirectory; }
    inline bool TempDirectoryHasBeenSet() const { return m_tempDirectoryHasBeenSet; }
    template<typename TempDirectoryT = S3Location>
    void SetTempDirectory(TempDirectoryT&& value) { m_tempDirectoryHasBeenSet = true; m_tempDirectory = std::forward<TempDirectoryT>(value); }
    template<typename TempDirectoryT = S3Location>
    DatabaseInputDefinition& WithTempDirectory(TempDirectoryT&& value) { SetTempDirectory(std::forward<TempDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom SQL to run against the provided Glue connection. This SQL will be used
     * as the input for DataBrew projects and jobs.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    DatabaseInputDefinition& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}
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
