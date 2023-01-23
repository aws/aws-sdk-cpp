/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeEndpointResult
  {
  public:
    AWS_IOT_API DescribeEndpointResult();
    AWS_IOT_API DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
