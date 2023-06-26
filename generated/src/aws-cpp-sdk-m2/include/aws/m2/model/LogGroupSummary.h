/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>A subset of the attributes that describe a log group. In CloudWatch a log
   * group is a group of log streams that share the same retention, monitoring, and
   * access control settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/LogGroupSummary">AWS
   * API Reference</a></p>
   */
  class LogGroupSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API LogGroupSummary();
    AWS_MAINFRAMEMODERNIZATION_API LogGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API LogGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroupSummary& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroupSummary& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline LogGroupSummary& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The type of log.</p>
     */
    inline const Aws::String& GetLogType() const{ return m_logType; }

    /**
     * <p>The type of log.</p>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>The type of log.</p>
     */
    inline void SetLogType(const Aws::String& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>The type of log.</p>
     */
    inline void SetLogType(Aws::String&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>The type of log.</p>
     */
    inline void SetLogType(const char* value) { m_logTypeHasBeenSet = true; m_logType.assign(value); }

    /**
     * <p>The type of log.</p>
     */
    inline LogGroupSummary& WithLogType(const Aws::String& value) { SetLogType(value); return *this;}

    /**
     * <p>The type of log.</p>
     */
    inline LogGroupSummary& WithLogType(Aws::String&& value) { SetLogType(std::move(value)); return *this;}

    /**
     * <p>The type of log.</p>
     */
    inline LogGroupSummary& WithLogType(const char* value) { SetLogType(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logType;
    bool m_logTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
