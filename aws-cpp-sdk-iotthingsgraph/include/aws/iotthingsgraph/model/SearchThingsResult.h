/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/Thing.h>
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
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API SearchThingsResult
  {
  public:
    SearchThingsResult();
    SearchThingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchThingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of things in the result set.</p>
     */
    inline const Aws::Vector<Thing>& GetThings() const{ return m_things; }

    /**
     * <p>An array of things in the result set.</p>
     */
    inline void SetThings(const Aws::Vector<Thing>& value) { m_things = value; }

    /**
     * <p>An array of things in the result set.</p>
     */
    inline void SetThings(Aws::Vector<Thing>&& value) { m_things = std::move(value); }

    /**
     * <p>An array of things in the result set.</p>
     */
    inline SearchThingsResult& WithThings(const Aws::Vector<Thing>& value) { SetThings(value); return *this;}

    /**
     * <p>An array of things in the result set.</p>
     */
    inline SearchThingsResult& WithThings(Aws::Vector<Thing>&& value) { SetThings(std::move(value)); return *this;}

    /**
     * <p>An array of things in the result set.</p>
     */
    inline SearchThingsResult& AddThings(const Thing& value) { m_things.push_back(value); return *this; }

    /**
     * <p>An array of things in the result set.</p>
     */
    inline SearchThingsResult& AddThings(Thing&& value) { m_things.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline SearchThingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline SearchThingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline SearchThingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Thing> m_things;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
