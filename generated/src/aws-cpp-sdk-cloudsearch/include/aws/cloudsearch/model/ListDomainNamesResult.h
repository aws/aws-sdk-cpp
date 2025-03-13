/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The result of a <code>ListDomainNames</code> request. Contains a list of the
   * domains owned by an account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/ListDomainNamesResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainNamesResult
  {
  public:
    AWS_CLOUDSEARCH_API ListDomainNamesResult() = default;
    AWS_CLOUDSEARCH_API ListDomainNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API ListDomainNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The names of the search domains owned by an account.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDomainNames() const { return m_domainNames; }
    template<typename DomainNamesT = Aws::Map<Aws::String, Aws::String>>
    void SetDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::forward<DomainNamesT>(value); }
    template<typename DomainNamesT = Aws::Map<Aws::String, Aws::String>>
    ListDomainNamesResult& WithDomainNames(DomainNamesT&& value) { SetDomainNames(std::forward<DomainNamesT>(value)); return *this;}
    template<typename DomainNamesKeyT = Aws::String, typename DomainNamesValueT = Aws::String>
    ListDomainNamesResult& AddDomainNames(DomainNamesKeyT&& key, DomainNamesValueT&& value) {
      m_domainNamesHasBeenSet = true; m_domainNames.emplace(std::forward<DomainNamesKeyT>(key), std::forward<DomainNamesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListDomainNamesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
