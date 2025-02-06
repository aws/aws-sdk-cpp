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
    AWS_CLOUDFORMATION_API CreateStackRefactorResult();
    AWS_CLOUDFORMATION_API CreateStackRefactorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API CreateStackRefactorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID associated with the stack refactor created from the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const Aws::String& GetStackRefactorId() const{ return m_stackRefactorId; }
    inline void SetStackRefactorId(const Aws::String& value) { m_stackRefactorId = value; }
    inline void SetStackRefactorId(Aws::String&& value) { m_stackRefactorId = std::move(value); }
    inline void SetStackRefactorId(const char* value) { m_stackRefactorId.assign(value); }
    inline CreateStackRefactorResult& WithStackRefactorId(const Aws::String& value) { SetStackRefactorId(value); return *this;}
    inline CreateStackRefactorResult& WithStackRefactorId(Aws::String&& value) { SetStackRefactorId(std::move(value)); return *this;}
    inline CreateStackRefactorResult& WithStackRefactorId(const char* value) { SetStackRefactorId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateStackRefactorResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateStackRefactorResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackRefactorId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
