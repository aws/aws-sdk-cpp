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

  class AWS_FIREHOSE_API AmazonopensearchserviceBufferingHints
  {
  public:
    AmazonopensearchserviceBufferingHints();
    AmazonopensearchserviceBufferingHints(Aws::Utils::Json::JsonView jsonValue);
    AmazonopensearchserviceBufferingHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetIntervalInSeconds() const{ return m_intervalInSeconds; }

    
    inline bool IntervalInSecondsHasBeenSet() const { return m_intervalInSecondsHasBeenSet; }

    
    inline void SetIntervalInSeconds(int value) { m_intervalInSecondsHasBeenSet = true; m_intervalInSeconds = value; }

    
    inline AmazonopensearchserviceBufferingHints& WithIntervalInSeconds(int value) { SetIntervalInSeconds(value); return *this;}


    
    inline int GetSizeInMBs() const{ return m_sizeInMBs; }

    
    inline bool SizeInMBsHasBeenSet() const { return m_sizeInMBsHasBeenSet; }

    
    inline void SetSizeInMBs(int value) { m_sizeInMBsHasBeenSet = true; m_sizeInMBs = value; }

    
    inline AmazonopensearchserviceBufferingHints& WithSizeInMBs(int value) { SetSizeInMBs(value); return *this;}

  private:

    int m_intervalInSeconds;
    bool m_intervalInSecondsHasBeenSet = false;

    int m_sizeInMBs;
    bool m_sizeInMBsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
