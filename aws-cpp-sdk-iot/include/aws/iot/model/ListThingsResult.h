﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/model/ThingAttribute.h>

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
   * <p>The output from the ListThings operation.</p>
   */
  class AWS_IOT_API ListThingsResult
  {
  public:
    ListThingsResult();
    ListThingsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListThingsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The things.</p>
     */
    inline const Aws::Vector<ThingAttribute>& GetThings() const{ return m_things; }

    /**
     * <p>The things.</p>
     */
    inline void SetThings(const Aws::Vector<ThingAttribute>& value) { m_things = value; }

    /**
     * <p>The things.</p>
     */
    inline void SetThings(Aws::Vector<ThingAttribute>&& value) { m_things = value; }

    /**
     * <p>The things.</p>
     */
    inline ListThingsResult& WithThings(const Aws::Vector<ThingAttribute>& value) { SetThings(value); return *this;}

    /**
     * <p>The things.</p>
     */
    inline ListThingsResult& WithThings(Aws::Vector<ThingAttribute>&& value) { SetThings(value); return *this;}

    /**
     * <p>The things.</p>
     */
    inline ListThingsResult& AddThings(const ThingAttribute& value) { m_things.push_back(value); return *this; }

    /**
     * <p>The things.</p>
     */
    inline ListThingsResult& AddThings(ThingAttribute&& value) { m_things.push_back(value); return *this; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ThingAttribute> m_things;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
