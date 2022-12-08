/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingAttribute.h>
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
   * <p>The output from the ListThings operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsResponse">AWS
   * API Reference</a></p>
   */
  class ListThingsResult
  {
  public:
    AWS_IOT_API ListThingsResult();
    AWS_IOT_API ListThingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetThings(Aws::Vector<ThingAttribute>&& value) { m_things = std::move(value); }

    /**
     * <p>The things.</p>
     */
    inline ListThingsResult& WithThings(const Aws::Vector<ThingAttribute>& value) { SetThings(value); return *this;}

    /**
     * <p>The things.</p>
     */
    inline ListThingsResult& WithThings(Aws::Vector<ThingAttribute>&& value) { SetThings(std::move(value)); return *this;}

    /**
     * <p>The things.</p>
     */
    inline ListThingsResult& AddThings(const ThingAttribute& value) { m_things.push_back(value); return *this; }

    /**
     * <p>The things.</p>
     */
    inline ListThingsResult& AddThings(ThingAttribute&& value) { m_things.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline ListThingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline ListThingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results. Will not be returned if
     * operation has returned all results.</p>
     */
    inline ListThingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ThingAttribute> m_things;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
