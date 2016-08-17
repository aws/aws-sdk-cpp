/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/AccountLimit.h>

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
   * <p>The output for the <a>DescribeAccountLimits</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API DescribeAccountLimitsResult
  {
  public:
    DescribeAccountLimitsResult();
    DescribeAccountLimitsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAccountLimitsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>An account limit structure that contain a list of AWS CloudFormation account
     * limits and their values.</p>
     */
    inline const Aws::Vector<AccountLimit>& GetAccountLimits() const{ return m_accountLimits; }

    /**
     * <p>An account limit structure that contain a list of AWS CloudFormation account
     * limits and their values.</p>
     */
    inline void SetAccountLimits(const Aws::Vector<AccountLimit>& value) { m_accountLimits = value; }

    /**
     * <p>An account limit structure that contain a list of AWS CloudFormation account
     * limits and their values.</p>
     */
    inline void SetAccountLimits(Aws::Vector<AccountLimit>&& value) { m_accountLimits = value; }

    /**
     * <p>An account limit structure that contain a list of AWS CloudFormation account
     * limits and their values.</p>
     */
    inline DescribeAccountLimitsResult& WithAccountLimits(const Aws::Vector<AccountLimit>& value) { SetAccountLimits(value); return *this;}

    /**
     * <p>An account limit structure that contain a list of AWS CloudFormation account
     * limits and their values.</p>
     */
    inline DescribeAccountLimitsResult& WithAccountLimits(Aws::Vector<AccountLimit>&& value) { SetAccountLimits(value); return *this;}

    /**
     * <p>An account limit structure that contain a list of AWS CloudFormation account
     * limits and their values.</p>
     */
    inline DescribeAccountLimitsResult& AddAccountLimits(const AccountLimit& value) { m_accountLimits.push_back(value); return *this; }

    /**
     * <p>An account limit structure that contain a list of AWS CloudFormation account
     * limits and their values.</p>
     */
    inline DescribeAccountLimitsResult& AddAccountLimits(AccountLimit&& value) { m_accountLimits.push_back(value); return *this; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline DescribeAccountLimitsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline DescribeAccountLimitsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB in size, a string that identifies the next page of
     * limits. If no additional page exists, this value is null.</p>
     */
    inline DescribeAccountLimitsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeAccountLimitsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAccountLimitsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<AccountLimit> m_accountLimits;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws