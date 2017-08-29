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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/DomainInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>ListDomainNames</code> operation. Contains the names of
   * all Elasticsearch domains owned by this account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNamesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ListDomainNamesResult
  {
  public:
    ListDomainNamesResult();
    ListDomainNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDomainNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of Elasticsearch domain names.</p>
     */
    inline const Aws::Vector<DomainInfo>& GetDomainNames() const{ return m_domainNames; }

    /**
     * <p>List of Elasticsearch domain names.</p>
     */
    inline void SetDomainNames(const Aws::Vector<DomainInfo>& value) { m_domainNames = value; }

    /**
     * <p>List of Elasticsearch domain names.</p>
     */
    inline void SetDomainNames(Aws::Vector<DomainInfo>&& value) { m_domainNames = std::move(value); }

    /**
     * <p>List of Elasticsearch domain names.</p>
     */
    inline ListDomainNamesResult& WithDomainNames(const Aws::Vector<DomainInfo>& value) { SetDomainNames(value); return *this;}

    /**
     * <p>List of Elasticsearch domain names.</p>
     */
    inline ListDomainNamesResult& WithDomainNames(Aws::Vector<DomainInfo>&& value) { SetDomainNames(std::move(value)); return *this;}

    /**
     * <p>List of Elasticsearch domain names.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(const DomainInfo& value) { m_domainNames.push_back(value); return *this; }

    /**
     * <p>List of Elasticsearch domain names.</p>
     */
    inline ListDomainNamesResult& AddDomainNames(DomainInfo&& value) { m_domainNames.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DomainInfo> m_domainNames;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
