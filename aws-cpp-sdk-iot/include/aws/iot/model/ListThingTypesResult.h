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
#include <aws/iot/model/ThingTypeDefinition.h>
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
  /**
   * <p>The output for the ListThingTypes operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingTypesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ListThingTypesResult
  {
  public:
    ListThingTypesResult();
    ListThingTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListThingTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The thing types.</p>
     */
    inline const Aws::Vector<ThingTypeDefinition>& GetThingTypes() const{ return m_thingTypes; }

    /**
     * <p>The thing types.</p>
     */
    inline void SetThingTypes(const Aws::Vector<ThingTypeDefinition>& value) { m_thingTypes = value; }

    /**
     * <p>The thing types.</p>
     */
    inline void SetThingTypes(Aws::Vector<ThingTypeDefinition>&& value) { m_thingTypes = std::move(value); }

    /**
     * <p>The thing types.</p>
     */
    inline ListThingTypesResult& WithThingTypes(const Aws::Vector<ThingTypeDefinition>& value) { SetThingTypes(value); return *this;}

    /**
     * <p>The thing types.</p>
     */
    inline ListThingTypesResult& WithThingTypes(Aws::Vector<ThingTypeDefinition>&& value) { SetThingTypes(std::move(value)); return *this;}

    /**
     * <p>The thing types.</p>
     */
    inline ListThingTypesResult& AddThingTypes(const ThingTypeDefinition& value) { m_thingTypes.push_back(value); return *this; }

    /**
     * <p>The thing types.</p>
     */
    inline ListThingTypesResult& AddThingTypes(ThingTypeDefinition&& value) { m_thingTypes.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or <b>null</b> if there are no
     * additional results.</p>
     */
    inline ListThingTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ThingTypeDefinition> m_thingTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
