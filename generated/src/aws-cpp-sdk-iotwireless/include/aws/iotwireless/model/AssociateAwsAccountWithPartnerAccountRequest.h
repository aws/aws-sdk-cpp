/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/iotwireless/model/SidewalkAccountInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AssociateAwsAccountWithPartnerAccountRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API AssociateAwsAccountWithPartnerAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAwsAccountWithPartnerAccount"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkAccountInfo& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline void SetSidewalk(const SidewalkAccountInfo& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline void SetSidewalk(SidewalkAccountInfo&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& WithSidewalk(const SidewalkAccountInfo& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& WithSidewalk(SidewalkAccountInfo&& value) { SetSidewalk(std::move(value)); return *this;}


    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline AssociateAwsAccountWithPartnerAccountRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    SidewalkAccountInfo m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
