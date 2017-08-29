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
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sdb/model/ResponseMetadata.h>
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
namespace SimpleDB
{
namespace Model
{
  class AWS_SIMPLEDB_API ListDomainsResult
  {
  public:
    ListDomainsResult();
    ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * A list of domain names that match the expression.
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const{ return m_domainNames; }

    /**
     * A list of domain names that match the expression.
     */
    inline void SetDomainNames(const Aws::Vector<Aws::String>& value) { m_domainNames = value; }

    /**
     * A list of domain names that match the expression.
     */
    inline void SetDomainNames(Aws::Vector<Aws::String>&& value) { m_domainNames = std::move(value); }

    /**
     * A list of domain names that match the expression.
     */
    inline ListDomainsResult& WithDomainNames(const Aws::Vector<Aws::String>& value) { SetDomainNames(value); return *this;}

    /**
     * A list of domain names that match the expression.
     */
    inline ListDomainsResult& WithDomainNames(Aws::Vector<Aws::String>&& value) { SetDomainNames(std::move(value)); return *this;}

    /**
     * A list of domain names that match the expression.
     */
    inline ListDomainsResult& AddDomainNames(const Aws::String& value) { m_domainNames.push_back(value); return *this; }

    /**
     * A list of domain names that match the expression.
     */
    inline ListDomainsResult& AddDomainNames(Aws::String&& value) { m_domainNames.push_back(std::move(value)); return *this; }

    /**
     * A list of domain names that match the expression.
     */
    inline ListDomainsResult& AddDomainNames(const char* value) { m_domainNames.push_back(value); return *this; }


    /**
     * An opaque token indicating that there are more domains than the specified
     * <code>MaxNumberOfDomains</code> still available.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * An opaque token indicating that there are more domains than the specified
     * <code>MaxNumberOfDomains</code> still available.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * An opaque token indicating that there are more domains than the specified
     * <code>MaxNumberOfDomains</code> still available.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * An opaque token indicating that there are more domains than the specified
     * <code>MaxNumberOfDomains</code> still available.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * An opaque token indicating that there are more domains than the specified
     * <code>MaxNumberOfDomains</code> still available.
     */
    inline ListDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * An opaque token indicating that there are more domains than the specified
     * <code>MaxNumberOfDomains</code> still available.
     */
    inline ListDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * An opaque token indicating that there are more domains than the specified
     * <code>MaxNumberOfDomains</code> still available.
     */
    inline ListDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListDomainsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListDomainsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_domainNames;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
