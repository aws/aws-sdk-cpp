/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/EndpointDescription.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class AddEndpointsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API AddEndpointsResult();
    AWS_GLOBALACCELERATOR_API AddEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API AddEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of endpoint objects.</p>
     */
    inline const Aws::Vector<EndpointDescription>& GetEndpointDescriptions() const{ return m_endpointDescriptions; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline void SetEndpointDescriptions(const Aws::Vector<EndpointDescription>& value) { m_endpointDescriptions = value; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline void SetEndpointDescriptions(Aws::Vector<EndpointDescription>&& value) { m_endpointDescriptions = std::move(value); }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline AddEndpointsResult& WithEndpointDescriptions(const Aws::Vector<EndpointDescription>& value) { SetEndpointDescriptions(value); return *this;}

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline AddEndpointsResult& WithEndpointDescriptions(Aws::Vector<EndpointDescription>&& value) { SetEndpointDescriptions(std::move(value)); return *this;}

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline AddEndpointsResult& AddEndpointDescriptions(const EndpointDescription& value) { m_endpointDescriptions.push_back(value); return *this; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline AddEndpointsResult& AddEndpointDescriptions(EndpointDescription&& value) { m_endpointDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline AddEndpointsResult& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline AddEndpointsResult& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline AddEndpointsResult& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}

  private:

    Aws::Vector<EndpointDescription> m_endpointDescriptions;

    Aws::String m_endpointGroupArn;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
