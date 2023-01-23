/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetIdentityPoliciesResult
  {
  public:
    AWS_SES_API GetIdentityPoliciesResult();
    AWS_SES_API GetIdentityPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API GetIdentityPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
