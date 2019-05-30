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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/Input.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTEvents
{
namespace Model
{
  class AWS_IOTEVENTS_API DescribeInputResult
  {
  public:
    DescribeInputResult();
    DescribeInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the input.</p>
     */
    inline const Input& GetInput() const{ return m_input; }

    /**
     * <p>Information about the input.</p>
     */
    inline void SetInput(const Input& value) { m_input = value; }

    /**
     * <p>Information about the input.</p>
     */
    inline void SetInput(Input&& value) { m_input = std::move(value); }

    /**
     * <p>Information about the input.</p>
     */
    inline DescribeInputResult& WithInput(const Input& value) { SetInput(value); return *this;}

    /**
     * <p>Information about the input.</p>
     */
    inline DescribeInputResult& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}

  private:

    Input m_input;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
