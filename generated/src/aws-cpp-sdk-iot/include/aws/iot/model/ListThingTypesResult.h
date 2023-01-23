/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListThingTypesResult
  {
  public:
    AWS_IOT_API ListThingTypesResult();
    AWS_IOT_API ListThingTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The token for the next set of results. Will not be returned if operation has
     * returned all results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Will not be returned if operation has
     * returned all results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Will not be returned if operation has
     * returned all results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Will not be returned if operation has
     * returned all results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Will not be returned if operation has
     * returned all results.</p>
     */
    inline ListThingTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Will not be returned if operation has
     * returned all results.</p>
     */
    inline ListThingTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Will not be returned if operation has
     * returned all results.</p>
     */
    inline ListThingTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ThingTypeDefinition> m_thingTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
