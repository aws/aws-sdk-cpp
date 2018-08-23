/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  class AWS_REKOGNITION_API Section
  {
  public:
    Section();
    Section(Aws::Utils::Json::JsonView jsonValue);
    Section& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline long long GetStartTimestamp() const{ return m_startTimestamp; }

    
    inline void SetStartTimestamp(long long value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    
    inline Section& WithStartTimestamp(long long value) { SetStartTimestamp(value); return *this;}


    
    inline long long GetEndTimestamp() const{ return m_endTimestamp; }

    
    inline void SetEndTimestamp(long long value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }

    
    inline Section& WithEndTimestamp(long long value) { SetEndTimestamp(value); return *this;}

  private:

    long long m_startTimestamp;
    bool m_startTimestampHasBeenSet;

    long long m_endTimestamp;
    bool m_endTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
