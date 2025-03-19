/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/SuggesterStatus.h>
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
   * <p>The result of a <code>DeleteSuggester</code> request. Contains the status of
   * the deleted suggester.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteSuggesterResponse">AWS
   * API Reference</a></p>
   */
  class DeleteSuggesterResult
  {
  public:
    AWS_CLOUDSEARCH_API DeleteSuggesterResult() = default;
    AWS_CLOUDSEARCH_API DeleteSuggesterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DeleteSuggesterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status of the suggester being deleted.</p>
     */
    inline const SuggesterStatus& GetSuggester() const { return m_suggester; }
    template<typename SuggesterT = SuggesterStatus>
    void SetSuggester(SuggesterT&& value) { m_suggesterHasBeenSet = true; m_suggester = std::forward<SuggesterT>(value); }
    template<typename SuggesterT = SuggesterStatus>
    DeleteSuggesterResult& WithSuggester(SuggesterT&& value) { SetSuggester(std::forward<SuggesterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteSuggesterResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SuggesterStatus m_suggester;
    bool m_suggesterHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
