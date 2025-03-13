/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The Amazon CloudWatch Logs log group where the text and metadata logs are
   * delivered. The log group must exist before you enable logging.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CloudWatchLogGroupLogDestination">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogGroupLogDestination
  {
  public:
    AWS_LEXMODELSV2_API CloudWatchLogGroupLogDestination() = default;
    AWS_LEXMODELSV2_API CloudWatchLogGroupLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CloudWatchLogGroupLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log group where text and metadata logs
     * are delivered.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const { return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    void SetCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::forward<CloudWatchLogGroupArnT>(value); }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    CloudWatchLogGroupLogDestination& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the log stream name within the log group that you specified
     * </p>
     */
    inline const Aws::String& GetLogPrefix() const { return m_logPrefix; }
    inline bool LogPrefixHasBeenSet() const { return m_logPrefixHasBeenSet; }
    template<typename LogPrefixT = Aws::String>
    void SetLogPrefix(LogPrefixT&& value) { m_logPrefixHasBeenSet = true; m_logPrefix = std::forward<LogPrefixT>(value); }
    template<typename LogPrefixT = Aws::String>
    CloudWatchLogGroupLogDestination& WithLogPrefix(LogPrefixT&& value) { SetLogPrefix(std::forward<LogPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    Aws::String m_logPrefix;
    bool m_logPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
