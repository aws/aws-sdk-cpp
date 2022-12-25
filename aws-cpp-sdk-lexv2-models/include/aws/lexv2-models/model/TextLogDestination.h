/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/CloudWatchLogGroupLogDestination.h>
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
   * <p>Defines the Amazon CloudWatch Logs destination log group for conversation
   * text logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TextLogDestination">AWS
   * API Reference</a></p>
   */
  class TextLogDestination
  {
  public:
    AWS_LEXMODELSV2_API TextLogDestination();
    AWS_LEXMODELSV2_API TextLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TextLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the Amazon CloudWatch Logs log group where text and metadata logs are
     * delivered.</p>
     */
    inline const CloudWatchLogGroupLogDestination& GetCloudWatch() const{ return m_cloudWatch; }

    /**
     * <p>Defines the Amazon CloudWatch Logs log group where text and metadata logs are
     * delivered.</p>
     */
    inline bool CloudWatchHasBeenSet() const { return m_cloudWatchHasBeenSet; }

    /**
     * <p>Defines the Amazon CloudWatch Logs log group where text and metadata logs are
     * delivered.</p>
     */
    inline void SetCloudWatch(const CloudWatchLogGroupLogDestination& value) { m_cloudWatchHasBeenSet = true; m_cloudWatch = value; }

    /**
     * <p>Defines the Amazon CloudWatch Logs log group where text and metadata logs are
     * delivered.</p>
     */
    inline void SetCloudWatch(CloudWatchLogGroupLogDestination&& value) { m_cloudWatchHasBeenSet = true; m_cloudWatch = std::move(value); }

    /**
     * <p>Defines the Amazon CloudWatch Logs log group where text and metadata logs are
     * delivered.</p>
     */
    inline TextLogDestination& WithCloudWatch(const CloudWatchLogGroupLogDestination& value) { SetCloudWatch(value); return *this;}

    /**
     * <p>Defines the Amazon CloudWatch Logs log group where text and metadata logs are
     * delivered.</p>
     */
    inline TextLogDestination& WithCloudWatch(CloudWatchLogGroupLogDestination&& value) { SetCloudWatch(std::move(value)); return *this;}

  private:

    CloudWatchLogGroupLogDestination m_cloudWatch;
    bool m_cloudWatchHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
