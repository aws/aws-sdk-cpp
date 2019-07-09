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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/model/TagInfoForResource.h>
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
namespace WAFRegional
{
namespace Model
{
  class AWS_WAFREGIONAL_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    
    inline ListTagsForResourceResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    
    inline ListTagsForResourceResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    
    inline ListTagsForResourceResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const TagInfoForResource& GetTagInfoForResource() const{ return m_tagInfoForResource; }

    
    inline void SetTagInfoForResource(const TagInfoForResource& value) { m_tagInfoForResource = value; }

    
    inline void SetTagInfoForResource(TagInfoForResource&& value) { m_tagInfoForResource = std::move(value); }

    
    inline ListTagsForResourceResult& WithTagInfoForResource(const TagInfoForResource& value) { SetTagInfoForResource(value); return *this;}

    
    inline ListTagsForResourceResult& WithTagInfoForResource(TagInfoForResource&& value) { SetTagInfoForResource(std::move(value)); return *this;}

  private:

    Aws::String m_nextMarker;

    TagInfoForResource m_tagInfoForResource;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
