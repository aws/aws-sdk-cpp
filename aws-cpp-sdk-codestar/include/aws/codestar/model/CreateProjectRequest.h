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
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar/model/Toolchain.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codestar/model/Code.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class AWS_CODESTAR_API CreateProjectRequest : public CodeStarRequest
  {
  public:
    CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline CreateProjectRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline CreateProjectRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline CreateProjectRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The description of the project, if any.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline CreateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the project, if any.</p>
     */
    inline CreateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the project, if any.</p>
     */
    inline CreateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline CreateProjectRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline CreateProjectRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline CreateProjectRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline const Aws::Vector<Code>& GetSourceCode() const{ return m_sourceCode; }

    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline bool SourceCodeHasBeenSet() const { return m_sourceCodeHasBeenSet; }

    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline void SetSourceCode(const Aws::Vector<Code>& value) { m_sourceCodeHasBeenSet = true; m_sourceCode = value; }

    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline void SetSourceCode(Aws::Vector<Code>&& value) { m_sourceCodeHasBeenSet = true; m_sourceCode = std::move(value); }

    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline CreateProjectRequest& WithSourceCode(const Aws::Vector<Code>& value) { SetSourceCode(value); return *this;}

    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline CreateProjectRequest& WithSourceCode(Aws::Vector<Code>&& value) { SetSourceCode(std::move(value)); return *this;}

    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline CreateProjectRequest& AddSourceCode(const Code& value) { m_sourceCodeHasBeenSet = true; m_sourceCode.push_back(value); return *this; }

    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline CreateProjectRequest& AddSourceCode(Code&& value) { m_sourceCodeHasBeenSet = true; m_sourceCode.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the toolchain template file submitted with the project request.
     * If this parameter is specified, the request must also include the sourceCode
     * parameter.</p>
     */
    inline const Toolchain& GetToolchain() const{ return m_toolchain; }

    /**
     * <p>The name of the toolchain template file submitted with the project request.
     * If this parameter is specified, the request must also include the sourceCode
     * parameter.</p>
     */
    inline bool ToolchainHasBeenSet() const { return m_toolchainHasBeenSet; }

    /**
     * <p>The name of the toolchain template file submitted with the project request.
     * If this parameter is specified, the request must also include the sourceCode
     * parameter.</p>
     */
    inline void SetToolchain(const Toolchain& value) { m_toolchainHasBeenSet = true; m_toolchain = value; }

    /**
     * <p>The name of the toolchain template file submitted with the project request.
     * If this parameter is specified, the request must also include the sourceCode
     * parameter.</p>
     */
    inline void SetToolchain(Toolchain&& value) { m_toolchainHasBeenSet = true; m_toolchain = std::move(value); }

    /**
     * <p>The name of the toolchain template file submitted with the project request.
     * If this parameter is specified, the request must also include the sourceCode
     * parameter.</p>
     */
    inline CreateProjectRequest& WithToolchain(const Toolchain& value) { SetToolchain(value); return *this;}

    /**
     * <p>The name of the toolchain template file submitted with the project request.
     * If this parameter is specified, the request must also include the sourceCode
     * parameter.</p>
     */
    inline CreateProjectRequest& WithToolchain(Toolchain&& value) { SetToolchain(std::move(value)); return *this;}


    /**
     * <p>The tags created for the project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags created for the project.</p>
     */
    inline CreateProjectRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Vector<Code> m_sourceCode;
    bool m_sourceCodeHasBeenSet;

    Toolchain m_toolchain;
    bool m_toolchainHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
