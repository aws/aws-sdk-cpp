/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>

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
namespace Firehose
{
namespace Model
{

  class AWS_FIREHOSE_API AmazonopensearchserviceRetryOptions
  {
  public:
    AmazonopensearchserviceRetryOptions();
    AmazonopensearchserviceRetryOptions(Aws::Utils::Json::JsonView jsonValue);
    AmazonopensearchserviceRetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    
    inline AmazonopensearchserviceRetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
