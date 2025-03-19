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
   * <p>The event was already logged.</p>  <p> <code>PutLogEvents</code>
   * actions are now always accepted and never return
   * <code>DataAlreadyAcceptedException</code> regardless of whether a given batch of
   * log events has already been accepted. </p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DataAlreadyAcceptedException">AWS
   * API Reference</a></p>
   */
  class DataAlreadyAcceptedException
  {
  public:
    AWS_CLOUDWATCHLOGS_API DataAlreadyAcceptedException() = default;
    AWS_CLOUDWATCHLOGS_API DataAlreadyAcceptedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API DataAlreadyAcceptedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetExpectedSequenceToken() const { return m_expectedSequenceToken; }
    inline bool ExpectedSequenceTokenHasBeenSet() const { return m_expectedSequenceTokenHasBeenSet; }
    template<typename ExpectedSequenceTokenT = Aws::String>
    void SetExpectedSequenceToken(ExpectedSequenceTokenT&& value) { m_expectedSequenceTokenHasBeenSet = true; m_expectedSequenceToken = std::forward<ExpectedSequenceTokenT>(value); }
    template<typename ExpectedSequenceTokenT = Aws::String>
    DataAlreadyAcceptedException& WithExpectedSequenceToken(ExpectedSequenceTokenT&& value) { SetExpectedSequenceToken(std::forward<ExpectedSequenceTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expectedSequenceToken;
    bool m_expectedSequenceTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
