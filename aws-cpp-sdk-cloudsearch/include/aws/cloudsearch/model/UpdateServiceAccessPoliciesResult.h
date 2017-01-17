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
#include <aws/cloudsearch/model/AccessPoliciesStatus.h>
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
   * <p>The result of an <code>UpdateServiceAccessPolicies</code> request. Contains
   * the new access policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateServiceAccessPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API UpdateServiceAccessPoliciesResult
  {
  public:
    UpdateServiceAccessPoliciesResult();
    UpdateServiceAccessPoliciesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateServiceAccessPoliciesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The access rules configured for the domain.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>The access rules configured for the domain.</p>
     */
    inline void SetAccessPolicies(const AccessPoliciesStatus& value) { m_accessPolicies = value; }

    /**
     * <p>The access rules configured for the domain.</p>
     */
    inline void SetAccessPolicies(AccessPoliciesStatus&& value) { m_accessPolicies = value; }

    /**
     * <p>The access rules configured for the domain.</p>
     */
    inline UpdateServiceAccessPoliciesResult& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>The access rules configured for the domain.</p>
     */
    inline UpdateServiceAccessPoliciesResult& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline UpdateServiceAccessPoliciesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateServiceAccessPoliciesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    AccessPoliciesStatus m_accessPolicies;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws