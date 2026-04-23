/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/RelationalDatabaseSourceType.h>
#include <aws/appsync/model/RdsHttpEndpointConfig.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a relational database data source configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/RelationalDatabaseDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API RelationalDatabaseDataSourceConfig
  {
  public:
    RelationalDatabaseDataSourceConfig();
    RelationalDatabaseDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    RelationalDatabaseDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source type for the relational database.</p> <ul> <li> <p>
     * <b>RDS_HTTP_ENDPOINT</b>: The relational database source type is an Amazon RDS
     * HTTP endpoint.</p> </li> </ul>
     */
    inline const RelationalDatabaseSourceType& GetRelationalDatabaseSourceType() const{ return m_relationalDatabaseSourceType; }

    /**
     * <p>Source type for the relational database.</p> <ul> <li> <p>
     * <b>RDS_HTTP_ENDPOINT</b>: The relational database source type is an Amazon RDS
     * HTTP endpoint.</p> </li> </ul>
     */
    inline bool RelationalDatabaseSourceTypeHasBeenSet() const { return m_relationalDatabaseSourceTypeHasBeenSet; }

    /**
     * <p>Source type for the relational database.</p> <ul> <li> <p>
     * <b>RDS_HTTP_ENDPOINT</b>: The relational database source type is an Amazon RDS
     * HTTP endpoint.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseSourceType(const RelationalDatabaseSourceType& value) { m_relationalDatabaseSourceTypeHasBeenSet = true; m_relationalDatabaseSourceType = value; }

    /**
     * <p>Source type for the relational database.</p> <ul> <li> <p>
     * <b>RDS_HTTP_ENDPOINT</b>: The relational database source type is an Amazon RDS
     * HTTP endpoint.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseSourceType(RelationalDatabaseSourceType&& value) { m_relationalDatabaseSourceTypeHasBeenSet = true; m_relationalDatabaseSourceType = std::move(value); }

    /**
     * <p>Source type for the relational database.</p> <ul> <li> <p>
     * <b>RDS_HTTP_ENDPOINT</b>: The relational database source type is an Amazon RDS
     * HTTP endpoint.</p> </li> </ul>
     */
    inline RelationalDatabaseDataSourceConfig& WithRelationalDatabaseSourceType(const RelationalDatabaseSourceType& value) { SetRelationalDatabaseSourceType(value); return *this;}

    /**
     * <p>Source type for the relational database.</p> <ul> <li> <p>
     * <b>RDS_HTTP_ENDPOINT</b>: The relational database source type is an Amazon RDS
     * HTTP endpoint.</p> </li> </ul>
     */
    inline RelationalDatabaseDataSourceConfig& WithRelationalDatabaseSourceType(RelationalDatabaseSourceType&& value) { SetRelationalDatabaseSourceType(std::move(value)); return *this;}


    /**
     * <p>Amazon RDS HTTP endpoint settings.</p>
     */
    inline const RdsHttpEndpointConfig& GetRdsHttpEndpointConfig() const{ return m_rdsHttpEndpointConfig; }

    /**
     * <p>Amazon RDS HTTP endpoint settings.</p>
     */
    inline bool RdsHttpEndpointConfigHasBeenSet() const { return m_rdsHttpEndpointConfigHasBeenSet; }

    /**
     * <p>Amazon RDS HTTP endpoint settings.</p>
     */
    inline void SetRdsHttpEndpointConfig(const RdsHttpEndpointConfig& value) { m_rdsHttpEndpointConfigHasBeenSet = true; m_rdsHttpEndpointConfig = value; }

    /**
     * <p>Amazon RDS HTTP endpoint settings.</p>
     */
    inline void SetRdsHttpEndpointConfig(RdsHttpEndpointConfig&& value) { m_rdsHttpEndpointConfigHasBeenSet = true; m_rdsHttpEndpointConfig = std::move(value); }

    /**
     * <p>Amazon RDS HTTP endpoint settings.</p>
     */
    inline RelationalDatabaseDataSourceConfig& WithRdsHttpEndpointConfig(const RdsHttpEndpointConfig& value) { SetRdsHttpEndpointConfig(value); return *this;}

    /**
     * <p>Amazon RDS HTTP endpoint settings.</p>
     */
    inline RelationalDatabaseDataSourceConfig& WithRdsHttpEndpointConfig(RdsHttpEndpointConfig&& value) { SetRdsHttpEndpointConfig(std::move(value)); return *this;}

  private:

    RelationalDatabaseSourceType m_relationalDatabaseSourceType;
    bool m_relationalDatabaseSourceTypeHasBeenSet;

    RdsHttpEndpointConfig m_rdsHttpEndpointConfig;
    bool m_rdsHttpEndpointConfigHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
