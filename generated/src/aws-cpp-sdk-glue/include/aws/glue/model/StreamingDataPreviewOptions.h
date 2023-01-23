/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
   * <p>Specifies options related to data preview for viewing a sample of your
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StreamingDataPreviewOptions">AWS
   * API Reference</a></p>
   */
  class StreamingDataPreviewOptions
  {
  public:
    AWS_GLUE_API StreamingDataPreviewOptions();
    AWS_GLUE_API StreamingDataPreviewOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StreamingDataPreviewOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The polling time in milliseconds.</p>
     */
    inline long long GetPollingTime() const{ return m_pollingTime; }

    /**
     * <p>The polling time in milliseconds.</p>
     */
    inline bool PollingTimeHasBeenSet() const { return m_pollingTimeHasBeenSet; }

    /**
     * <p>The polling time in milliseconds.</p>
     */
    inline void SetPollingTime(long long value) { m_pollingTimeHasBeenSet = true; m_pollingTime = value; }

    /**
     * <p>The polling time in milliseconds.</p>
     */
    inline StreamingDataPreviewOptions& WithPollingTime(long long value) { SetPollingTime(value); return *this;}


    /**
     * <p>The limit to the number of records polled.</p>
     */
    inline long long GetRecordPollingLimit() const{ return m_recordPollingLimit; }

    /**
     * <p>The limit to the number of records polled.</p>
     */
    inline bool RecordPollingLimitHasBeenSet() const { return m_recordPollingLimitHasBeenSet; }

    /**
     * <p>The limit to the number of records polled.</p>
     */
    inline void SetRecordPollingLimit(long long value) { m_recordPollingLimitHasBeenSet = true; m_recordPollingLimit = value; }

    /**
     * <p>The limit to the number of records polled.</p>
     */
    inline StreamingDataPreviewOptions& WithRecordPollingLimit(long long value) { SetRecordPollingLimit(value); return *this;}

  private:

    long long m_pollingTime;
    bool m_pollingTimeHasBeenSet = false;

    long long m_recordPollingLimit;
    bool m_recordPollingLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
