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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_IOT_API ListThingsInThingGroupResult
  {
  public:
    ListThingsInThingGroupResult();
    ListThingsInThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListThingsInThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The things in the specified thing group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThings() const{ return m_things; }

    /**
     * <p>The things in the specified thing group.</p>
     */
    inline void SetThings(const Aws::Vector<Aws::String>& value) { m_things = value; }

    /**
     * <p>The things in the specified thing group.</p>
     */
    inline void SetThings(Aws::Vector<Aws::String>&& value) { m_things = std::move(value); }

    /**
     * <p>The things in the specified thing group.</p>
     */
    inline ListThingsInThingGroupResult& WithThings(const Aws::Vector<Aws::String>& value) { SetThings(value); return *this;}

    /**
     * <p>The things in the specified thing group.</p>
     */
    inline ListThingsInThingGroupResult& WithThings(Aws::Vector<Aws::String>&& value) { SetThings(std::move(value)); return *this;}

    /**
     * <p>The things in the specified thing group.</p>
     */
    inline ListThingsInThingGroupResult& AddThings(const Aws::String& value) { m_things.push_back(value); return *this; }

    /**
     * <p>The things in the specified thing group.</p>
     */
    inline ListThingsInThingGroupResult& AddThings(Aws::String&& value) { m_things.push_back(std::move(value)); return *this; }

    /**
     * <p>The things in the specified thing group.</p>
     */
    inline ListThingsInThingGroupResult& AddThings(const char* value) { m_things.push_back(value); return *this; }


    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingsInThingGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingsInThingGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to get the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingsInThingGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_things;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
