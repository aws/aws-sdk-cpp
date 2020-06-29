/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ExperimentSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The properties of an experiment as returned by the <a>Search</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Experiment">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API Experiment
  {
  public:
    Experiment();
    Experiment(Aws::Utils::Json::JsonView jsonValue);
    Experiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the experiment.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline Experiment& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline Experiment& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline Experiment& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline const Aws::String& GetExperimentArn() const{ return m_experimentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline bool ExperimentArnHasBeenSet() const { return m_experimentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(const Aws::String& value) { m_experimentArnHasBeenSet = true; m_experimentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(Aws::String&& value) { m_experimentArnHasBeenSet = true; m_experimentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline void SetExperimentArn(const char* value) { m_experimentArnHasBeenSet = true; m_experimentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline Experiment& WithExperimentArn(const Aws::String& value) { SetExperimentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline Experiment& WithExperimentArn(Aws::String&& value) { SetExperimentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline Experiment& WithExperimentArn(const char* value) { SetExperimentArn(value); return *this;}


    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline Experiment& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline Experiment& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline Experiment& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    
    inline const ExperimentSource& GetSource() const{ return m_source; }

    
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    
    inline void SetSource(const ExperimentSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    
    inline void SetSource(ExperimentSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    
    inline Experiment& WithSource(const ExperimentSource& value) { SetSource(value); return *this;}

    
    inline Experiment& WithSource(ExperimentSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the experiment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the experiment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the experiment.</p>
     */
    inline Experiment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the experiment.</p>
     */
    inline Experiment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the experiment.</p>
     */
    inline Experiment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>When the experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the experiment was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the experiment was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the experiment was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the experiment was created.</p>
     */
    inline Experiment& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the experiment was created.</p>
     */
    inline Experiment& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    
    inline Experiment& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline Experiment& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>When the experiment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline Experiment& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the experiment was last modified.</p>
     */
    inline Experiment& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    
    inline Experiment& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline Experiment& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    /**
     * <p>The list of tags that are associated with the experiment. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags that are associated with the experiment. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags that are associated with the experiment. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags that are associated with the experiment. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags that are associated with the experiment. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline Experiment& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags that are associated with the experiment. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline Experiment& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags that are associated with the experiment. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline Experiment& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags that are associated with the experiment. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline Experiment& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet;

    Aws::String m_experimentArn;
    bool m_experimentArnHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    ExperimentSource m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
