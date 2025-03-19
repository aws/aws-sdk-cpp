/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/SuggesterStatus.h>
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
   * <p>The result of a <code>DescribeSuggesters</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeSuggestersResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSuggestersResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeSuggestersResult() = default;
    AWS_CLOUDSEARCH_API DescribeSuggestersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeSuggestersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The suggesters configured for the domain specified in the request.</p>
     */
    inline const Aws::Vector<SuggesterStatus>& GetSuggesters() const { return m_suggesters; }
    template<typename SuggestersT = Aws::Vector<SuggesterStatus>>
    void SetSuggesters(SuggestersT&& value) { m_suggestersHasBeenSet = true; m_suggesters = std::forward<SuggestersT>(value); }
    template<typename SuggestersT = Aws::Vector<SuggesterStatus>>
    DescribeSuggestersResult& WithSuggesters(SuggestersT&& value) { SetSuggesters(std::forward<SuggestersT>(value)); return *this;}
    template<typename SuggestersT = SuggesterStatus>
    DescribeSuggestersResult& AddSuggesters(SuggestersT&& value) { m_suggestersHasBeenSet = true; m_suggesters.emplace_back(std::forward<SuggestersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSuggestersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuggesterStatus> m_suggesters;
    bool m_suggestersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
