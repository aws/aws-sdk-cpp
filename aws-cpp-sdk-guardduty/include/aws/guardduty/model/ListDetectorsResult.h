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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API ListDetectorsResult
  {
  public:
    ListDetectorsResult();
    ListDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Aws::String>& GetDetectorIds() const{ return m_detectorIds; }

    
    inline void SetDetectorIds(const Aws::Vector<Aws::String>& value) { m_detectorIds = value; }

    
    inline void SetDetectorIds(Aws::Vector<Aws::String>&& value) { m_detectorIds = std::move(value); }

    
    inline ListDetectorsResult& WithDetectorIds(const Aws::Vector<Aws::String>& value) { SetDetectorIds(value); return *this;}

    
    inline ListDetectorsResult& WithDetectorIds(Aws::Vector<Aws::String>&& value) { SetDetectorIds(std::move(value)); return *this;}

    
    inline ListDetectorsResult& AddDetectorIds(const Aws::String& value) { m_detectorIds.push_back(value); return *this; }

    
    inline ListDetectorsResult& AddDetectorIds(Aws::String&& value) { m_detectorIds.push_back(std::move(value)); return *this; }

    
    inline ListDetectorsResult& AddDetectorIds(const char* value) { m_detectorIds.push_back(value); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListDetectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListDetectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListDetectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_detectorIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
