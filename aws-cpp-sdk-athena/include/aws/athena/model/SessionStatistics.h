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
   * <p>Contains statistics for a notebook session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/SessionStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API SessionStatistics
  {
  public:
    SessionStatistics();
    SessionStatistics(Aws::Utils::Json::JsonView jsonValue);
    SessionStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data processing unit execution time for a session in milliseconds.</p>
     */
    inline long long GetDpuExecutionInMillis() const{ return m_dpuExecutionInMillis; }

    /**
     * <p>The data processing unit execution time for a session in milliseconds.</p>
     */
    inline bool DpuExecutionInMillisHasBeenSet() const { return m_dpuExecutionInMillisHasBeenSet; }

    /**
     * <p>The data processing unit execution time for a session in milliseconds.</p>
     */
    inline void SetDpuExecutionInMillis(long long value) { m_dpuExecutionInMillisHasBeenSet = true; m_dpuExecutionInMillis = value; }

    /**
     * <p>The data processing unit execution time for a session in milliseconds.</p>
     */
    inline SessionStatistics& WithDpuExecutionInMillis(long long value) { SetDpuExecutionInMillis(value); return *this;}

  private:

    long long m_dpuExecutionInMillis;
    bool m_dpuExecutionInMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
