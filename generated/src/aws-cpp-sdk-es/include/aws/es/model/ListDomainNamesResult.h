﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * all domains owned by this account and their respective engine
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainNamesResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainNamesResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListDomainNamesResult();
    AWS_ELASTICSEARCHSERVICE_API ListDomainNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListDomainNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of domain names and respective engine types.</p>
     */
    inline const Aws::Vector<DomainInfo>& GetDomainNames() const{ return m_domainNames; }
    inline void SetDomainNames(const Aws::Vector<DomainInfo>& value) { m_domainNames = value; }
    inline void SetDomainNames(Aws::Vector<DomainInfo>&& value) { m_domainNames = std::move(value); }
    inline ListDomainNamesResult& WithDomainNames(const Aws::Vector<DomainInfo>& value) { SetDomainNames(value); return *this;}
    inline ListDomainNamesResult& WithDomainNames(Aws::Vector<DomainInfo>&& value) { SetDomainNames(std::move(value)); return *this;}
    inline ListDomainNamesResult& AddDomainNames(const DomainInfo& value) { m_domainNames.push_back(value); return *this; }
    inline ListDomainNamesResult& AddDomainNames(DomainInfo&& value) { m_domainNames.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDomainNamesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDomainNamesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDomainNamesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DomainInfo> m_domainNames;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
