/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ConfigurationRecorder.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>PutConfigurationRecorder</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationRecorderRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationRecorderRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutConfigurationRecorderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationRecorder"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An object for the configuration recorder. A configuration recorder records
     * configuration changes for the resource types in scope.</p>
     */
    inline const ConfigurationRecorder& GetConfigurationRecorder() const { return m_configurationRecorder; }
    inline bool ConfigurationRecorderHasBeenSet() const { return m_configurationRecorderHasBeenSet; }
    template<typename ConfigurationRecorderT = ConfigurationRecorder>
    void SetConfigurationRecorder(ConfigurationRecorderT&& value) { m_configurationRecorderHasBeenSet = true; m_configurationRecorder = std::forward<ConfigurationRecorderT>(value); }
    template<typename ConfigurationRecorderT = ConfigurationRecorder>
    PutConfigurationRecorderRequest& WithConfigurationRecorder(ConfigurationRecorderT&& value) { SetConfigurationRecorder(std::forward<ConfigurationRecorderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the customer managed configuration recorder. Each tag consists
     * of a key and an optional value, both of which you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutConfigurationRecorderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutConfigurationRecorderRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    ConfigurationRecorder m_configurationRecorder;
    bool m_configurationRecorderHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
