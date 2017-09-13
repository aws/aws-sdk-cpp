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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{
  /**
   * <p>Represents the requested sending authorization policies.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API GetIdentityPoliciesResult
  {
  public:
    GetIdentityPoliciesResult();
    GetIdentityPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetIdentityPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A map of policy names to policies.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPolicies() const{ return m_policies; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline void SetPolicies(const Aws::Map<Aws::String, Aws::String>& value) { m_policies = value; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline void SetPolicies(Aws::Map<Aws::String, Aws::String>&& value) { m_policies = std::move(value); }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& WithPolicies(const Aws::Map<Aws::String, Aws::String>& value) { SetPolicies(value); return *this;}

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& WithPolicies(Aws::Map<Aws::String, Aws::String>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& AddPolicies(const Aws::String& key, const Aws::String& value) { m_policies.emplace(key, value); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& AddPolicies(Aws::String&& key, const Aws::String& value) { m_policies.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& AddPolicies(const Aws::String& key, Aws::String&& value) { m_policies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& AddPolicies(Aws::String&& key, Aws::String&& value) { m_policies.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& AddPolicies(const char* key, Aws::String&& value) { m_policies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& AddPolicies(Aws::String&& key, const char* value) { m_policies.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of policy names to policies.</p>
     */
    inline GetIdentityPoliciesResult& AddPolicies(const char* key, const char* value) { m_policies.emplace(key, value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIdentityPoliciesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIdentityPoliciesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_policies;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
