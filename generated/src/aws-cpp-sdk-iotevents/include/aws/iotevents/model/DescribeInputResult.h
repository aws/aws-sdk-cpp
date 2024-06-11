﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/Input.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>Information about the input.</p>
     */
    inline const Input& GetInput() const{ return m_input; }
    inline void SetInput(const Input& value) { m_input = value; }
    inline void SetInput(Input&& value) { m_input = std::move(value); }
    inline DescribeInputResult& WithInput(const Input& value) { SetInput(value); return *this;}
    inline DescribeInputResult& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Input m_input;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
