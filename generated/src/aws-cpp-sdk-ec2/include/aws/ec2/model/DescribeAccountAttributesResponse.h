/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AccountAttribute.h>
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
  class DescribeAccountAttributesResponse
  {
  public:
    AWS_EC2_API DescribeAccountAttributesResponse();
    AWS_EC2_API DescribeAccountAttributesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAccountAttributesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the account attributes.</p>
     */
    inline const Aws::Vector<AccountAttribute>& GetAccountAttributes() const{ return m_accountAttributes; }

    /**
     * <p>Information about the account attributes.</p>
     */
    inline void SetAccountAttributes(const Aws::Vector<AccountAttribute>& value) { m_accountAttributes = value; }

    /**
     * <p>Information about the account attributes.</p>
     */
    inline void SetAccountAttributes(Aws::Vector<AccountAttribute>&& value) { m_accountAttributes = std::move(value); }

    /**
     * <p>Information about the account attributes.</p>
     */
    inline DescribeAccountAttributesResponse& WithAccountAttributes(const Aws::Vector<AccountAttribute>& value) { SetAccountAttributes(value); return *this;}

    /**
     * <p>Information about the account attributes.</p>
     */
    inline DescribeAccountAttributesResponse& WithAccountAttributes(Aws::Vector<AccountAttribute>&& value) { SetAccountAttributes(std::move(value)); return *this;}

    /**
     * <p>Information about the account attributes.</p>
     */
    inline DescribeAccountAttributesResponse& AddAccountAttributes(const AccountAttribute& value) { m_accountAttributes.push_back(value); return *this; }

    /**
     * <p>Information about the account attributes.</p>
     */
    inline DescribeAccountAttributesResponse& AddAccountAttributes(AccountAttribute&& value) { m_accountAttributes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAccountAttributesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAccountAttributesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AccountAttribute> m_accountAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
