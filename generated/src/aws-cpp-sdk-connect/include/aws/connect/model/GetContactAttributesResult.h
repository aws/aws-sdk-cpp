/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class GetContactAttributesResult
  {
  public:
    AWS_CONNECT_API GetContactAttributesResult();
    AWS_CONNECT_API GetContactAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetContactAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Information about the attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>Information about the attributes.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the attributes.</p>
     */
    inline GetContactAttributesResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
