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
    AWS_CLOUDFORMATION_API DescribeAccountLimitsResult();
    AWS_CLOUDFORMATION_API DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeAccountLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An account limit structure that contain a list of CloudFormation account
     * limits and their values.</p>
     */
    inline const Aws::Vector<AccountLimit>& GetAccountLimits() const{ return m_accountLimits; }
    inline void SetAccountLimits(const Aws::Vector<AccountLimit>& value) { m_accountLimits = value; }
    inline void SetAccountLimits(Aws::Vector<AccountLimit>&& value) { m_accountLimits = std::move(value); }
    inline DescribeAccountLimitsResult& WithAccountLimits(const Aws::Vector<AccountLimit>& value) { SetAccountLimits(value); return *this;}
    inline DescribeAccountLimitsResult& WithAccountLimits(Aws::Vector<AccountLimit>&& value) { SetAccountLimits(std::move(value)); return *this;}
    inline DescribeAccountLimitsResult& AddAccountLimits(const AccountLimit& value) { m_accountLimits.push_back(value); return *this; }
    inline DescribeAccountLimitsResult& AddAccountLimits(AccountLimit&& value) { m_accountLimits.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeAccountLimitsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAccountLimitsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAccountLimitsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeAccountLimitsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeAccountLimitsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountLimit> m_accountLimits;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
