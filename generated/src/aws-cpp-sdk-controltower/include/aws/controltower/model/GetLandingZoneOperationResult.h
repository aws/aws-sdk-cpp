/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/LandingZoneOperationDetail.h>
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
namespace ControlTower
{
namespace Model
{
  class GetLandingZoneOperationResult
  {
  public:
    AWS_CONTROLTOWER_API GetLandingZoneOperationResult();
    AWS_CONTROLTOWER_API GetLandingZoneOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetLandingZoneOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about a landing zone operation.</p>
     */
    inline const LandingZoneOperationDetail& GetOperationDetails() const{ return m_operationDetails; }

    /**
     * <p>Details about a landing zone operation.</p>
     */
    inline void SetOperationDetails(const LandingZoneOperationDetail& value) { m_operationDetails = value; }

    /**
     * <p>Details about a landing zone operation.</p>
     */
    inline void SetOperationDetails(LandingZoneOperationDetail&& value) { m_operationDetails = std::move(value); }

    /**
     * <p>Details about a landing zone operation.</p>
     */
    inline GetLandingZoneOperationResult& WithOperationDetails(const LandingZoneOperationDetail& value) { SetOperationDetails(value); return *this;}

    /**
     * <p>Details about a landing zone operation.</p>
     */
    inline GetLandingZoneOperationResult& WithOperationDetails(LandingZoneOperationDetail&& value) { SetOperationDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLandingZoneOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLandingZoneOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLandingZoneOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LandingZoneOperationDetail m_operationDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
