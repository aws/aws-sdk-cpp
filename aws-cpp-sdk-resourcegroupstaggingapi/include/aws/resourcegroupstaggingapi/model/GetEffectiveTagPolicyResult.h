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
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class AWS_RESOURCEGROUPSTAGGINGAPI_API GetEffectiveTagPolicyResult
  {
  public:
    GetEffectiveTagPolicyResult();
    GetEffectiveTagPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEffectiveTagPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The contents of the tag policy that is effective for this account.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The contents of the tag policy that is effective for this account.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The contents of the tag policy that is effective for this account.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The contents of the tag policy that is effective for this account.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The contents of the tag policy that is effective for this account.</p>
     */
    inline GetEffectiveTagPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The contents of the tag policy that is effective for this account.</p>
     */
    inline GetEffectiveTagPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The contents of the tag policy that is effective for this account.</p>
     */
    inline GetEffectiveTagPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The last time this tag policy was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The last time this tag policy was updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdated = value; }

    /**
     * <p>The last time this tag policy was updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdated = std::move(value); }

    /**
     * <p>The last time this tag policy was updated.</p>
     */
    inline GetEffectiveTagPolicyResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The last time this tag policy was updated.</p>
     */
    inline GetEffectiveTagPolicyResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_policy;

    Aws::Utils::DateTime m_lastUpdated;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
