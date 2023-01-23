/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListCustomRoutingListenersResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingListenersResult();
    AWS_GLOBALACCELERATOR_API ListCustomRoutingListenersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingListenersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of listeners for a custom routing accelerator.</p>
     */
    inline const Aws::Vector<CustomRoutingListener>& GetListeners() const{ return m_listeners; }

    /**
     * <p>The list of listeners for a custom routing accelerator.</p>
     */
    inline void SetListeners(const Aws::Vector<CustomRoutingListener>& value) { m_listeners = value; }

    /**
     * <p>The list of listeners for a custom routing accelerator.</p>
     */
    inline void SetListeners(Aws::Vector<CustomRoutingListener>&& value) { m_listeners = std::move(value); }

    /**
     * <p>The list of listeners for a custom routing accelerator.</p>
     */
    inline ListCustomRoutingListenersResult& WithListeners(const Aws::Vector<CustomRoutingListener>& value) { SetListeners(value); return *this;}

    /**
     * <p>The list of listeners for a custom routing accelerator.</p>
     */
    inline ListCustomRoutingListenersResult& WithListeners(Aws::Vector<CustomRoutingListener>&& value) { SetListeners(std::move(value)); return *this;}

    /**
     * <p>The list of listeners for a custom routing accelerator.</p>
     */
    inline ListCustomRoutingListenersResult& AddListeners(const CustomRoutingListener& value) { m_listeners.push_back(value); return *this; }

    /**
     * <p>The list of listeners for a custom routing accelerator.</p>
     */
    inline ListCustomRoutingListenersResult& AddListeners(CustomRoutingListener&& value) { m_listeners.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingListenersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingListenersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListCustomRoutingListenersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomRoutingListener> m_listeners;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
