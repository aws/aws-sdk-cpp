/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/KeyPairInfo.h>
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
  class DescribeKeyPairsResponse
  {
  public:
    AWS_EC2_API DescribeKeyPairsResponse() = default;
    AWS_EC2_API DescribeKeyPairsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeKeyPairsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the key pairs.</p>
     */
    inline const Aws::Vector<KeyPairInfo>& GetKeyPairs() const { return m_keyPairs; }
    template<typename KeyPairsT = Aws::Vector<KeyPairInfo>>
    void SetKeyPairs(KeyPairsT&& value) { m_keyPairsHasBeenSet = true; m_keyPairs = std::forward<KeyPairsT>(value); }
    template<typename KeyPairsT = Aws::Vector<KeyPairInfo>>
    DescribeKeyPairsResponse& WithKeyPairs(KeyPairsT&& value) { SetKeyPairs(std::forward<KeyPairsT>(value)); return *this;}
    template<typename KeyPairsT = KeyPairInfo>
    DescribeKeyPairsResponse& AddKeyPairs(KeyPairsT&& value) { m_keyPairsHasBeenSet = true; m_keyPairs.emplace_back(std::forward<KeyPairsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeKeyPairsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KeyPairInfo> m_keyPairs;
    bool m_keyPairsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
