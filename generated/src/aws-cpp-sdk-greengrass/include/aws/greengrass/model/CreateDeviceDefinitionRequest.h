/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/DeviceDefinitionVersion.h>
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
  class CreateDeviceDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateDeviceDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeviceDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateDeviceDefinitionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateDeviceDefinitionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateDeviceDefinitionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * Information about the initial version of the device definition.
     */
    inline const DeviceDefinitionVersion& GetInitialVersion() const{ return m_initialVersion; }

    /**
     * Information about the initial version of the device definition.
     */
    inline bool InitialVersionHasBeenSet() const { return m_initialVersionHasBeenSet; }

    /**
     * Information about the initial version of the device definition.
     */
    inline void SetInitialVersion(const DeviceDefinitionVersion& value) { m_initialVersionHasBeenSet = true; m_initialVersion = value; }

    /**
     * Information about the initial version of the device definition.
     */
    inline void SetInitialVersion(DeviceDefinitionVersion&& value) { m_initialVersionHasBeenSet = true; m_initialVersion = std::move(value); }

    /**
     * Information about the initial version of the device definition.
     */
    inline CreateDeviceDefinitionRequest& WithInitialVersion(const DeviceDefinitionVersion& value) { SetInitialVersion(value); return *this;}

    /**
     * Information about the initial version of the device definition.
     */
    inline CreateDeviceDefinitionRequest& WithInitialVersion(DeviceDefinitionVersion&& value) { SetInitialVersion(std::move(value)); return *this;}


    /**
     * The name of the device definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the device definition.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the device definition.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the device definition.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the device definition.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the device definition.
     */
    inline CreateDeviceDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the device definition.
     */
    inline CreateDeviceDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the device definition.
     */
    inline CreateDeviceDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Tag(s) to add to the new resource.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Tag(s) to add to the new resource.
     */
    inline CreateDeviceDefinitionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    DeviceDefinitionVersion m_initialVersion;
    bool m_initialVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
