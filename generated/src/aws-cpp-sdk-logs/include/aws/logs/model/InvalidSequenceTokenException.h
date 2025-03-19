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
   * <p>The sequence token is not valid. You can get the correct sequence token in
   * the <code>expectedSequenceToken</code> field in the
   * <code>InvalidSequenceTokenException</code> message. </p>  <p>
   * <code>PutLogEvents</code> actions are now always accepted and never return
   * <code>InvalidSequenceTokenException</code> regardless of receiving an invalid
   * sequence token. </p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/InvalidSequenceTokenException">AWS
   * API Reference</a></p>
   */
  class InvalidSequenceTokenException
  {
  public:
    AWS_CLOUDWATCHLOGS_API InvalidSequenceTokenException() = default;
    AWS_CLOUDWATCHLOGS_API InvalidSequenceTokenException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API InvalidSequenceTokenException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetExpectedSequenceToken() const { return m_expectedSequenceToken; }
    inline bool ExpectedSequenceTokenHasBeenSet() const { return m_expectedSequenceTokenHasBeenSet; }
    template<typename ExpectedSequenceTokenT = Aws::String>
    void SetExpectedSequenceToken(ExpectedSequenceTokenT&& value) { m_expectedSequenceTokenHasBeenSet = true; m_expectedSequenceToken = std::forward<ExpectedSequenceTokenT>(value); }
    template<typename ExpectedSequenceTokenT = Aws::String>
    InvalidSequenceTokenException& WithExpectedSequenceToken(ExpectedSequenceTokenT&& value) { SetExpectedSequenceToken(std::forward<ExpectedSequenceTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expectedSequenceToken;
    bool m_expectedSequenceTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
