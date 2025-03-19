/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/IndexFieldStatus.h>
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
   * <p>The result of a <code>DescribeIndexFields</code> request. Contains the index
   * fields configured for the domain specified in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeIndexFieldsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeIndexFieldsResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeIndexFieldsResult() = default;
    AWS_CLOUDSEARCH_API DescribeIndexFieldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeIndexFieldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The index fields configured for the domain.</p>
     */
    inline const Aws::Vector<IndexFieldStatus>& GetIndexFields() const { return m_indexFields; }
    template<typename IndexFieldsT = Aws::Vector<IndexFieldStatus>>
    void SetIndexFields(IndexFieldsT&& value) { m_indexFieldsHasBeenSet = true; m_indexFields = std::forward<IndexFieldsT>(value); }
    template<typename IndexFieldsT = Aws::Vector<IndexFieldStatus>>
    DescribeIndexFieldsResult& WithIndexFields(IndexFieldsT&& value) { SetIndexFields(std::forward<IndexFieldsT>(value)); return *this;}
    template<typename IndexFieldsT = IndexFieldStatus>
    DescribeIndexFieldsResult& AddIndexFields(IndexFieldsT&& value) { m_indexFieldsHasBeenSet = true; m_indexFields.emplace_back(std::forward<IndexFieldsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeIndexFieldsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IndexFieldStatus> m_indexFields;
    bool m_indexFieldsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
