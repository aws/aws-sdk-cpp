﻿/*
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
#include <aws/cloudsearch/model/DomainStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>

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
   * <p>The result of a <code>DeleteDomain</code> request. Contains the status of a
   * newly deleted domain, or no status if the domain has already been completely
   * deleted.</p>
   */
  class AWS_CLOUDSEARCH_API DeleteDomainResult
  {
  public:
    DeleteDomainResult();
    DeleteDomainResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteDomainResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatus = value; }

    
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatus = value; }

    
    inline DeleteDomainResult& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    
    inline DeleteDomainResult& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DeleteDomainResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteDomainResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    DomainStatus m_domainStatus;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws