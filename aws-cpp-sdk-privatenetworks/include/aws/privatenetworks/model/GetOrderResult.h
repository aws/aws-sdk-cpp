/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/Order.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class GetOrderResult
  {
  public:
    AWS_PRIVATENETWORKS_API GetOrderResult();
    AWS_PRIVATENETWORKS_API GetOrderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API GetOrderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the order.</p>
     */
    inline const Order& GetOrder() const{ return m_order; }

    /**
     * <p>Information about the order.</p>
     */
    inline void SetOrder(const Order& value) { m_order = value; }

    /**
     * <p>Information about the order.</p>
     */
    inline void SetOrder(Order&& value) { m_order = std::move(value); }

    /**
     * <p>Information about the order.</p>
     */
    inline GetOrderResult& WithOrder(const Order& value) { SetOrder(value); return *this;}

    /**
     * <p>Information about the order.</p>
     */
    inline GetOrderResult& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}


    /**
     * <p> The order tags. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The order tags. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p> The order tags. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The order tags. </p>
     */
    inline GetOrderResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Order m_order;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
