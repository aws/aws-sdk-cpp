/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/AccountLimit.h>
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
namespace CloudFormation
{
namespace Model
{
  /**
   * <p>The output for the <a>DescribeAccountLimits</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeAccountLimitsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeAccountLimitsResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeAccountLimitsResult() = default;
    AWS_CLOUDFORMATION_API DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeAccountLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An account limit structure that contain a list of CloudFormation account
     * limits and their values.</p>
     */
    inline const Aws::Vector<AccountLimit>& GetAccountLimits() const { return m_accountLimits; }
    template<typename AccountLimitsT = Aws::Vector<AccountLimit>>
    void SetAccountLimits(AccountLimitsT&& value) { m_accountLimitsHasBeenSet = true; m_accountLimits = std::forward<AccountLimitsT>(value); }
    template<typename AccountLimitsT = Aws::Vector<AccountLimit>>
    DescribeAccountLimitsResult& WithAccountLimits(AccountLimitsT&& value) { SetAccountLimits(std::forward<AccountLimitsT>(value)); return *this;}
    template<typename AccountLimitsT = AccountLimit>
    DescribeAccountLimitsResult& AddAccountLimits(AccountLimitsT&& value) { m_accountLimitsHasBeenSet = true; m_accountLimits.emplace_back(std::forward<AccountLimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAccountLimitsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAccountLimitsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountLimit> m_accountLimits;
    bool m_accountLimitsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
