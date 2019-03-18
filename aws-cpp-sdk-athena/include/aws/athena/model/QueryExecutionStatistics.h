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
#include <aws/athena/Athena_EXPORTS.h>

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
namespace Athena
{
namespace Model
{

  /**
   * <p>The amount of data scanned during the query execution and the amount of time
   * that it took to execute, and the type of statement that was run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryExecutionStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API QueryExecutionStatistics
  {
  public:
    QueryExecutionStatistics();
    QueryExecutionStatistics(Aws::Utils::Json::JsonView jsonValue);
    QueryExecutionStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline long long GetEngineExecutionTimeInMillis() const{ return m_engineExecutionTimeInMillis; }

    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline bool EngineExecutionTimeInMillisHasBeenSet() const { return m_engineExecutionTimeInMillisHasBeenSet; }

    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline void SetEngineExecutionTimeInMillis(long long value) { m_engineExecutionTimeInMillisHasBeenSet = true; m_engineExecutionTimeInMillis = value; }

    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline QueryExecutionStatistics& WithEngineExecutionTimeInMillis(long long value) { SetEngineExecutionTimeInMillis(value); return *this;}


    /**
     * <p>The number of bytes in the data that was queried.</p>
     */
    inline long long GetDataScannedInBytes() const{ return m_dataScannedInBytes; }

    /**
     * <p>The number of bytes in the data that was queried.</p>
     */
    inline bool DataScannedInBytesHasBeenSet() const { return m_dataScannedInBytesHasBeenSet; }

    /**
     * <p>The number of bytes in the data that was queried.</p>
     */
    inline void SetDataScannedInBytes(long long value) { m_dataScannedInBytesHasBeenSet = true; m_dataScannedInBytes = value; }

    /**
     * <p>The number of bytes in the data that was queried.</p>
     */
    inline QueryExecutionStatistics& WithDataScannedInBytes(long long value) { SetDataScannedInBytes(value); return *this;}

  private:

    long long m_engineExecutionTimeInMillis;
    bool m_engineExecutionTimeInMillisHasBeenSet;

    long long m_dataScannedInBytes;
    bool m_dataScannedInBytesHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
