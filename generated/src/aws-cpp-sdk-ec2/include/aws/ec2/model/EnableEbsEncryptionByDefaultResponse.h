/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
  class EnableEbsEncryptionByDefaultResponse
  {
  public:
    AWS_EC2_API EnableEbsEncryptionByDefaultResponse() = default;
    AWS_EC2_API EnableEbsEncryptionByDefaultResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableEbsEncryptionByDefaultResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The updated status of encryption by default.</p>
     */
    inline bool GetEbsEncryptionByDefault() const { return m_ebsEncryptionByDefault; }
    inline void SetEbsEncryptionByDefault(bool value) { m_ebsEncryptionByDefaultHasBeenSet = true; m_ebsEncryptionByDefault = value; }
    inline EnableEbsEncryptionByDefaultResponse& WithEbsEncryptionByDefault(bool value) { SetEbsEncryptionByDefault(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    EnableEbsEncryptionByDefaultResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_ebsEncryptionByDefault{false};
    bool m_ebsEncryptionByDefaultHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
