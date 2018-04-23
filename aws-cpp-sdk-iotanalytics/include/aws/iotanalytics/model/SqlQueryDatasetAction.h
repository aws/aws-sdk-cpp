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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The SQL query to modify the message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/SqlQueryDatasetAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API SqlQueryDatasetAction
  {
  public:
    SqlQueryDatasetAction();
    SqlQueryDatasetAction(const Aws::Utils::Json::JsonValue& jsonValue);
    SqlQueryDatasetAction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An SQL query string.</p>
     */
    inline const Aws::String& GetSqlQuery() const{ return m_sqlQuery; }

    /**
     * <p>An SQL query string.</p>
     */
    inline void SetSqlQuery(const Aws::String& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = value; }

    /**
     * <p>An SQL query string.</p>
     */
    inline void SetSqlQuery(Aws::String&& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = std::move(value); }

    /**
     * <p>An SQL query string.</p>
     */
    inline void SetSqlQuery(const char* value) { m_sqlQueryHasBeenSet = true; m_sqlQuery.assign(value); }

    /**
     * <p>An SQL query string.</p>
     */
    inline SqlQueryDatasetAction& WithSqlQuery(const Aws::String& value) { SetSqlQuery(value); return *this;}

    /**
     * <p>An SQL query string.</p>
     */
    inline SqlQueryDatasetAction& WithSqlQuery(Aws::String&& value) { SetSqlQuery(std::move(value)); return *this;}

    /**
     * <p>An SQL query string.</p>
     */
    inline SqlQueryDatasetAction& WithSqlQuery(const char* value) { SetSqlQuery(value); return *this;}

  private:

    Aws::String m_sqlQuery;
    bool m_sqlQueryHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
