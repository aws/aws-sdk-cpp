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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/TagrisStatus.h>
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
namespace IoTEvents
{
namespace Model
{
  class AWS_IOTEVENTS_API VerifyResourcesExistForTagrisResult
  {
  public:
    VerifyResourcesExistForTagrisResult();
    VerifyResourcesExistForTagrisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    VerifyResourcesExistForTagrisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Map<Aws::String, TagrisStatus>& GetTagrisSweepListResult() const{ return m_tagrisSweepListResult; }

    
    inline void SetTagrisSweepListResult(const Aws::Map<Aws::String, TagrisStatus>& value) { m_tagrisSweepListResult = value; }

    
    inline void SetTagrisSweepListResult(Aws::Map<Aws::String, TagrisStatus>&& value) { m_tagrisSweepListResult = std::move(value); }

    
    inline VerifyResourcesExistForTagrisResult& WithTagrisSweepListResult(const Aws::Map<Aws::String, TagrisStatus>& value) { SetTagrisSweepListResult(value); return *this;}

    
    inline VerifyResourcesExistForTagrisResult& WithTagrisSweepListResult(Aws::Map<Aws::String, TagrisStatus>&& value) { SetTagrisSweepListResult(std::move(value)); return *this;}

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(const Aws::String& key, const TagrisStatus& value) { m_tagrisSweepListResult.emplace(key, value); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(Aws::String&& key, const TagrisStatus& value) { m_tagrisSweepListResult.emplace(std::move(key), value); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(const Aws::String& key, TagrisStatus&& value) { m_tagrisSweepListResult.emplace(key, std::move(value)); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(Aws::String&& key, TagrisStatus&& value) { m_tagrisSweepListResult.emplace(std::move(key), std::move(value)); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(const char* key, TagrisStatus&& value) { m_tagrisSweepListResult.emplace(key, std::move(value)); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(const char* key, const TagrisStatus& value) { m_tagrisSweepListResult.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, TagrisStatus> m_tagrisSweepListResult;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
