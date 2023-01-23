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
  class GetEbsEncryptionByDefaultResponse
  {
  public:
    AWS_EC2_API GetEbsEncryptionByDefaultResponse();
    AWS_EC2_API GetEbsEncryptionByDefaultResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetEbsEncryptionByDefaultResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Indicates whether encryption by default is enabled.</p>
     */
    inline bool GetEbsEncryptionByDefault() const{ return m_ebsEncryptionByDefault; }

    /**
     * <p>Indicates whether encryption by default is enabled.</p>
     */
    inline void SetEbsEncryptionByDefault(bool value) { m_ebsEncryptionByDefault = value; }

    /**
     * <p>Indicates whether encryption by default is enabled.</p>
     */
    inline GetEbsEncryptionByDefaultResponse& WithEbsEncryptionByDefault(bool value) { SetEbsEncryptionByDefault(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetEbsEncryptionByDefaultResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetEbsEncryptionByDefaultResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_ebsEncryptionByDefault;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
