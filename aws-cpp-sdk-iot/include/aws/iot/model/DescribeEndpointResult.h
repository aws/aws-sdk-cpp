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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the DescribeEndpoint operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEndpointResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API DescribeEndpointResult
  {
  public:
    DescribeEndpointResult();
    DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoint. The format of the endpoint is as follows:
     * <i>identifier</i>.iot.<i>region</i>.amazonaws.com.</p>
     */
    inline const Aws::String& GetEndpointAddress() const{ return m_endpointAddress; }

    /**
     * <p>The endpoint. The format of the endpoint is as follows:
     * <i>identifier</i>.iot.<i>region</i>.amazonaws.com.</p>
     */
    inline void SetEndpointAddress(const Aws::String& value) { m_endpointAddress = value; }

    /**
     * <p>The endpoint. The format of the endpoint is as follows:
     * <i>identifier</i>.iot.<i>region</i>.amazonaws.com.</p>
     */
    inline void SetEndpointAddress(Aws::String&& value) { m_endpointAddress = std::move(value); }

    /**
     * <p>The endpoint. The format of the endpoint is as follows:
     * <i>identifier</i>.iot.<i>region</i>.amazonaws.com.</p>
     */
    inline void SetEndpointAddress(const char* value) { m_endpointAddress.assign(value); }

    /**
     * <p>The endpoint. The format of the endpoint is as follows:
     * <i>identifier</i>.iot.<i>region</i>.amazonaws.com.</p>
     */
    inline DescribeEndpointResult& WithEndpointAddress(const Aws::String& value) { SetEndpointAddress(value); return *this;}

    /**
     * <p>The endpoint. The format of the endpoint is as follows:
     * <i>identifier</i>.iot.<i>region</i>.amazonaws.com.</p>
     */
    inline DescribeEndpointResult& WithEndpointAddress(Aws::String&& value) { SetEndpointAddress(std::move(value)); return *this;}

    /**
     * <p>The endpoint. The format of the endpoint is as follows:
     * <i>identifier</i>.iot.<i>region</i>.amazonaws.com.</p>
     */
    inline DescribeEndpointResult& WithEndpointAddress(const char* value) { SetEndpointAddress(value); return *this;}

  private:

    Aws::String m_endpointAddress;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
