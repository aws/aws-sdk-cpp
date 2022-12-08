/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingListener.h>
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
  class DescribeCustomRoutingListenerResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingListenerResult();
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of a listener for a custom routing accelerator.</p>
     */
    inline const CustomRoutingListener& GetListener() const{ return m_listener; }

    /**
     * <p>The description of a listener for a custom routing accelerator.</p>
     */
    inline void SetListener(const CustomRoutingListener& value) { m_listener = value; }

    /**
     * <p>The description of a listener for a custom routing accelerator.</p>
     */
    inline void SetListener(CustomRoutingListener&& value) { m_listener = std::move(value); }

    /**
     * <p>The description of a listener for a custom routing accelerator.</p>
     */
    inline DescribeCustomRoutingListenerResult& WithListener(const CustomRoutingListener& value) { SetListener(value); return *this;}

    /**
     * <p>The description of a listener for a custom routing accelerator.</p>
     */
    inline DescribeCustomRoutingListenerResult& WithListener(CustomRoutingListener&& value) { SetListener(std::move(value)); return *this;}

  private:

    CustomRoutingListener m_listener;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
