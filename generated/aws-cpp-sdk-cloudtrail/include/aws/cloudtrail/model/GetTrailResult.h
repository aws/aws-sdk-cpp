/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/Trail.h>
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
  class AWS_CLOUDTRAIL_API GetTrailResult
  {
  public:
    GetTrailResult();
    GetTrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Trail& GetTrail() const{ return m_trail; }

    
    inline void SetTrail(const Trail& value) { m_trail = value; }

    
    inline void SetTrail(Trail&& value) { m_trail = std::move(value); }

    
    inline GetTrailResult& WithTrail(const Trail& value) { SetTrail(value); return *this;}

    
    inline GetTrailResult& WithTrail(Trail&& value) { SetTrail(std::move(value)); return *this;}

  private:

    Trail m_trail;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
