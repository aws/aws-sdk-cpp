/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The input for the CreatePolicy operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicyRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API CreatePolicyRequest : public IoTRequest
  {
  public:
    CreatePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePolicy"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The policy name.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The policy name.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The policy name.</p>
     */
    inline CreatePolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy name.</p>
     */
    inline CreatePolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The policy name.</p>
     */
    inline CreatePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The JSON document that describes the policy. <b>policyDocument</b> must have
     * a minimum length of 1, with a maximum length of 2048, excluding whitespace.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON document that describes the policy. <b>policyDocument</b> must have
     * a minimum length of 1, with a maximum length of 2048, excluding whitespace.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The JSON document that describes the policy. <b>policyDocument</b> must have
     * a minimum length of 1, with a maximum length of 2048, excluding whitespace.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON document that describes the policy. <b>policyDocument</b> must have
     * a minimum length of 1, with a maximum length of 2048, excluding whitespace.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The JSON document that describes the policy. <b>policyDocument</b> must have
     * a minimum length of 1, with a maximum length of 2048, excluding whitespace.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The JSON document that describes the policy. <b>policyDocument</b> must have
     * a minimum length of 1, with a maximum length of 2048, excluding whitespace.</p>
     */
    inline CreatePolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON document that describes the policy. <b>policyDocument</b> must have
     * a minimum length of 1, with a maximum length of 2048, excluding whitespace.</p>
     */
    inline CreatePolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON document that describes the policy. <b>policyDocument</b> must have
     * a minimum length of 1, with a maximum length of 2048, excluding whitespace.</p>
     */
    inline CreatePolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>Metadata which can be used to manage the policy.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the policy.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the policy.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the policy.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the policy.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline CreatePolicyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the policy.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline CreatePolicyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the policy.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline CreatePolicyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the policy.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline CreatePolicyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
