﻿/**
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
  /**
   * <p>The output for a <a>CreateStack</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API CreateStackResult
  {
  public:
    CreateStackResult();
    CreateStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline CreateStackResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline CreateStackResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline CreateStackResult& WithStackId(const char* value) { SetStackId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateStackResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateStackResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_stackId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
