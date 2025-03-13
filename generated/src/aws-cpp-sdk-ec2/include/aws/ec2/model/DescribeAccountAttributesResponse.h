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
    AWS_EC2_API DescribeAccountAttributesResponse() = default;
    AWS_EC2_API DescribeAccountAttributesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAccountAttributesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the account attributes.</p>
     */
    inline const Aws::Vector<AccountAttribute>& GetAccountAttributes() const { return m_accountAttributes; }
    template<typename AccountAttributesT = Aws::Vector<AccountAttribute>>
    void SetAccountAttributes(AccountAttributesT&& value) { m_accountAttributesHasBeenSet = true; m_accountAttributes = std::forward<AccountAttributesT>(value); }
    template<typename AccountAttributesT = Aws::Vector<AccountAttribute>>
    DescribeAccountAttributesResponse& WithAccountAttributes(AccountAttributesT&& value) { SetAccountAttributes(std::forward<AccountAttributesT>(value)); return *this;}
    template<typename AccountAttributesT = AccountAttribute>
    DescribeAccountAttributesResponse& AddAccountAttributes(AccountAttributesT&& value) { m_accountAttributesHasBeenSet = true; m_accountAttributes.emplace_back(std::forward<AccountAttributesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAccountAttributesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAttribute> m_accountAttributes;
    bool m_accountAttributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
