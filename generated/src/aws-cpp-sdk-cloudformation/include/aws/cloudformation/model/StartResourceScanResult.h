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
  class StartResourceScanResult
  {
  public:
    AWS_CLOUDFORMATION_API StartResourceScanResult();
    AWS_CLOUDFORMATION_API StartResourceScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API StartResourceScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:resourceScan/${Id}</code>.
     * An example is
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:resourceScan/<i>f5b490f7-7ed4-428a-aa06-31ff25db0772</i>
     * </code>.</p>
     */
    inline const Aws::String& GetResourceScanId() const{ return m_resourceScanId; }
    inline void SetResourceScanId(const Aws::String& value) { m_resourceScanId = value; }
    inline void SetResourceScanId(Aws::String&& value) { m_resourceScanId = std::move(value); }
    inline void SetResourceScanId(const char* value) { m_resourceScanId.assign(value); }
    inline StartResourceScanResult& WithResourceScanId(const Aws::String& value) { SetResourceScanId(value); return *this;}
    inline StartResourceScanResult& WithResourceScanId(Aws::String&& value) { SetResourceScanId(std::move(value)); return *this;}
    inline StartResourceScanResult& WithResourceScanId(const char* value) { SetResourceScanId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline StartResourceScanResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline StartResourceScanResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceScanId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
