/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/LocationModel.h>
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
namespace GameLift
{
namespace Model
{
  class CreateLocationResult
  {
  public:
    AWS_GAMELIFT_API CreateLocationResult();
    AWS_GAMELIFT_API CreateLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the custom location you created.</p>
     */
    inline const LocationModel& GetLocation() const{ return m_location; }

    /**
     * <p>The details of the custom location you created.</p>
     */
    inline void SetLocation(const LocationModel& value) { m_location = value; }

    /**
     * <p>The details of the custom location you created.</p>
     */
    inline void SetLocation(LocationModel&& value) { m_location = std::move(value); }

    /**
     * <p>The details of the custom location you created.</p>
     */
    inline CreateLocationResult& WithLocation(const LocationModel& value) { SetLocation(value); return *this;}

    /**
     * <p>The details of the custom location you created.</p>
     */
    inline CreateLocationResult& WithLocation(LocationModel&& value) { SetLocation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LocationModel m_location;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
