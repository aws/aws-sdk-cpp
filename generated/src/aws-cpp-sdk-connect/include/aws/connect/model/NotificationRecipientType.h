/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>The type of notification recipient.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NotificationRecipientType">AWS
   * API Reference</a></p>
   */
  class NotificationRecipientType
  {
  public:
    AWS_CONNECT_API NotificationRecipientType() = default;
    AWS_CONNECT_API NotificationRecipientType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API NotificationRecipientType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }. Amazon Connect users
     * with the specified tags will be notified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserTags() const { return m_userTags; }
    inline bool UserTagsHasBeenSet() const { return m_userTagsHasBeenSet; }
    template<typename UserTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetUserTags(UserTagsT&& value) { m_userTagsHasBeenSet = true; m_userTags = std::forward<UserTagsT>(value); }
    template<typename UserTagsT = Aws::Map<Aws::String, Aws::String>>
    NotificationRecipientType& WithUserTags(UserTagsT&& value) { SetUserTags(std::forward<UserTagsT>(value)); return *this;}
    template<typename UserTagsKeyT = Aws::String, typename UserTagsValueT = Aws::String>
    NotificationRecipientType& AddUserTags(UserTagsKeyT&& key, UserTagsValueT&& value) {
      m_userTagsHasBeenSet = true; m_userTags.emplace(std::forward<UserTagsKeyT>(key), std::forward<UserTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of user IDs. Supports variable injection of
     * <code>$.ContactLens.ContactEvaluation.Agent.AgentId</code> for
     * <code>OnContactEvaluationSubmit</code> event source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    void SetUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds = std::forward<UserIdsT>(value); }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    NotificationRecipientType& WithUserIds(UserIdsT&& value) { SetUserIds(std::forward<UserIdsT>(value)); return *this;}
    template<typename UserIdsT = Aws::String>
    NotificationRecipientType& AddUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds.emplace_back(std::forward<UserIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_userTags;
    bool m_userTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
