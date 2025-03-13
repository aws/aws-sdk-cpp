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
   * <p>The result of an <code>UpdateServiceAccessPolicies</code> request. Contains
   * the new access policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateServiceAccessPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class UpdateServiceAccessPoliciesResult
  {
  public:
    AWS_CLOUDSEARCH_API UpdateServiceAccessPoliciesResult() = default;
    AWS_CLOUDSEARCH_API UpdateServiceAccessPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API UpdateServiceAccessPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The access rules configured for the domain.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const { return m_accessPolicies; }
    template<typename AccessPoliciesT = AccessPoliciesStatus>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = AccessPoliciesStatus>
    UpdateServiceAccessPoliciesResult& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UpdateServiceAccessPoliciesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AccessPoliciesStatus m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
