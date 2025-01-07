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
    AWS_CONFIGSERVICE_API PutConfigurationRecorderRequest();

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
    inline const ConfigurationRecorder& GetConfigurationRecorder() const{ return m_configurationRecorder; }
    inline bool ConfigurationRecorderHasBeenSet() const { return m_configurationRecorderHasBeenSet; }
    inline void SetConfigurationRecorder(const ConfigurationRecorder& value) { m_configurationRecorderHasBeenSet = true; m_configurationRecorder = value; }
    inline void SetConfigurationRecorder(ConfigurationRecorder&& value) { m_configurationRecorderHasBeenSet = true; m_configurationRecorder = std::move(value); }
    inline PutConfigurationRecorderRequest& WithConfigurationRecorder(const ConfigurationRecorder& value) { SetConfigurationRecorder(value); return *this;}
    inline PutConfigurationRecorderRequest& WithConfigurationRecorder(ConfigurationRecorder&& value) { SetConfigurationRecorder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the customer managed configuration recorder. Each tag consists
     * of a key and an optional value, both of which you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutConfigurationRecorderRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutConfigurationRecorderRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutConfigurationRecorderRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutConfigurationRecorderRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
