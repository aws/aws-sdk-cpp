/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for storage in Glue Data Catalog.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftQueryEngineAwsDataCatalogStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftQueryEngineAwsDataCatalogStorageConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftQueryEngineAwsDataCatalogStorageConfiguration();
    AWS_BEDROCKAGENT_API RedshiftQueryEngineAwsDataCatalogStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftQueryEngineAwsDataCatalogStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of names of the tables to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTableNames() const{ return m_tableNames; }
    inline bool TableNamesHasBeenSet() const { return m_tableNamesHasBeenSet; }
    inline void SetTableNames(const Aws::Vector<Aws::String>& value) { m_tableNamesHasBeenSet = true; m_tableNames = value; }
    inline void SetTableNames(Aws::Vector<Aws::String>&& value) { m_tableNamesHasBeenSet = true; m_tableNames = std::move(value); }
    inline RedshiftQueryEngineAwsDataCatalogStorageConfiguration& WithTableNames(const Aws::Vector<Aws::String>& value) { SetTableNames(value); return *this;}
    inline RedshiftQueryEngineAwsDataCatalogStorageConfiguration& WithTableNames(Aws::Vector<Aws::String>&& value) { SetTableNames(std::move(value)); return *this;}
    inline RedshiftQueryEngineAwsDataCatalogStorageConfiguration& AddTableNames(const Aws::String& value) { m_tableNamesHasBeenSet = true; m_tableNames.push_back(value); return *this; }
    inline RedshiftQueryEngineAwsDataCatalogStorageConfiguration& AddTableNames(Aws::String&& value) { m_tableNamesHasBeenSet = true; m_tableNames.push_back(std::move(value)); return *this; }
    inline RedshiftQueryEngineAwsDataCatalogStorageConfiguration& AddTableNames(const char* value) { m_tableNamesHasBeenSet = true; m_tableNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_tableNames;
    bool m_tableNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
