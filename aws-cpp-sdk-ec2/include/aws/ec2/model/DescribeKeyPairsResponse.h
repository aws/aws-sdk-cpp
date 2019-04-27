/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API DescribeKeyPairsResponse
  {
  public:
    DescribeKeyPairsResponse();
    DescribeKeyPairsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeKeyPairsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
