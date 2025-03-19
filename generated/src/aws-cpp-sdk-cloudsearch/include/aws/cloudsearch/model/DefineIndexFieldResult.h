/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/IndexFieldStatus.h>
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
   * <p>The result of a <code><a>DefineIndexField</a></code> request. Contains the
   * status of the newly-configured index field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineIndexFieldResponse">AWS
   * API Reference</a></p>
   */
  class DefineIndexFieldResult
  {
  public:
    AWS_CLOUDSEARCH_API DefineIndexFieldResult() = default;
    AWS_CLOUDSEARCH_API DefineIndexFieldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DefineIndexFieldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const IndexFieldStatus& GetIndexField() const { return m_indexField; }
    template<typename IndexFieldT = IndexFieldStatus>
    void SetIndexField(IndexFieldT&& value) { m_indexFieldHasBeenSet = true; m_indexField = std::forward<IndexFieldT>(value); }
    template<typename IndexFieldT = IndexFieldStatus>
    DefineIndexFieldResult& WithIndexField(IndexFieldT&& value) { SetIndexField(std::forward<IndexFieldT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DefineIndexFieldResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    IndexFieldStatus m_indexField;
    bool m_indexFieldHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
