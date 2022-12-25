/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContextSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateContextRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateContextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContext"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetContextName() const{ return m_contextName; }

    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline bool ContextNameHasBeenSet() const { return m_contextNameHasBeenSet; }

    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline void SetContextName(const Aws::String& value) { m_contextNameHasBeenSet = true; m_contextName = value; }

    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline void SetContextName(Aws::String&& value) { m_contextNameHasBeenSet = true; m_contextName = std::move(value); }

    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline void SetContextName(const char* value) { m_contextNameHasBeenSet = true; m_contextName.assign(value); }

    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline CreateContextRequest& WithContextName(const Aws::String& value) { SetContextName(value); return *this;}

    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline CreateContextRequest& WithContextName(Aws::String&& value) { SetContextName(std::move(value)); return *this;}

    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline CreateContextRequest& WithContextName(const char* value) { SetContextName(value); return *this;}


    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline const ContextSource& GetSource() const{ return m_source; }

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline void SetSource(const ContextSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline void SetSource(ContextSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline CreateContextRequest& WithSource(const ContextSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline CreateContextRequest& WithSource(ContextSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The context type.</p>
     */
    inline const Aws::String& GetContextType() const{ return m_contextType; }

    /**
     * <p>The context type.</p>
     */
    inline bool ContextTypeHasBeenSet() const { return m_contextTypeHasBeenSet; }

    /**
     * <p>The context type.</p>
     */
    inline void SetContextType(const Aws::String& value) { m_contextTypeHasBeenSet = true; m_contextType = value; }

    /**
     * <p>The context type.</p>
     */
    inline void SetContextType(Aws::String&& value) { m_contextTypeHasBeenSet = true; m_contextType = std::move(value); }

    /**
     * <p>The context type.</p>
     */
    inline void SetContextType(const char* value) { m_contextTypeHasBeenSet = true; m_contextType.assign(value); }

    /**
     * <p>The context type.</p>
     */
    inline CreateContextRequest& WithContextType(const Aws::String& value) { SetContextType(value); return *this;}

    /**
     * <p>The context type.</p>
     */
    inline CreateContextRequest& WithContextType(Aws::String&& value) { SetContextType(std::move(value)); return *this;}

    /**
     * <p>The context type.</p>
     */
    inline CreateContextRequest& WithContextType(const char* value) { SetContextType(value); return *this;}


    /**
     * <p>The description of the context.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the context.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the context.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the context.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the context.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the context.</p>
     */
    inline CreateContextRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the context.</p>
     */
    inline CreateContextRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the context.</p>
     */
    inline CreateContextRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline CreateContextRequest& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }


    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline CreateContextRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline CreateContextRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline CreateContextRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline CreateContextRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_contextName;
    bool m_contextNameHasBeenSet = false;

    ContextSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_contextType;
    bool m_contextTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
