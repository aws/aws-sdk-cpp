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
  class PublishTypeResult
  {
  public:
    AWS_CLOUDFORMATION_API PublishTypeResult();
    AWS_CLOUDFORMATION_API PublishTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API PublishTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) assigned to the public extension upon
     * publication.</p>
     */
    inline const Aws::String& GetPublicTypeArn() const{ return m_publicTypeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the public extension upon
     * publication.</p>
     */
    inline void SetPublicTypeArn(const Aws::String& value) { m_publicTypeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the public extension upon
     * publication.</p>
     */
    inline void SetPublicTypeArn(Aws::String&& value) { m_publicTypeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the public extension upon
     * publication.</p>
     */
    inline void SetPublicTypeArn(const char* value) { m_publicTypeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the public extension upon
     * publication.</p>
     */
    inline PublishTypeResult& WithPublicTypeArn(const Aws::String& value) { SetPublicTypeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the public extension upon
     * publication.</p>
     */
    inline PublishTypeResult& WithPublicTypeArn(Aws::String&& value) { SetPublicTypeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the public extension upon
     * publication.</p>
     */
    inline PublishTypeResult& WithPublicTypeArn(const char* value) { SetPublicTypeArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PublishTypeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PublishTypeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_publicTypeArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
