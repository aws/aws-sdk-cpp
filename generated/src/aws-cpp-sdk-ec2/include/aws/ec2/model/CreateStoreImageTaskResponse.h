/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  class CreateStoreImageTaskResponse
  {
  public:
    AWS_EC2_API CreateStoreImageTaskResponse() = default;
    AWS_EC2_API CreateStoreImageTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateStoreImageTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the stored AMI object in the S3 bucket.</p>
     */
    inline const Aws::String& GetObjectKey() const { return m_objectKey; }
    template<typename ObjectKeyT = Aws::String>
    void SetObjectKey(ObjectKeyT&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::forward<ObjectKeyT>(value); }
    template<typename ObjectKeyT = Aws::String>
    CreateStoreImageTaskResponse& WithObjectKey(ObjectKeyT&& value) { SetObjectKey(std::forward<ObjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateStoreImageTaskResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
