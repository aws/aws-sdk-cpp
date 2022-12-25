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
  class DisableEbsEncryptionByDefaultResponse
  {
  public:
    AWS_EC2_API DisableEbsEncryptionByDefaultResponse();
    AWS_EC2_API DisableEbsEncryptionByDefaultResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableEbsEncryptionByDefaultResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The updated status of encryption by default.</p>
     */
    inline bool GetEbsEncryptionByDefault() const{ return m_ebsEncryptionByDefault; }

    /**
     * <p>The updated status of encryption by default.</p>
     */
    inline void SetEbsEncryptionByDefault(bool value) { m_ebsEncryptionByDefault = value; }

    /**
     * <p>The updated status of encryption by default.</p>
     */
    inline DisableEbsEncryptionByDefaultResponse& WithEbsEncryptionByDefault(bool value) { SetEbsEncryptionByDefault(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisableEbsEncryptionByDefaultResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisableEbsEncryptionByDefaultResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_ebsEncryptionByDefault;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
