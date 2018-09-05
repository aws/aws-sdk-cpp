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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{

  class AWS_DYNAMODB_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(Aws::Utils::Json::JsonView jsonValue);
    Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAddress() const{ return m_address; }

    
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    
    inline long long GetCachePeriodInMinutes() const{ return m_cachePeriodInMinutes; }

    
    inline void SetCachePeriodInMinutes(long long value) { m_cachePeriodInMinutesHasBeenSet = true; m_cachePeriodInMinutes = value; }

    
    inline Endpoint& WithCachePeriodInMinutes(long long value) { SetCachePeriodInMinutes(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    long long m_cachePeriodInMinutes;
    bool m_cachePeriodInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
