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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class AWS_PINPOINT_API CreateJourneyResult
  {
  public:
    CreateJourneyResult();
    CreateJourneyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateJourneyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JourneyResponse& GetJourneyResponse() const{ return m_journeyResponse; }

    
    inline void SetJourneyResponse(const JourneyResponse& value) { m_journeyResponse = value; }

    
    inline void SetJourneyResponse(JourneyResponse&& value) { m_journeyResponse = std::move(value); }

    
    inline CreateJourneyResult& WithJourneyResponse(const JourneyResponse& value) { SetJourneyResponse(value); return *this;}

    
    inline CreateJourneyResult& WithJourneyResponse(JourneyResponse&& value) { SetJourneyResponse(std::move(value)); return *this;}

  private:

    JourneyResponse m_journeyResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
