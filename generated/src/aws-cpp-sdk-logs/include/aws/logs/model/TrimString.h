﻿/**
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
   * <p>Use this processor to remove leading and trailing whitespace.</p> <p>For more
   * information about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-trimString">
   * trimString</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TrimString">AWS API
   * Reference</a></p>
   */
  class TrimString
  {
  public:
    AWS_CLOUDWATCHLOGS_API TrimString();
    AWS_CLOUDWATCHLOGS_API TrimString(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API TrimString& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array containing the keys of the fields to trim.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWithKeys() const{ return m_withKeys; }
    inline bool WithKeysHasBeenSet() const { return m_withKeysHasBeenSet; }
    inline void SetWithKeys(const Aws::Vector<Aws::String>& value) { m_withKeysHasBeenSet = true; m_withKeys = value; }
    inline void SetWithKeys(Aws::Vector<Aws::String>&& value) { m_withKeysHasBeenSet = true; m_withKeys = std::move(value); }
    inline TrimString& WithWithKeys(const Aws::Vector<Aws::String>& value) { SetWithKeys(value); return *this;}
    inline TrimString& WithWithKeys(Aws::Vector<Aws::String>&& value) { SetWithKeys(std::move(value)); return *this;}
    inline TrimString& AddWithKeys(const Aws::String& value) { m_withKeysHasBeenSet = true; m_withKeys.push_back(value); return *this; }
    inline TrimString& AddWithKeys(Aws::String&& value) { m_withKeysHasBeenSet = true; m_withKeys.push_back(std::move(value)); return *this; }
    inline TrimString& AddWithKeys(const char* value) { m_withKeysHasBeenSet = true; m_withKeys.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_withKeys;
    bool m_withKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
