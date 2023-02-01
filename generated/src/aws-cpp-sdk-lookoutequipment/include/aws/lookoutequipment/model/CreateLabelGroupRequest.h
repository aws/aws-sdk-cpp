/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class CreateLabelGroupRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateLabelGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLabelGroup"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline CreateLabelGroupRequest& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline CreateLabelGroupRequest& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> Names a group of labels.</p> <p>Data in this field will be retained for
     * service usage. Follow best practices for the security of your data. </p>
     */
    inline CreateLabelGroupRequest& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaultCodes() const{ return m_faultCodes; }

    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline bool FaultCodesHasBeenSet() const { return m_faultCodesHasBeenSet; }

    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline void SetFaultCodes(const Aws::Vector<Aws::String>& value) { m_faultCodesHasBeenSet = true; m_faultCodes = value; }

    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline void SetFaultCodes(Aws::Vector<Aws::String>&& value) { m_faultCodesHasBeenSet = true; m_faultCodes = std::move(value); }

    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline CreateLabelGroupRequest& WithFaultCodes(const Aws::Vector<Aws::String>& value) { SetFaultCodes(value); return *this;}

    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline CreateLabelGroupRequest& WithFaultCodes(Aws::Vector<Aws::String>&& value) { SetFaultCodes(std::move(value)); return *this;}

    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline CreateLabelGroupRequest& AddFaultCodes(const Aws::String& value) { m_faultCodesHasBeenSet = true; m_faultCodes.push_back(value); return *this; }

    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline CreateLabelGroupRequest& AddFaultCodes(Aws::String&& value) { m_faultCodesHasBeenSet = true; m_faultCodes.push_back(std::move(value)); return *this; }

    /**
     * <p> The acceptable fault codes (indicating the type of anomaly associated with
     * the label) that can be used with this label group.</p> <p>Data in this field
     * will be retained for service usage. Follow best practices for the security of
     * your data.</p>
     */
    inline CreateLabelGroupRequest& AddFaultCodes(const char* value) { m_faultCodesHasBeenSet = true; m_faultCodes.push_back(value); return *this; }


    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline CreateLabelGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline CreateLabelGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the request to create a label group. If you do not
     * set the client request token, Lookout for Equipment generates one. </p>
     */
    inline CreateLabelGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline CreateLabelGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline CreateLabelGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline CreateLabelGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> Tags that provide metadata about the label group you are creating. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline CreateLabelGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_faultCodes;
    bool m_faultCodesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
