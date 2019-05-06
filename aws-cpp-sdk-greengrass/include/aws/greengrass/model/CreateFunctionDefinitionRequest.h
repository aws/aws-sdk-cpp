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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/FunctionDefinitionVersion.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateFunctionDefinitionRequest : public GreengrassRequest
  {
  public:
    CreateFunctionDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFunctionDefinition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateFunctionDefinitionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateFunctionDefinitionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateFunctionDefinitionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * Information about the initial version of the function definition.
     */
    inline const FunctionDefinitionVersion& GetInitialVersion() const{ return m_initialVersion; }

    /**
     * Information about the initial version of the function definition.
     */
    inline bool InitialVersionHasBeenSet() const { return m_initialVersionHasBeenSet; }

    /**
     * Information about the initial version of the function definition.
     */
    inline void SetInitialVersion(const FunctionDefinitionVersion& value) { m_initialVersionHasBeenSet = true; m_initialVersion = value; }

    /**
     * Information about the initial version of the function definition.
     */
    inline void SetInitialVersion(FunctionDefinitionVersion&& value) { m_initialVersionHasBeenSet = true; m_initialVersion = std::move(value); }

    /**
     * Information about the initial version of the function definition.
     */
    inline CreateFunctionDefinitionRequest& WithInitialVersion(const FunctionDefinitionVersion& value) { SetInitialVersion(value); return *this;}

    /**
     * Information about the initial version of the function definition.
     */
    inline CreateFunctionDefinitionRequest& WithInitialVersion(FunctionDefinitionVersion&& value) { SetInitialVersion(std::move(value)); return *this;}


    /**
     * The name of the function definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the function definition.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the function definition.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the function definition.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the function definition.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the function definition.
     */
    inline CreateFunctionDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the function definition.
     */
    inline CreateFunctionDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the function definition.
     */
    inline CreateFunctionDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Tag(s) to add to the new resource
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * Tag(s) to add to the new resource
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * Tag(s) to add to the new resource
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * Tag(s) to add to the new resource
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Tag(s) to add to the new resource
     */
    inline CreateFunctionDefinitionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    FunctionDefinitionVersion m_initialVersion;
    bool m_initialVersionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
