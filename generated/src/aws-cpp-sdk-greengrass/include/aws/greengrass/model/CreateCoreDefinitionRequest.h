﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/CoreDefinitionVersion.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   * Information needed to create a core definition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class CreateCoreDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateCoreDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCoreDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }
    inline CreateCoreDefinitionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}
    inline CreateCoreDefinitionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}
    inline CreateCoreDefinitionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * Information about the initial version of the core definition.
     */
    inline const CoreDefinitionVersion& GetInitialVersion() const{ return m_initialVersion; }
    inline bool InitialVersionHasBeenSet() const { return m_initialVersionHasBeenSet; }
    inline void SetInitialVersion(const CoreDefinitionVersion& value) { m_initialVersionHasBeenSet = true; m_initialVersion = value; }
    inline void SetInitialVersion(CoreDefinitionVersion&& value) { m_initialVersionHasBeenSet = true; m_initialVersion = std::move(value); }
    inline CreateCoreDefinitionRequest& WithInitialVersion(const CoreDefinitionVersion& value) { SetInitialVersion(value); return *this;}
    inline CreateCoreDefinitionRequest& WithInitialVersion(CoreDefinitionVersion&& value) { SetInitialVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the core definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateCoreDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateCoreDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateCoreDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Tag(s) to add to the new resource.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCoreDefinitionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateCoreDefinitionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCoreDefinitionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateCoreDefinitionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateCoreDefinitionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateCoreDefinitionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateCoreDefinitionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateCoreDefinitionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateCoreDefinitionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    CoreDefinitionVersion m_initialVersion;
    bool m_initialVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
