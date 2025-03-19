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
   * <p>This processor deletes entries from a log event. These entries are key-value
   * pairs. </p> <p>For more information about this processor including examples, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-deleteKeys">
   * deleteKeys</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteKeys">AWS API
   * Reference</a></p>
   */
  class DeleteKeys
  {
  public:
    AWS_CLOUDWATCHLOGS_API DeleteKeys() = default;
    AWS_CLOUDWATCHLOGS_API DeleteKeys(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API DeleteKeys& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of keys to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWithKeys() const { return m_withKeys; }
    inline bool WithKeysHasBeenSet() const { return m_withKeysHasBeenSet; }
    template<typename WithKeysT = Aws::Vector<Aws::String>>
    void SetWithKeys(WithKeysT&& value) { m_withKeysHasBeenSet = true; m_withKeys = std::forward<WithKeysT>(value); }
    template<typename WithKeysT = Aws::Vector<Aws::String>>
    DeleteKeys& WithWithKeys(WithKeysT&& value) { SetWithKeys(std::forward<WithKeysT>(value)); return *this;}
    template<typename WithKeysT = Aws::String>
    DeleteKeys& AddWithKeys(WithKeysT&& value) { m_withKeysHasBeenSet = true; m_withKeys.emplace_back(std::forward<WithKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_withKeys;
    bool m_withKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
