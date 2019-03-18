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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/model/Field.h>
#include <aws/datapipeline/model/Tag.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains pipeline metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PipelineDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API PipelineDescription
  {
  public:
    PipelineDescription();
    PipelineDescription(Aws::Utils::Json::JsonView jsonValue);
    PipelineDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline PipelineDescription& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline PipelineDescription& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * <p>The pipeline identifier that was assigned by AWS Data Pipeline. This is a
     * string of the form <code>df-297EG78HU43EEXAMPLE</code>.</p>
     */
    inline PipelineDescription& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of read-only fields that contain metadata about the pipeline: @userId,
     * @accountId, and @pipelineState.</p>
     */
    inline const Aws::Vector<Field>& GetFields() const{ return m_fields; }

    /**
     * <p>A list of read-only fields that contain metadata about the pipeline: @userId,
     * @accountId, and @pipelineState.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A list of read-only fields that contain metadata about the pipeline: @userId,
     * @accountId, and @pipelineState.</p>
     */
    inline void SetFields(const Aws::Vector<Field>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A list of read-only fields that contain metadata about the pipeline: @userId,
     * @accountId, and @pipelineState.</p>
     */
    inline void SetFields(Aws::Vector<Field>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A list of read-only fields that contain metadata about the pipeline: @userId,
     * @accountId, and @pipelineState.</p>
     */
    inline PipelineDescription& WithFields(const Aws::Vector<Field>& value) { SetFields(value); return *this;}

    /**
     * <p>A list of read-only fields that contain metadata about the pipeline: @userId,
     * @accountId, and @pipelineState.</p>
     */
    inline PipelineDescription& WithFields(Aws::Vector<Field>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A list of read-only fields that contain metadata about the pipeline: @userId,
     * @accountId, and @pipelineState.</p>
     */
    inline PipelineDescription& AddFields(const Field& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>A list of read-only fields that contain metadata about the pipeline: @userId,
     * @accountId, and @pipelineState.</p>
     */
    inline PipelineDescription& AddFields(Field&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>Description of the pipeline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the pipeline.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the pipeline.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the pipeline.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the pipeline.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the pipeline.</p>
     */
    inline PipelineDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the pipeline.</p>
     */
    inline PipelineDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the pipeline.</p>
     */
    inline PipelineDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of tags to associated with a pipeline. Tags let you control access to
     * pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associated with a pipeline. Tags let you control access to
     * pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associated with a pipeline. Tags let you control access to
     * pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associated with a pipeline. Tags let you control access to
     * pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associated with a pipeline. Tags let you control access to
     * pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline PipelineDescription& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associated with a pipeline. Tags let you control access to
     * pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline PipelineDescription& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associated with a pipeline. Tags let you control access to
     * pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline PipelineDescription& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associated with a pipeline. Tags let you control access to
     * pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline PipelineDescription& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Field> m_fields;
    bool m_fieldsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
