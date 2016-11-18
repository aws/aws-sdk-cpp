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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>ListDomainNames</code> request. Contains a list of the
   * domains owned by an account.</p>
   */
  class AWS_CLOUDSEARCH_API ListDomainNamesResult
  {
  public:
    ListDomainNamesResult();
    ListDomainNamesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListDomainNamesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDomainNames() const{ return m_domainNames; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline void SetDomainNames(const Aws::Map<Aws::String, Aws::String>& value) { m_domainNames = value; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline void SetDomainNames(Aws::Map<Aws::String, Aws::String>&& value) { m_domainNames = value; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& WithDomainNames(const Aws::Map<Aws::String, Aws::String>& value) { SetDomainNames(value); return *this;}

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& WithDomainNames(Aws::Map<Aws::String, Aws::String>&& value) { SetDomainNames(value); return *this;}

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(const Aws::String& key, const Aws::String& value) { m_domainNames[key] = value; return *this; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(Aws::String&& key, const Aws::String& value) { m_domainNames[key] = value; return *this; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(const Aws::String& key, Aws::String&& value) { m_domainNames[key] = value; return *this; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(Aws::String&& key, Aws::String&& value) { m_domainNames[key] = value; return *this; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(const char* key, Aws::String&& value) { m_domainNames[key] = value; return *this; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(Aws::String&& key, const char* value) { m_domainNames[key] = value; return *this; }

    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(const char* key, const char* value) { m_domainNames[key] = value; return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListDomainNamesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListDomainNamesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Map<Aws::String, Aws::String> m_domainNames;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws