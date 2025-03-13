/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>This processor converts a string to lowercase.</p> <p>For more information
   * about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-lowerCaseString">
   * lowerCaseString</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LowerCaseString">AWS
   * API Reference</a></p>
   */
  class LowerCaseString
  {
  public:
    AWS_CLOUDWATCHLOGS_API LowerCaseString() = default;
    AWS_CLOUDWATCHLOGS_API LowerCaseString(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LowerCaseString& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array caontaining the keys of the fields to convert to lowercase.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWithKeys() const { return m_withKeys; }
    inline bool WithKeysHasBeenSet() const { return m_withKeysHasBeenSet; }
    template<typename WithKeysT = Aws::Vector<Aws::String>>
    void SetWithKeys(WithKeysT&& value) { m_withKeysHasBeenSet = true; m_withKeys = std::forward<WithKeysT>(value); }
    template<typename WithKeysT = Aws::Vector<Aws::String>>
    LowerCaseString& WithWithKeys(WithKeysT&& value) { SetWithKeys(std::forward<WithKeysT>(value)); return *this;}
    template<typename WithKeysT = Aws::String>
    LowerCaseString& AddWithKeys(WithKeysT&& value) { m_withKeysHasBeenSet = true; m_withKeys.emplace_back(std::forward<WithKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_withKeys;
    bool m_withKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
