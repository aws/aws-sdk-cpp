/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>The fields contained in log events found by a <code>GetLogGroupFields</code>
   * operation, along with the percentage of queried log events in which each field
   * appears.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogGroupField">AWS
   * API Reference</a></p>
   */
  class LogGroupField
  {
  public:
    AWS_CLOUDWATCHLOGS_API LogGroupField();
    AWS_CLOUDWATCHLOGS_API LogGroupField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LogGroupField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a log field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a log field.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a log field.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a log field.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a log field.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a log field.</p>
     */
    inline LogGroupField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a log field.</p>
     */
    inline LogGroupField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a log field.</p>
     */
    inline LogGroupField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The percentage of log events queried that contained the field.</p>
     */
    inline int GetPercent() const{ return m_percent; }

    /**
     * <p>The percentage of log events queried that contained the field.</p>
     */
    inline bool PercentHasBeenSet() const { return m_percentHasBeenSet; }

    /**
     * <p>The percentage of log events queried that contained the field.</p>
     */
    inline void SetPercent(int value) { m_percentHasBeenSet = true; m_percent = value; }

    /**
     * <p>The percentage of log events queried that contained the field.</p>
     */
    inline LogGroupField& WithPercent(int value) { SetPercent(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_percent;
    bool m_percentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
