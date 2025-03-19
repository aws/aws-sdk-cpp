/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
  class CreateStackRefactorResult
  {
  public:
    AWS_CLOUDFORMATION_API CreateStackRefactorResult() = default;
    AWS_CLOUDFORMATION_API CreateStackRefactorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API CreateStackRefactorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID associated with the stack refactor created from the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const Aws::String& GetStackRefactorId() const { return m_stackRefactorId; }
    template<typename StackRefactorIdT = Aws::String>
    void SetStackRefactorId(StackRefactorIdT&& value) { m_stackRefactorIdHasBeenSet = true; m_stackRefactorId = std::forward<StackRefactorIdT>(value); }
    template<typename StackRefactorIdT = Aws::String>
    CreateStackRefactorResult& WithStackRefactorId(StackRefactorIdT&& value) { SetStackRefactorId(std::forward<StackRefactorIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateStackRefactorResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackRefactorId;
    bool m_stackRefactorIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
