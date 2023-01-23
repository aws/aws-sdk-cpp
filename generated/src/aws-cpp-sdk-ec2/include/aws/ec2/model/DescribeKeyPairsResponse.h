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
    AWS_EC2_API DescribeKeyPairsResponse();
    AWS_EC2_API DescribeKeyPairsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeKeyPairsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the key pairs.</p>
     */
    inline const Aws::Vector<KeyPairInfo>& GetKeyPairs() const{ return m_keyPairs; }

    /**
     * <p>Information about the key pairs.</p>
     */
    inline void SetKeyPairs(const Aws::Vector<KeyPairInfo>& value) { m_keyPairs = value; }

    /**
     * <p>Information about the key pairs.</p>
     */
    inline void SetKeyPairs(Aws::Vector<KeyPairInfo>&& value) { m_keyPairs = std::move(value); }

    /**
     * <p>Information about the key pairs.</p>
     */
    inline DescribeKeyPairsResponse& WithKeyPairs(const Aws::Vector<KeyPairInfo>& value) { SetKeyPairs(value); return *this;}

    /**
     * <p>Information about the key pairs.</p>
     */
    inline DescribeKeyPairsResponse& WithKeyPairs(Aws::Vector<KeyPairInfo>&& value) { SetKeyPairs(std::move(value)); return *this;}

    /**
     * <p>Information about the key pairs.</p>
     */
    inline DescribeKeyPairsResponse& AddKeyPairs(const KeyPairInfo& value) { m_keyPairs.push_back(value); return *this; }

    /**
     * <p>Information about the key pairs.</p>
     */
    inline DescribeKeyPairsResponse& AddKeyPairs(KeyPairInfo&& value) { m_keyPairs.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeKeyPairsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeKeyPairsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<KeyPairInfo> m_keyPairs;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
