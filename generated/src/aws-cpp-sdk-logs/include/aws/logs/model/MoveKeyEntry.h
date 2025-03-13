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
   * <p>This object defines one key that will be moved with the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-moveKey">
   * moveKey</a> processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/MoveKeyEntry">AWS
   * API Reference</a></p>
   */
  class MoveKeyEntry
  {
  public:
    AWS_CLOUDWATCHLOGS_API MoveKeyEntry() = default;
    AWS_CLOUDWATCHLOGS_API MoveKeyEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API MoveKeyEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key to move.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    MoveKeyEntry& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key to move to.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    MoveKeyEntry& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to overwrite the value if the destination key already
     * exists. If you omit this, the default is <code>false</code>.</p>
     */
    inline bool GetOverwriteIfExists() const { return m_overwriteIfExists; }
    inline bool OverwriteIfExistsHasBeenSet() const { return m_overwriteIfExistsHasBeenSet; }
    inline void SetOverwriteIfExists(bool value) { m_overwriteIfExistsHasBeenSet = true; m_overwriteIfExists = value; }
    inline MoveKeyEntry& WithOverwriteIfExists(bool value) { SetOverwriteIfExists(value); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    bool m_overwriteIfExists{false};
    bool m_overwriteIfExistsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
