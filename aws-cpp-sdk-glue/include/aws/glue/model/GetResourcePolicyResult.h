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
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetResourcePolicyResult
  {
  public:
    GetResourcePolicyResult();
    GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline const Aws::String& GetPolicyInJson() const{ return m_policyInJson; }

    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline void SetPolicyInJson(const Aws::String& value) { m_policyInJson = value; }

    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline void SetPolicyInJson(Aws::String&& value) { m_policyInJson = std::move(value); }

    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline void SetPolicyInJson(const char* value) { m_policyInJson.assign(value); }

    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline GetResourcePolicyResult& WithPolicyInJson(const Aws::String& value) { SetPolicyInJson(value); return *this;}

    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline GetResourcePolicyResult& WithPolicyInJson(Aws::String&& value) { SetPolicyInJson(std::move(value)); return *this;}

    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline GetResourcePolicyResult& WithPolicyInJson(const char* value) { SetPolicyInJson(value); return *this;}


    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }

    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline void SetPolicyHash(const Aws::String& value) { m_policyHash = value; }

    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline void SetPolicyHash(Aws::String&& value) { m_policyHash = std::move(value); }

    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline void SetPolicyHash(const char* value) { m_policyHash.assign(value); }

    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline GetResourcePolicyResult& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}

    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline GetResourcePolicyResult& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}

    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline GetResourcePolicyResult& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}


    /**
     * <p>The date and time at which the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time at which the policy was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The date and time at which the policy was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The date and time at which the policy was created.</p>
     */
    inline GetResourcePolicyResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time at which the policy was created.</p>
     */
    inline GetResourcePolicyResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The date and time at which the policy was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The date and time at which the policy was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The date and time at which the policy was last updated.</p>
     */
    inline GetResourcePolicyResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The date and time at which the policy was last updated.</p>
     */
    inline GetResourcePolicyResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_policyInJson;

    Aws::String m_policyHash;

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
