/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/VpcAttachment.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{
  class CreateVpcAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateVpcAttachmentResult();
    AWS_NETWORKMANAGER_API CreateVpcAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateVpcAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline const VpcAttachment& GetVpcAttachment() const{ return m_vpcAttachment; }

    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline void SetVpcAttachment(const VpcAttachment& value) { m_vpcAttachment = value; }

    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline void SetVpcAttachment(VpcAttachment&& value) { m_vpcAttachment = std::move(value); }

    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline CreateVpcAttachmentResult& WithVpcAttachment(const VpcAttachment& value) { SetVpcAttachment(value); return *this;}

    /**
     * <p>Provides details about the VPC attachment.</p>
     */
    inline CreateVpcAttachmentResult& WithVpcAttachment(VpcAttachment&& value) { SetVpcAttachment(std::move(value)); return *this;}

  private:

    VpcAttachment m_vpcAttachment;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
