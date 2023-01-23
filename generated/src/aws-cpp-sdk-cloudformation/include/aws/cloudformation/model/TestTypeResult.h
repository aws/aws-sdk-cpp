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
  class TestTypeResult
  {
  public:
    AWS_CLOUDFORMATION_API TestTypeResult();
    AWS_CLOUDFORMATION_API TestTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API TestTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline const Aws::String& GetTypeVersionArn() const{ return m_typeVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetTypeVersionArn(const Aws::String& value) { m_typeVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetTypeVersionArn(Aws::String&& value) { m_typeVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline void SetTypeVersionArn(const char* value) { m_typeVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline TestTypeResult& WithTypeVersionArn(const Aws::String& value) { SetTypeVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline TestTypeResult& WithTypeVersionArn(Aws::String&& value) { SetTypeVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p>
     */
    inline TestTypeResult& WithTypeVersionArn(const char* value) { SetTypeVersionArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline TestTypeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline TestTypeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_typeVersionArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
