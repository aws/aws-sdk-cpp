/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateRoleAliasRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateRoleAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoleAlias"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The role alias that points to a role ARN. This allows you to change the role
     * without having to update the device.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }

    /**
     * <p>The role alias that points to a role ARN. This allows you to change the role
     * without having to update the device.</p>
     */
    inline bool RoleAliasHasBeenSet() const { return m_roleAliasHasBeenSet; }

    /**
     * <p>The role alias that points to a role ARN. This allows you to change the role
     * without having to update the device.</p>
     */
    inline void SetRoleAlias(const Aws::String& value) { m_roleAliasHasBeenSet = true; m_roleAlias = value; }

    /**
     * <p>The role alias that points to a role ARN. This allows you to change the role
     * without having to update the device.</p>
     */
    inline void SetRoleAlias(Aws::String&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::move(value); }

    /**
     * <p>The role alias that points to a role ARN. This allows you to change the role
     * without having to update the device.</p>
     */
    inline void SetRoleAlias(const char* value) { m_roleAliasHasBeenSet = true; m_roleAlias.assign(value); }

    /**
     * <p>The role alias that points to a role ARN. This allows you to change the role
     * without having to update the device.</p>
     */
    inline CreateRoleAliasRequest& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}

    /**
     * <p>The role alias that points to a role ARN. This allows you to change the role
     * without having to update the device.</p>
     */
    inline CreateRoleAliasRequest& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}

    /**
     * <p>The role alias that points to a role ARN. This allows you to change the role
     * without having to update the device.</p>
     */
    inline CreateRoleAliasRequest& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}


    /**
     * <p>The role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The role ARN.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The role ARN.</p>
     */
    inline CreateRoleAliasRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The role ARN.</p>
     */
    inline CreateRoleAliasRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The role ARN.</p>
     */
    inline CreateRoleAliasRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>How long (in seconds) the credentials will be valid. The default value is
     * 3,600 seconds.</p> <p>This value must be less than or equal to the maximum
     * session duration of the IAM role that the role alias references.</p>
     */
    inline int GetCredentialDurationSeconds() const{ return m_credentialDurationSeconds; }

    /**
     * <p>How long (in seconds) the credentials will be valid. The default value is
     * 3,600 seconds.</p> <p>This value must be less than or equal to the maximum
     * session duration of the IAM role that the role alias references.</p>
     */
    inline bool CredentialDurationSecondsHasBeenSet() const { return m_credentialDurationSecondsHasBeenSet; }

    /**
     * <p>How long (in seconds) the credentials will be valid. The default value is
     * 3,600 seconds.</p> <p>This value must be less than or equal to the maximum
     * session duration of the IAM role that the role alias references.</p>
     */
    inline void SetCredentialDurationSeconds(int value) { m_credentialDurationSecondsHasBeenSet = true; m_credentialDurationSeconds = value; }

    /**
     * <p>How long (in seconds) the credentials will be valid. The default value is
     * 3,600 seconds.</p> <p>This value must be less than or equal to the maximum
     * session duration of the IAM role that the role alias references.</p>
     */
    inline CreateRoleAliasRequest& WithCredentialDurationSeconds(int value) { SetCredentialDurationSeconds(value); return *this;}


    /**
     * <p>Metadata which can be used to manage the role alias.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the role alias.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the role alias.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the role alias.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the role alias.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateRoleAliasRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the role alias.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateRoleAliasRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the role alias.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateRoleAliasRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the role alias.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateRoleAliasRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_roleAlias;
    bool m_roleAliasHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_credentialDurationSeconds;
    bool m_credentialDurationSecondsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
