/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
  class ListTypeRegistrationsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListTypeRegistrationsResult() = default;
    AWS_CLOUDFORMATION_API ListTypeRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListTypeRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of extension registration tokens.</p> <p>Use
     * <a>DescribeTypeRegistration</a> to return detailed information about a type
     * registration request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegistrationTokenList() const { return m_registrationTokenList; }
    template<typename RegistrationTokenListT = Aws::Vector<Aws::String>>
    void SetRegistrationTokenList(RegistrationTokenListT&& value) { m_registrationTokenListHasBeenSet = true; m_registrationTokenList = std::forward<RegistrationTokenListT>(value); }
    template<typename RegistrationTokenListT = Aws::Vector<Aws::String>>
    ListTypeRegistrationsResult& WithRegistrationTokenList(RegistrationTokenListT&& value) { SetRegistrationTokenList(std::forward<RegistrationTokenListT>(value)); return *this;}
    template<typename RegistrationTokenListT = Aws::String>
    ListTypeRegistrationsResult& AddRegistrationTokenList(RegistrationTokenListT&& value) { m_registrationTokenListHasBeenSet = true; m_registrationTokenList.emplace_back(std::forward<RegistrationTokenListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTypeRegistrationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListTypeRegistrationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_registrationTokenList;
    bool m_registrationTokenListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
