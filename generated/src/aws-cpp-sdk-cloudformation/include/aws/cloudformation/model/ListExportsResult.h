/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/Export.h>
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
namespace CloudFormation
{
namespace Model
{
  class ListExportsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListExportsResult() = default;
    AWS_CLOUDFORMATION_API ListExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The output for the <a>ListExports</a> action.</p>
     */
    inline const Aws::Vector<Export>& GetExports() const { return m_exports; }
    template<typename ExportsT = Aws::Vector<Export>>
    void SetExports(ExportsT&& value) { m_exportsHasBeenSet = true; m_exports = std::forward<ExportsT>(value); }
    template<typename ExportsT = Aws::Vector<Export>>
    ListExportsResult& WithExports(ExportsT&& value) { SetExports(std::forward<ExportsT>(value)); return *this;}
    template<typename ExportsT = Export>
    ListExportsResult& AddExports(ExportsT&& value) { m_exportsHasBeenSet = true; m_exports.emplace_back(std::forward<ExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 100 exported output values, a string that identifies
     * the next page of exports. If there is no additional page, this value is
     * null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListExportsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Export> m_exports;
    bool m_exportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
