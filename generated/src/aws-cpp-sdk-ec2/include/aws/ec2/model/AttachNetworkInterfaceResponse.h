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
  /**
   * <p>Contains the output of AttachNetworkInterface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachNetworkInterfaceResult">AWS
   * API Reference</a></p>
   */
  class AttachNetworkInterfaceResponse
  {
  public:
    AWS_EC2_API AttachNetworkInterfaceResponse();
    AWS_EC2_API AttachNetworkInterfaceResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AttachNetworkInterfaceResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentId = value; }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentId = std::move(value); }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentId.assign(value); }

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline AttachNetworkInterfaceResponse& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline AttachNetworkInterfaceResponse& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface attachment.</p>
     */
    inline AttachNetworkInterfaceResponse& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


    /**
     * <p>The index of the network card.</p>
     */
    inline int GetNetworkCardIndex() const{ return m_networkCardIndex; }

    /**
     * <p>The index of the network card.</p>
     */
    inline void SetNetworkCardIndex(int value) { m_networkCardIndex = value; }

    /**
     * <p>The index of the network card.</p>
     */
    inline AttachNetworkInterfaceResponse& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AttachNetworkInterfaceResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AttachNetworkInterfaceResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_attachmentId;

    int m_networkCardIndex;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
