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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API CreateImageBuilderStreamingURLResult
  {
  public:
    CreateImageBuilderStreamingURLResult();
    CreateImageBuilderStreamingURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateImageBuilderStreamingURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetStreamingURL() const{ return m_streamingURL; }

    
    inline void SetStreamingURL(const Aws::String& value) { m_streamingURL = value; }

    
    inline void SetStreamingURL(Aws::String&& value) { m_streamingURL = std::move(value); }

    
    inline void SetStreamingURL(const char* value) { m_streamingURL.assign(value); }

    
    inline CreateImageBuilderStreamingURLResult& WithStreamingURL(const Aws::String& value) { SetStreamingURL(value); return *this;}

    
    inline CreateImageBuilderStreamingURLResult& WithStreamingURL(Aws::String&& value) { SetStreamingURL(std::move(value)); return *this;}

    
    inline CreateImageBuilderStreamingURLResult& WithStreamingURL(const char* value) { SetStreamingURL(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetExpires() const{ return m_expires; }

    
    inline void SetExpires(const Aws::Utils::DateTime& value) { m_expires = value; }

    
    inline void SetExpires(Aws::Utils::DateTime&& value) { m_expires = std::move(value); }

    
    inline CreateImageBuilderStreamingURLResult& WithExpires(const Aws::Utils::DateTime& value) { SetExpires(value); return *this;}

    
    inline CreateImageBuilderStreamingURLResult& WithExpires(Aws::Utils::DateTime&& value) { SetExpires(std::move(value)); return *this;}

  private:

    Aws::String m_streamingURL;

    Aws::Utils::DateTime m_expires;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
