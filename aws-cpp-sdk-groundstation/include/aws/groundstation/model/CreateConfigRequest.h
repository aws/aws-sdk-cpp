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
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/model/ConfigTypeData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateConfigRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API CreateConfigRequest : public GroundStationRequest
  {
  public:
    CreateConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline const ConfigTypeData& GetConfigData() const{ return m_configData; }

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline bool ConfigDataHasBeenSet() const { return m_configDataHasBeenSet; }

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline void SetConfigData(const ConfigTypeData& value) { m_configDataHasBeenSet = true; m_configData = value; }

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline void SetConfigData(ConfigTypeData&& value) { m_configDataHasBeenSet = true; m_configData = std::move(value); }

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& WithConfigData(const ConfigTypeData& value) { SetConfigData(value); return *this;}

    /**
     * <p>Parameters of a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& WithConfigData(ConfigTypeData&& value) { SetConfigData(std::move(value)); return *this;}


    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline CreateConfigRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    ConfigTypeData m_configData;
    bool m_configDataHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
