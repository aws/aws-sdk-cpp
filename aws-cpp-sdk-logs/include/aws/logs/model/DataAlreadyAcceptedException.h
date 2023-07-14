﻿/**
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
   * <p>The event was already logged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DataAlreadyAcceptedException">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API DataAlreadyAcceptedException
  {
  public:
    DataAlreadyAcceptedException();
    DataAlreadyAcceptedException(Aws::Utils::Json::JsonView jsonValue);
    DataAlreadyAcceptedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetExpectedSequenceToken() const{ return m_expectedSequenceToken; }

    
    inline bool ExpectedSequenceTokenHasBeenSet() const { return m_expectedSequenceTokenHasBeenSet; }

    
    inline void SetExpectedSequenceToken(const Aws::String& value) { m_expectedSequenceTokenHasBeenSet = true; m_expectedSequenceToken = value; }

    
    inline void SetExpectedSequenceToken(Aws::String&& value) { m_expectedSequenceTokenHasBeenSet = true; m_expectedSequenceToken = std::move(value); }

    
    inline void SetExpectedSequenceToken(const char* value) { m_expectedSequenceTokenHasBeenSet = true; m_expectedSequenceToken.assign(value); }

    
    inline DataAlreadyAcceptedException& WithExpectedSequenceToken(const Aws::String& value) { SetExpectedSequenceToken(value); return *this;}

    
    inline DataAlreadyAcceptedException& WithExpectedSequenceToken(Aws::String&& value) { SetExpectedSequenceToken(std::move(value)); return *this;}

    
    inline DataAlreadyAcceptedException& WithExpectedSequenceToken(const char* value) { SetExpectedSequenceToken(value); return *this;}

  private:

    Aws::String m_expectedSequenceToken;
    bool m_expectedSequenceTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
