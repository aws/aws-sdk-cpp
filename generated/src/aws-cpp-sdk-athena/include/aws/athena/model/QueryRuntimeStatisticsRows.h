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
    AWS_ATHENA_API QueryRuntimeStatisticsRows() = default;
    AWS_ATHENA_API QueryRuntimeStatisticsRows(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryRuntimeStatisticsRows& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of rows read to execute the query.</p>
     */
    inline long long GetInputRows() const { return m_inputRows; }
    inline bool InputRowsHasBeenSet() const { return m_inputRowsHasBeenSet; }
    inline void SetInputRows(long long value) { m_inputRowsHasBeenSet = true; m_inputRows = value; }
    inline QueryRuntimeStatisticsRows& WithInputRows(long long value) { SetInputRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes read to execute the query.</p>
     */
    inline long long GetInputBytes() const { return m_inputBytes; }
    inline bool InputBytesHasBeenSet() const { return m_inputBytesHasBeenSet; }
    inline void SetInputBytes(long long value) { m_inputBytesHasBeenSet = true; m_inputBytes = value; }
    inline QueryRuntimeStatisticsRows& WithInputBytes(long long value) { SetInputBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes returned by the query.</p>
     */
    inline long long GetOutputBytes() const { return m_outputBytes; }
    inline bool OutputBytesHasBeenSet() const { return m_outputBytesHasBeenSet; }
    inline void SetOutputBytes(long long value) { m_outputBytesHasBeenSet = true; m_outputBytes = value; }
    inline QueryRuntimeStatisticsRows& WithOutputBytes(long long value) { SetOutputBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows returned by the query.</p>
     */
    inline long long GetOutputRows() const { return m_outputRows; }
    inline bool OutputRowsHasBeenSet() const { return m_outputRowsHasBeenSet; }
    inline void SetOutputRows(long long value) { m_outputRowsHasBeenSet = true; m_outputRows = value; }
    inline QueryRuntimeStatisticsRows& WithOutputRows(long long value) { SetOutputRows(value); return *this;}
    ///@}
  private:

    long long m_inputRows{0};
    bool m_inputRowsHasBeenSet = false;

    long long m_inputBytes{0};
    bool m_inputBytesHasBeenSet = false;

    long long m_outputBytes{0};
    bool m_outputBytesHasBeenSet = false;

    long long m_outputRows{0};
    bool m_outputRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
