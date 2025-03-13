/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The result of a <code>BuildSuggester</code> request. Contains a list of the
   * fields used for suggestions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/BuildSuggestersResponse">AWS
   * API Reference</a></p>
   */
  class BuildSuggestersResult
  {
  public:
    AWS_CLOUDSEARCH_API BuildSuggestersResult() = default;
    AWS_CLOUDSEARCH_API BuildSuggestersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API BuildSuggestersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFieldNames() const { return m_fieldNames; }
    template<typename FieldNamesT = Aws::Vector<Aws::String>>
    void SetFieldNames(FieldNamesT&& value) { m_fieldNamesHasBeenSet = true; m_fieldNames = std::forward<FieldNamesT>(value); }
    template<typename FieldNamesT = Aws::Vector<Aws::String>>
    BuildSuggestersResult& WithFieldNames(FieldNamesT&& value) { SetFieldNames(std::forward<FieldNamesT>(value)); return *this;}
    template<typename FieldNamesT = Aws::String>
    BuildSuggestersResult& AddFieldNames(FieldNamesT&& value) { m_fieldNamesHasBeenSet = true; m_fieldNames.emplace_back(std::forward<FieldNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    BuildSuggestersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fieldNames;
    bool m_fieldNamesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
