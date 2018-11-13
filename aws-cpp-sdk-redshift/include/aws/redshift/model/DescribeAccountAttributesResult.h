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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/AccountAttribute.h>
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
namespace Redshift
{
namespace Model
{
  class AWS_REDSHIFT_API DescribeAccountAttributesResult
  {
  public:
    DescribeAccountAttributesResult();
    DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of attributes assigned to an account.</p>
     */
    inline const Aws::Vector<AccountAttribute>& GetAccountAttributes() const{ return m_accountAttributes; }

    /**
     * <p>A list of attributes assigned to an account.</p>
     */
    inline void SetAccountAttributes(const Aws::Vector<AccountAttribute>& value) { m_accountAttributes = value; }

    /**
     * <p>A list of attributes assigned to an account.</p>
     */
    inline void SetAccountAttributes(Aws::Vector<AccountAttribute>&& value) { m_accountAttributes = std::move(value); }

    /**
     * <p>A list of attributes assigned to an account.</p>
     */
    inline DescribeAccountAttributesResult& WithAccountAttributes(const Aws::Vector<AccountAttribute>& value) { SetAccountAttributes(value); return *this;}

    /**
     * <p>A list of attributes assigned to an account.</p>
     */
    inline DescribeAccountAttributesResult& WithAccountAttributes(Aws::Vector<AccountAttribute>&& value) { SetAccountAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of attributes assigned to an account.</p>
     */
    inline DescribeAccountAttributesResult& AddAccountAttributes(const AccountAttribute& value) { m_accountAttributes.push_back(value); return *this; }

    /**
     * <p>A list of attributes assigned to an account.</p>
     */
    inline DescribeAccountAttributesResult& AddAccountAttributes(AccountAttribute&& value) { m_accountAttributes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAccountAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAccountAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AccountAttribute> m_accountAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
