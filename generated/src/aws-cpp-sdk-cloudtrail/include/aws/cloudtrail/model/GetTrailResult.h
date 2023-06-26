/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/Trail.h>
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
namespace CloudTrail
{
namespace Model
{
  class GetTrailResult
  {
  public:
    AWS_CLOUDTRAIL_API GetTrailResult();
    AWS_CLOUDTRAIL_API GetTrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetTrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Trail& GetTrail() const{ return m_trail; }

    
    inline void SetTrail(const Trail& value) { m_trail = value; }

    
    inline void SetTrail(Trail&& value) { m_trail = std::move(value); }

    
    inline GetTrailResult& WithTrail(const Trail& value) { SetTrail(value); return *this;}

    
    inline GetTrailResult& WithTrail(Trail&& value) { SetTrail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Trail m_trail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
