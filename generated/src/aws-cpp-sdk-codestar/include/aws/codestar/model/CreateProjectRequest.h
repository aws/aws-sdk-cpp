/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateProjectRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The display name for the project to be created in AWS CodeStar.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project to be created in AWS CodeStar.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CreateProjectRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateProjectRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateProjectRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project, if any.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. This token can be used to repeat the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateProjectRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateProjectRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateProjectRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Code objects submitted with the project request. If this
     * parameter is specified, the request must also include the toolchain
     * parameter.</p>
     */
    inline const Aws::Vector<Code>& GetSourceCode() const{ return m_sourceCode; }
    inline bool SourceCodeHasBeenSet() const { return m_sourceCodeHasBeenSet; }
    inline void SetSourceCode(const Aws::Vector<Code>& value) { m_sourceCodeHasBeenSet = true; m_sourceCode = value; }
    inline void SetSourceCode(Aws::Vector<Code>&& value) { m_sourceCodeHasBeenSet = true; m_sourceCode = std::move(value); }
    inline CreateProjectRequest& WithSourceCode(const Aws::Vector<Code>& value) { SetSourceCode(value); return *this;}
    inline CreateProjectRequest& WithSourceCode(Aws::Vector<Code>&& value) { SetSourceCode(std::move(value)); return *this;}
    inline CreateProjectRequest& AddSourceCode(const Code& value) { m_sourceCodeHasBeenSet = true; m_sourceCode.push_back(value); return *this; }
    inline CreateProjectRequest& AddSourceCode(Code&& value) { m_sourceCodeHasBeenSet = true; m_sourceCode.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the toolchain template file submitted with the project request.
     * If this parameter is specified, the request must also include the sourceCode
     * parameter.</p>
     */
    inline const Toolchain& GetToolchain() const{ return m_toolchain; }
    inline bool ToolchainHasBeenSet() const { return m_toolchainHasBeenSet; }
    inline void SetToolchain(const Toolchain& value) { m_toolchainHasBeenSet = true; m_toolchain = value; }
    inline void SetToolchain(Toolchain&& value) { m_toolchainHasBeenSet = true; m_toolchain = std::move(value); }
    inline CreateProjectRequest& WithToolchain(const Toolchain& value) { SetToolchain(value); return *this;}
    inline CreateProjectRequest& WithToolchain(Toolchain&& value) { SetToolchain(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags created for the project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateProjectRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateProjectRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateProjectRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateProjectRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateProjectRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateProjectRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateProjectRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateProjectRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateProjectRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Code> m_sourceCode;
    bool m_sourceCodeHasBeenSet = false;

    Toolchain m_toolchain;
    bool m_toolchainHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
