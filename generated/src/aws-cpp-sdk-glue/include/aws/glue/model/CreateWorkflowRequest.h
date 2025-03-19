/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateWorkflowRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateWorkflowRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateWorkflowRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p> <p>Run properties may be logged. Do not pass plaintext secrets as
     * properties. Retrieve secrets from a Glue Connection, Amazon Web Services Secrets
     * Manager or other secret management mechanism if you intend to use them within
     * the workflow run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultRunProperties() const { return m_defaultRunProperties; }
    inline bool DefaultRunPropertiesHasBeenSet() const { return m_defaultRunPropertiesHasBeenSet; }
    template<typename DefaultRunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultRunProperties(DefaultRunPropertiesT&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties = std::forward<DefaultRunPropertiesT>(value); }
    template<typename DefaultRunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    CreateWorkflowRequest& WithDefaultRunProperties(DefaultRunPropertiesT&& value) { SetDefaultRunProperties(std::forward<DefaultRunPropertiesT>(value)); return *this;}
    template<typename DefaultRunPropertiesKeyT = Aws::String, typename DefaultRunPropertiesValueT = Aws::String>
    CreateWorkflowRequest& AddDefaultRunProperties(DefaultRunPropertiesKeyT&& key, DefaultRunPropertiesValueT&& value) {
      m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::forward<DefaultRunPropertiesKeyT>(key), std::forward<DefaultRunPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateWorkflowRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateWorkflowRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to prevent unwanted multiple updates to data, to
     * control costs, or in some cases, to prevent exceeding the maximum number of
     * concurrent runs of any of the component jobs. If you leave this parameter blank,
     * there is no limit to the number of concurrent workflow runs.</p>
     */
    inline int GetMaxConcurrentRuns() const { return m_maxConcurrentRuns; }
    inline bool MaxConcurrentRunsHasBeenSet() const { return m_maxConcurrentRunsHasBeenSet; }
    inline void SetMaxConcurrentRuns(int value) { m_maxConcurrentRunsHasBeenSet = true; m_maxConcurrentRuns = value; }
    inline CreateWorkflowRequest& WithMaxConcurrentRuns(int value) { SetMaxConcurrentRuns(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultRunProperties;
    bool m_defaultRunPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_maxConcurrentRuns{0};
    bool m_maxConcurrentRunsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
