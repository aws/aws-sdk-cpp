/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Statistics such as input rows and bytes read by the query, rows and bytes
   * output by the query, and the number of rows written by the query.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryRuntimeStatisticsRows">AWS
   * API Reference</a></p>
   */
  class QueryRuntimeStatisticsRows
  {
  public:
    AWS_ATHENA_API QueryRuntimeStatisticsRows();
    AWS_ATHENA_API QueryRuntimeStatisticsRows(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryRuntimeStatisticsRows& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of rows read to execute the query.</p>
     */
    inline long long GetInputRows() const{ return m_inputRows; }

    /**
     * <p>The number of rows read to execute the query.</p>
     */
    inline bool InputRowsHasBeenSet() const { return m_inputRowsHasBeenSet; }

    /**
     * <p>The number of rows read to execute the query.</p>
     */
    inline void SetInputRows(long long value) { m_inputRowsHasBeenSet = true; m_inputRows = value; }

    /**
     * <p>The number of rows read to execute the query.</p>
     */
    inline QueryRuntimeStatisticsRows& WithInputRows(long long value) { SetInputRows(value); return *this;}


    /**
     * <p>The number of bytes read to execute the query.</p>
     */
    inline long long GetInputBytes() const{ return m_inputBytes; }

    /**
     * <p>The number of bytes read to execute the query.</p>
     */
    inline bool InputBytesHasBeenSet() const { return m_inputBytesHasBeenSet; }

    /**
     * <p>The number of bytes read to execute the query.</p>
     */
    inline void SetInputBytes(long long value) { m_inputBytesHasBeenSet = true; m_inputBytes = value; }

    /**
     * <p>The number of bytes read to execute the query.</p>
     */
    inline QueryRuntimeStatisticsRows& WithInputBytes(long long value) { SetInputBytes(value); return *this;}


    /**
     * <p>The number of bytes returned by the query.</p>
     */
    inline long long GetOutputBytes() const{ return m_outputBytes; }

    /**
     * <p>The number of bytes returned by the query.</p>
     */
    inline bool OutputBytesHasBeenSet() const { return m_outputBytesHasBeenSet; }

    /**
     * <p>The number of bytes returned by the query.</p>
     */
    inline void SetOutputBytes(long long value) { m_outputBytesHasBeenSet = true; m_outputBytes = value; }

    /**
     * <p>The number of bytes returned by the query.</p>
     */
    inline QueryRuntimeStatisticsRows& WithOutputBytes(long long value) { SetOutputBytes(value); return *this;}


    /**
     * <p>The number of rows returned by the query.</p>
     */
    inline long long GetOutputRows() const{ return m_outputRows; }

    /**
     * <p>The number of rows returned by the query.</p>
     */
    inline bool OutputRowsHasBeenSet() const { return m_outputRowsHasBeenSet; }

    /**
     * <p>The number of rows returned by the query.</p>
     */
    inline void SetOutputRows(long long value) { m_outputRowsHasBeenSet = true; m_outputRows = value; }

    /**
     * <p>The number of rows returned by the query.</p>
     */
    inline QueryRuntimeStatisticsRows& WithOutputRows(long long value) { SetOutputRows(value); return *this;}

  private:

    long long m_inputRows;
    bool m_inputRowsHasBeenSet = false;

    long long m_inputBytes;
    bool m_inputBytesHasBeenSet = false;

    long long m_outputBytes;
    bool m_outputBytesHasBeenSet = false;

    long long m_outputRows;
    bool m_outputRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
