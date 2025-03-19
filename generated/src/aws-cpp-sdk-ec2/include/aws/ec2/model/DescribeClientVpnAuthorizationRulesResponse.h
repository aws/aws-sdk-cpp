/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AuthorizationRule.h>
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
namespace EC2
{
namespace Model
{
  class DescribeClientVpnAuthorizationRulesResponse
  {
  public:
    AWS_EC2_API DescribeClientVpnAuthorizationRulesResponse() = default;
    AWS_EC2_API DescribeClientVpnAuthorizationRulesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeClientVpnAuthorizationRulesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the authorization rules.</p>
     */
    inline const Aws::Vector<AuthorizationRule>& GetAuthorizationRules() const { return m_authorizationRules; }
    template<typename AuthorizationRulesT = Aws::Vector<AuthorizationRule>>
    void SetAuthorizationRules(AuthorizationRulesT&& value) { m_authorizationRulesHasBeenSet = true; m_authorizationRules = std::forward<AuthorizationRulesT>(value); }
    template<typename AuthorizationRulesT = Aws::Vector<AuthorizationRule>>
    DescribeClientVpnAuthorizationRulesResponse& WithAuthorizationRules(AuthorizationRulesT&& value) { SetAuthorizationRules(std::forward<AuthorizationRulesT>(value)); return *this;}
    template<typename AuthorizationRulesT = AuthorizationRule>
    DescribeClientVpnAuthorizationRulesResponse& AddAuthorizationRules(AuthorizationRulesT&& value) { m_authorizationRulesHasBeenSet = true; m_authorizationRules.emplace_back(std::forward<AuthorizationRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeClientVpnAuthorizationRulesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeClientVpnAuthorizationRulesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthorizationRule> m_authorizationRules;
    bool m_authorizationRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
