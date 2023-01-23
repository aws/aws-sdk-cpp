/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A list of names of sending authorization policies that apply to an
   * identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentityPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class ListIdentityPoliciesResult
  {
  public:
    AWS_SES_API ListIdentityPoliciesResult();
    AWS_SES_API ListIdentityPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListIdentityPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of names of policies that apply to the specified identity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }

    /**
     * <p>A list of names of policies that apply to the specified identity.</p>
     */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNames = value; }

    /**
     * <p>A list of names of policies that apply to the specified identity.</p>
     */
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNames = std::move(value); }

    /**
     * <p>A list of names of policies that apply to the specified identity.</p>
     */
    inline ListIdentityPoliciesResult& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>A list of names of policies that apply to the specified identity.</p>
     */
    inline ListIdentityPoliciesResult& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}

    /**
     * <p>A list of names of policies that apply to the specified identity.</p>
     */
    inline ListIdentityPoliciesResult& AddPolicyNames(const Aws::String& value) { m_policyNames.push_back(value); return *this; }

    /**
     * <p>A list of names of policies that apply to the specified identity.</p>
     */
    inline ListIdentityPoliciesResult& AddPolicyNames(Aws::String&& value) { m_policyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of policies that apply to the specified identity.</p>
     */
    inline ListIdentityPoliciesResult& AddPolicyNames(const char* value) { m_policyNames.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListIdentityPoliciesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListIdentityPoliciesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_policyNames;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
