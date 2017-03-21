/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace VitalServices
{
namespace Model
{
  class AWS_VITALSERVICES_API urlForFileResult
  {
  public:
    urlForFileResult();
    urlForFileResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    urlForFileResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetUrl() const{ return m_url; }

    
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    
    inline void SetUrl(Aws::String&& value) { m_url = value; }

    
    inline void SetUrl(const char* value) { m_url.assign(value); }

    
    inline urlForFileResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    
    inline urlForFileResult& WithUrl(Aws::String&& value) { SetUrl(value); return *this;}

    
    inline urlForFileResult& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:
    Aws::String m_url;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
