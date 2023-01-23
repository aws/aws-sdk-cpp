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
  class CreateStackSetResult
  {
  public:
    AWS_CLOUDFORMATION_API CreateStackSetResult();
    AWS_CLOUDFORMATION_API CreateStackSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API CreateStackSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the stack set that you're creating.</p>
     */
    inline const Aws::String& GetStackSetId() const{ return m_stackSetId; }

    /**
     * <p>The ID of the stack set that you're creating.</p>
     */
    inline void SetStackSetId(const Aws::String& value) { m_stackSetId = value; }

    /**
     * <p>The ID of the stack set that you're creating.</p>
     */
    inline void SetStackSetId(Aws::String&& value) { m_stackSetId = std::move(value); }

    /**
     * <p>The ID of the stack set that you're creating.</p>
     */
    inline void SetStackSetId(const char* value) { m_stackSetId.assign(value); }

    /**
     * <p>The ID of the stack set that you're creating.</p>
     */
    inline CreateStackSetResult& WithStackSetId(const Aws::String& value) { SetStackSetId(value); return *this;}

    /**
     * <p>The ID of the stack set that you're creating.</p>
     */
    inline CreateStackSetResult& WithStackSetId(Aws::String&& value) { SetStackSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack set that you're creating.</p>
     */
    inline CreateStackSetResult& WithStackSetId(const char* value) { SetStackSetId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateStackSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateStackSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_stackSetId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
