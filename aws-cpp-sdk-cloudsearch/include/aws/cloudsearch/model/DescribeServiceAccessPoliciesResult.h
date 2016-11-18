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
   * <p>The result of a <code>DescribeServiceAccessPolicies</code> request.</p>
   */
  class AWS_CLOUDSEARCH_API DescribeServiceAccessPoliciesResult
  {
  public:
    DescribeServiceAccessPoliciesResult();
    DescribeServiceAccessPoliciesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeServiceAccessPoliciesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The access rules configured for the domain specified in the request.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>The access rules configured for the domain specified in the request.</p>
     */
    inline void SetAccessPolicies(const AccessPoliciesStatus& value) { m_accessPolicies = value; }

    /**
     * <p>The access rules configured for the domain specified in the request.</p>
     */
    inline void SetAccessPolicies(AccessPoliciesStatus&& value) { m_accessPolicies = value; }

    /**
     * <p>The access rules configured for the domain specified in the request.</p>
     */
    inline DescribeServiceAccessPoliciesResult& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>The access rules configured for the domain specified in the request.</p>
     */
    inline DescribeServiceAccessPoliciesResult& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeServiceAccessPoliciesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeServiceAccessPoliciesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    AccessPoliciesStatus m_accessPolicies;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws