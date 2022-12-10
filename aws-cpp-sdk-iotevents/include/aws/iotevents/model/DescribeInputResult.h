/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeInputResult
  {
  public:
    AWS_IOTEVENTS_API DescribeInputResult();
    AWS_IOTEVENTS_API DescribeInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API DescribeInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
