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
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{
  class AWS_SHIELD_API CreateProtectionResult
  {
  public:
    CreateProtectionResult();
    CreateProtectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProtectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object that is
     * created.</p>
     */
    inline const Aws::String& GetProtectionId() const{ return m_protectionId; }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object that is
     * created.</p>
     */
    inline void SetProtectionId(const Aws::String& value) { m_protectionId = value; }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object that is
     * created.</p>
     */
    inline void SetProtectionId(Aws::String&& value) { m_protectionId = std::move(value); }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object that is
     * created.</p>
     */
    inline void SetProtectionId(const char* value) { m_protectionId.assign(value); }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object that is
     * created.</p>
     */
    inline CreateProtectionResult& WithProtectionId(const Aws::String& value) { SetProtectionId(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object that is
     * created.</p>
     */
    inline CreateProtectionResult& WithProtectionId(Aws::String&& value) { SetProtectionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object that is
     * created.</p>
     */
    inline CreateProtectionResult& WithProtectionId(const char* value) { SetProtectionId(value); return *this;}

  private:

    Aws::String m_protectionId;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
