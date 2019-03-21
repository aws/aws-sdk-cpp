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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/ThingDocument.h>
#include <aws/iot/model/ThingGroupDocument.h>
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
  class AWS_IOT_API SearchIndexResult
  {
  public:
    SearchIndexResult();
    SearchIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token used to get the next set of results, or null if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to get the next set of results, or null if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to get the next set of results, or null if there are no
     * additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to get the next set of results, or null if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to get the next set of results, or null if there are no
     * additional results.</p>
     */
    inline SearchIndexResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to get the next set of results, or null if there are no
     * additional results.</p>
     */
    inline SearchIndexResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to get the next set of results, or null if there are no
     * additional results.</p>
     */
    inline SearchIndexResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The things that match the search query.</p>
     */
    inline const Aws::Vector<ThingDocument>& GetThings() const{ return m_things; }

    /**
     * <p>The things that match the search query.</p>
     */
    inline void SetThings(const Aws::Vector<ThingDocument>& value) { m_things = value; }

    /**
     * <p>The things that match the search query.</p>
     */
    inline void SetThings(Aws::Vector<ThingDocument>&& value) { m_things = std::move(value); }

    /**
     * <p>The things that match the search query.</p>
     */
    inline SearchIndexResult& WithThings(const Aws::Vector<ThingDocument>& value) { SetThings(value); return *this;}

    /**
     * <p>The things that match the search query.</p>
     */
    inline SearchIndexResult& WithThings(Aws::Vector<ThingDocument>&& value) { SetThings(std::move(value)); return *this;}

    /**
     * <p>The things that match the search query.</p>
     */
    inline SearchIndexResult& AddThings(const ThingDocument& value) { m_things.push_back(value); return *this; }

    /**
     * <p>The things that match the search query.</p>
     */
    inline SearchIndexResult& AddThings(ThingDocument&& value) { m_things.push_back(std::move(value)); return *this; }


    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline const Aws::Vector<ThingGroupDocument>& GetThingGroups() const{ return m_thingGroups; }

    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline void SetThingGroups(const Aws::Vector<ThingGroupDocument>& value) { m_thingGroups = value; }

    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline void SetThingGroups(Aws::Vector<ThingGroupDocument>&& value) { m_thingGroups = std::move(value); }

    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline SearchIndexResult& WithThingGroups(const Aws::Vector<ThingGroupDocument>& value) { SetThingGroups(value); return *this;}

    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline SearchIndexResult& WithThingGroups(Aws::Vector<ThingGroupDocument>&& value) { SetThingGroups(std::move(value)); return *this;}

    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline SearchIndexResult& AddThingGroups(const ThingGroupDocument& value) { m_thingGroups.push_back(value); return *this; }

    /**
     * <p>The thing groups that match the search query.</p>
     */
    inline SearchIndexResult& AddThingGroups(ThingGroupDocument&& value) { m_thingGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ThingDocument> m_things;

    Aws::Vector<ThingGroupDocument> m_thingGroups;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
