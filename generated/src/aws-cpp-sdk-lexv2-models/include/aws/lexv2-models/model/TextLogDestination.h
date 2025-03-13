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
    AWS_LEXMODELSV2_API TextLogDestination() = default;
    AWS_LEXMODELSV2_API TextLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TextLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the Amazon CloudWatch Logs log group where text and metadata logs are
     * delivered.</p>
     */
    inline const CloudWatchLogGroupLogDestination& GetCloudWatch() const { return m_cloudWatch; }
    inline bool CloudWatchHasBeenSet() const { return m_cloudWatchHasBeenSet; }
    template<typename CloudWatchT = CloudWatchLogGroupLogDestination>
    void SetCloudWatch(CloudWatchT&& value) { m_cloudWatchHasBeenSet = true; m_cloudWatch = std::forward<CloudWatchT>(value); }
    template<typename CloudWatchT = CloudWatchLogGroupLogDestination>
    TextLogDestination& WithCloudWatch(CloudWatchT&& value) { SetCloudWatch(std::forward<CloudWatchT>(value)); return *this;}
    ///@}
  private:

    CloudWatchLogGroupLogDestination m_cloudWatch;
    bool m_cloudWatchHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
