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
    AWS_LEXMODELSV2_API CloudWatchLogGroupLogDestination();
    AWS_LEXMODELSV2_API CloudWatchLogGroupLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CloudWatchLogGroupLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log group where text and metadata logs
     * are delivered.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }
    inline CloudWatchLogGroupLogDestination& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}
    inline CloudWatchLogGroupLogDestination& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}
    inline CloudWatchLogGroupLogDestination& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the log stream name within the log group that you specified
     * </p>
     */
    inline const Aws::String& GetLogPrefix() const{ return m_logPrefix; }
    inline bool LogPrefixHasBeenSet() const { return m_logPrefixHasBeenSet; }
    inline void SetLogPrefix(const Aws::String& value) { m_logPrefixHasBeenSet = true; m_logPrefix = value; }
    inline void SetLogPrefix(Aws::String&& value) { m_logPrefixHasBeenSet = true; m_logPrefix = std::move(value); }
    inline void SetLogPrefix(const char* value) { m_logPrefixHasBeenSet = true; m_logPrefix.assign(value); }
    inline CloudWatchLogGroupLogDestination& WithLogPrefix(const Aws::String& value) { SetLogPrefix(value); return *this;}
    inline CloudWatchLogGroupLogDestination& WithLogPrefix(Aws::String&& value) { SetLogPrefix(std::move(value)); return *this;}
    inline CloudWatchLogGroupLogDestination& WithLogPrefix(const char* value) { SetLogPrefix(value); return *this;}
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
