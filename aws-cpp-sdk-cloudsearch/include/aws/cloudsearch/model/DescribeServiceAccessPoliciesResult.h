/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/AccessPoliciesStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
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
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeServiceAccessPolicies</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeServiceAccessPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeServiceAccessPoliciesResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeServiceAccessPoliciesResult();
    AWS_CLOUDSEARCH_API DescribeServiceAccessPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeServiceAccessPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetAccessPolicies(AccessPoliciesStatus&& value) { m_accessPolicies = std::move(value); }

    /**
     * <p>The access rules configured for the domain specified in the request.</p>
     */
    inline DescribeServiceAccessPoliciesResult& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>The access rules configured for the domain specified in the request.</p>
     */
    inline DescribeServiceAccessPoliciesResult& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeServiceAccessPoliciesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeServiceAccessPoliciesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AccessPoliciesStatus m_accessPolicies;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
