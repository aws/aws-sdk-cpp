/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/Place.h>
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
namespace LocationService
{
namespace Model
{
  class GetPlaceResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetPlaceResult();
    AWS_LOCATIONSERVICE_API GetPlaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API GetPlaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the result, such as its address and position.</p>
     */
    inline const Place& GetPlace() const{ return m_place; }

    /**
     * <p>Details about the result, such as its address and position.</p>
     */
    inline void SetPlace(const Place& value) { m_place = value; }

    /**
     * <p>Details about the result, such as its address and position.</p>
     */
    inline void SetPlace(Place&& value) { m_place = std::move(value); }

    /**
     * <p>Details about the result, such as its address and position.</p>
     */
    inline GetPlaceResult& WithPlace(const Place& value) { SetPlace(value); return *this;}

    /**
     * <p>Details about the result, such as its address and position.</p>
     */
    inline GetPlaceResult& WithPlace(Place&& value) { SetPlace(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPlaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPlaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPlaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Place m_place;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
