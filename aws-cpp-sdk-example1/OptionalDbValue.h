/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/utils/memory/stl/AWSString.h>

#include <stdint.h>

namespace Aws
{
namespace Example1
{

// This somewhat represents the notion of null in a normal RDBS; in dynamo db, the concern is over missing attributes or attributes with illegal values (the empty string)
template <typename T>
class OptionalDbValue
{
    public:
        OptionalDbValue() :
            m_data(),
            m_isValid(false)
        {}

        OptionalDbValue(const T& data) :
            m_data(data),
            m_isValid(true)
        {}

        T& GetData() { return m_data; }
        const T& GetData() const { return m_data; }
        void SetData(const T& data) { 
            m_data = data; 
            m_isValid = true; 
        }

        bool IsDataValid() const { return m_isValid; }
        void SetDataValid(bool isValid) { m_isValid = isValid; }

    private:
        T m_data;
        bool m_isValid;
};

typedef OptionalDbValue<bool> OptionalDbBool;
typedef OptionalDbValue<int8_t> OptionalDbInt8;
typedef OptionalDbValue<uint8_t> OptionalDbUInt8;
typedef OptionalDbValue<int16_t> OptionalDbInt16;
typedef OptionalDbValue<uint16_t> OptionalDbUInt16;
typedef OptionalDbValue<int32_t> OptionalDbInt32;
typedef OptionalDbValue<uint32_t> OptionalDbUInt32;
typedef OptionalDbValue<int64_t> OptionalDbInt64;
typedef OptionalDbValue<uint64_t> OptionalDbUInt64;
typedef OptionalDbValue<float> OptionalDbFloat;
typedef OptionalDbValue<double> OptionalDbDouble;
typedef OptionalDbValue<Aws::String> OptionalDbString;

} // namespace Example1
} // namespace Aws
