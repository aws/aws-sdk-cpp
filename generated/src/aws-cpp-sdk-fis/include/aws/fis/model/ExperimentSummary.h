/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fis/model/ExperimentOptions.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Provides a summary of an experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentSummary">AWS
   * API Reference</a></p>
   */
  class ExperimentSummary
  {
  public:
    AWS_FIS_API ExperimentSummary();
    AWS_FIS_API ExperimentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ExperimentSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ExperimentSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ExperimentSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ExperimentSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ExperimentSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ExperimentSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetExperimentTemplateId() const{ return m_experimentTemplateId; }
    inline bool ExperimentTemplateIdHasBeenSet() const { return m_experimentTemplateIdHasBeenSet; }
    inline void SetExperimentTemplateId(const Aws::String& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = value; }
    inline void SetExperimentTemplateId(Aws::String&& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = std::move(value); }
    inline void SetExperimentTemplateId(const char* value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId.assign(value); }
    inline ExperimentSummary& WithExperimentTemplateId(const Aws::String& value) { SetExperimentTemplateId(value); return *this;}
    inline ExperimentSummary& WithExperimentTemplateId(Aws::String&& value) { SetExperimentTemplateId(std::move(value)); return *this;}
    inline ExperimentSummary& WithExperimentTemplateId(const char* value) { SetExperimentTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the experiment.</p>
     */
    inline const ExperimentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ExperimentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ExperimentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ExperimentSummary& WithState(const ExperimentState& value) { SetState(value); return *this;}
    inline ExperimentSummary& WithState(ExperimentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ExperimentSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ExperimentSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ExperimentSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ExperimentSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ExperimentSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ExperimentSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ExperimentSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ExperimentSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ExperimentSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ExperimentSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ExperimentSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The experiment options for the experiment.</p>
     */
    inline const ExperimentOptions& GetExperimentOptions() const{ return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    inline void SetExperimentOptions(const ExperimentOptions& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = value; }
    inline void SetExperimentOptions(ExperimentOptions&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::move(value); }
    inline ExperimentSummary& WithExperimentOptions(const ExperimentOptions& value) { SetExperimentOptions(value); return *this;}
    inline ExperimentSummary& WithExperimentOptions(ExperimentOptions&& value) { SetExperimentOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_experimentTemplateId;
    bool m_experimentTemplateIdHasBeenSet = false;

    ExperimentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ExperimentOptions m_experimentOptions;
    bool m_experimentOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
