/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeLocationsResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeLocationsResult();
    AWS_DIRECTCONNECT_API DescribeLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Location> m_locations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
