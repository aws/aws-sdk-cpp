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
#include <aws/schemas/Schemas_EXPORTS.h>
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
namespace Schemas
{
namespace Model
{
  class AWS_SCHEMAS_API GetDiscoveredSchemaResult
  {
  public:
    GetDiscoveredSchemaResult();
    GetDiscoveredSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDiscoveredSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetContent() const{ return m_content; }

    
    inline void SetContent(const Aws::String& value) { m_content = value; }

    
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }

    
    inline void SetContent(const char* value) { m_content.assign(value); }

    
    inline GetDiscoveredSchemaResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    
    inline GetDiscoveredSchemaResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    
    inline GetDiscoveredSchemaResult& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_content;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
