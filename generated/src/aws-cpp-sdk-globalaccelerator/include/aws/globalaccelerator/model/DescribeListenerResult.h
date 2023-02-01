/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Listener.h>
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
  class DescribeListenerResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeListenerResult();
    AWS_GLOBALACCELERATOR_API DescribeListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of a listener.</p>
     */
    inline const Listener& GetListener() const{ return m_listener; }

    /**
     * <p>The description of a listener.</p>
     */
    inline void SetListener(const Listener& value) { m_listener = value; }

    /**
     * <p>The description of a listener.</p>
     */
    inline void SetListener(Listener&& value) { m_listener = std::move(value); }

    /**
     * <p>The description of a listener.</p>
     */
    inline DescribeListenerResult& WithListener(const Listener& value) { SetListener(value); return *this;}

    /**
     * <p>The description of a listener.</p>
     */
    inline DescribeListenerResult& WithListener(Listener&& value) { SetListener(std::move(value)); return *this;}

  private:

    Listener m_listener;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
