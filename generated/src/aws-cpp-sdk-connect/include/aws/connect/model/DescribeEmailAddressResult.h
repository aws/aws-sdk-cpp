/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Connect
{
namespace Model
{
  class DescribeEmailAddressResult
  {
  public:
    AWS_CONNECT_API DescribeEmailAddressResult() = default;
    AWS_CONNECT_API DescribeEmailAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeEmailAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressId() const { return m_emailAddressId; }
    template<typename EmailAddressIdT = Aws::String>
    void SetEmailAddressId(EmailAddressIdT&& value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId = std::forward<EmailAddressIdT>(value); }
    template<typename EmailAddressIdT = Aws::String>
    DescribeEmailAddressResult& WithEmailAddressId(EmailAddressIdT&& value) { SetEmailAddressId(std::forward<EmailAddressIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressArn() const { return m_emailAddressArn; }
    template<typename EmailAddressArnT = Aws::String>
    void SetEmailAddressArn(EmailAddressArnT&& value) { m_emailAddressArnHasBeenSet = true; m_emailAddressArn = std::forward<EmailAddressArnT>(value); }
    template<typename EmailAddressArnT = Aws::String>
    DescribeEmailAddressResult& WithEmailAddressArn(EmailAddressArnT&& value) { SetEmailAddressArn(std::forward<EmailAddressArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address, including the domain.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    DescribeEmailAddressResult& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of email address</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    DescribeEmailAddressResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the email address.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeEmailAddressResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address creation timestamp in ISO 8601 Datetime.</p>
     */
    inline const Aws::String& GetCreateTimestamp() const { return m_createTimestamp; }
    template<typename CreateTimestampT = Aws::String>
    void SetCreateTimestamp(CreateTimestampT&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::forward<CreateTimestampT>(value); }
    template<typename CreateTimestampT = Aws::String>
    DescribeEmailAddressResult& WithCreateTimestamp(CreateTimestampT&& value) { SetCreateTimestamp(std::forward<CreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address last modification timestamp in ISO 8601 Datetime.</p>
     */
    inline const Aws::String& GetModifiedTimestamp() const { return m_modifiedTimestamp; }
    template<typename ModifiedTimestampT = Aws::String>
    void SetModifiedTimestamp(ModifiedTimestampT&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::forward<ModifiedTimestampT>(value); }
    template<typename ModifiedTimestampT = Aws::String>
    DescribeEmailAddressResult& WithModifiedTimestamp(ModifiedTimestampT&& value) { SetModifiedTimestamp(std::forward<ModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeEmailAddressResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeEmailAddressResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEmailAddressResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailAddressId;
    bool m_emailAddressIdHasBeenSet = false;

    Aws::String m_emailAddressArn;
    bool m_emailAddressArnHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::String m_modifiedTimestamp;
    bool m_modifiedTimestampHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
