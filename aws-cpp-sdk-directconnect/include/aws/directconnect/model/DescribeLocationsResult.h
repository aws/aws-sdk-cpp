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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Location.h>
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
namespace DirectConnect
{
namespace Model
{
  class AWS_DIRECTCONNECT_API DescribeLocationsResult
  {
  public:
    DescribeLocationsResult();
    DescribeLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The locations.</p>
     */
    inline const Aws::Vector<Location>& GetLocations() const{ return m_locations; }

    /**
     * <p>The locations.</p>
     */
    inline void SetLocations(const Aws::Vector<Location>& value) { m_locations = value; }

    /**
     * <p>The locations.</p>
     */
    inline void SetLocations(Aws::Vector<Location>&& value) { m_locations = std::move(value); }

    /**
     * <p>The locations.</p>
     */
    inline DescribeLocationsResult& WithLocations(const Aws::Vector<Location>& value) { SetLocations(value); return *this;}

    /**
     * <p>The locations.</p>
     */
    inline DescribeLocationsResult& WithLocations(Aws::Vector<Location>&& value) { SetLocations(std::move(value)); return *this;}

    /**
     * <p>The locations.</p>
     */
    inline DescribeLocationsResult& AddLocations(const Location& value) { m_locations.push_back(value); return *this; }

    /**
     * <p>The locations.</p>
     */
    inline DescribeLocationsResult& AddLocations(Location&& value) { m_locations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Location> m_locations;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
