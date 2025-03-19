/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateContactAttributesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactAttributes"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline const Aws::String& GetInitialContactId() const { return m_initialContactId; }
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
    template<typename InitialContactIdT = Aws::String>
    void SetInitialContactId(InitialContactIdT&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::forward<InitialContactIdT>(value); }
    template<typename InitialContactIdT = Aws::String>
    UpdateContactAttributesRequest& WithInitialContactId(InitialContactIdT&& value) { SetInitialContactId(std::forward<InitialContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateContactAttributesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Connect attributes. These attributes can be accessed in flows just
     * like any other contact attributes.</p> <p>You can have up to 32,768 UTF-8 bytes
     * across all attributes for a contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p> <p>In the <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-contact-attributes.html">Set
     * contact attributes</a> block, when the attributes for a contact exceed 32 KB,
     * the contact is routed down the Error branch of the flow. As a mitigation,
     * consider the following options:</p> <ul> <li> <p>Remove unnecessary attributes
     * by setting their values to empty.</p> </li> <li> <p>If the attributes are only
     * used in one flow and don't need to be referred to outside of that flow (for
     * example, by a Lambda or another flow), then use flow attributes. This way you
     * aren't needlessly persisting the 32 KB of information from one flow to another.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-contact-attributes.html">Flow
     * block: Set contact attributes</a> in the <i>Amazon Connect Administrator
     * Guide</i>. </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    UpdateContactAttributesRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    UpdateContactAttributesRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
