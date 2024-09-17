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
    AWS_CLOUDFORMATION_API ListTypeRegistrationsResult();
    AWS_CLOUDFORMATION_API ListTypeRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListTypeRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of extension registration tokens.</p> <p>Use
     * <a>DescribeTypeRegistration</a> to return detailed information about a type
     * registration request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegistrationTokenList() const{ return m_registrationTokenList; }
    inline void SetRegistrationTokenList(const Aws::Vector<Aws::String>& value) { m_registrationTokenList = value; }
    inline void SetRegistrationTokenList(Aws::Vector<Aws::String>&& value) { m_registrationTokenList = std::move(value); }
    inline ListTypeRegistrationsResult& WithRegistrationTokenList(const Aws::Vector<Aws::String>& value) { SetRegistrationTokenList(value); return *this;}
    inline ListTypeRegistrationsResult& WithRegistrationTokenList(Aws::Vector<Aws::String>&& value) { SetRegistrationTokenList(std::move(value)); return *this;}
    inline ListTypeRegistrationsResult& AddRegistrationTokenList(const Aws::String& value) { m_registrationTokenList.push_back(value); return *this; }
    inline ListTypeRegistrationsResult& AddRegistrationTokenList(Aws::String&& value) { m_registrationTokenList.push_back(std::move(value)); return *this; }
    inline ListTypeRegistrationsResult& AddRegistrationTokenList(const char* value) { m_registrationTokenList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTypeRegistrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTypeRegistrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTypeRegistrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListTypeRegistrationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListTypeRegistrationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_registrationTokenList;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
