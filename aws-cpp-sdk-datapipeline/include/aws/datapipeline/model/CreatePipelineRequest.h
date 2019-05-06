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
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreatePipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/CreatePipelineInput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API CreatePipelineRequest : public DataPipelineRequest
  {
  public:
    CreatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePipeline"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the pipeline. You can use the same name for multiple pipelines
     * associated with your AWS account, because AWS Data Pipeline assigns each
     * pipeline a unique pipeline identifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the pipeline. You can use the same name for multiple pipelines
     * associated with your AWS account, because AWS Data Pipeline assigns each
     * pipeline a unique pipeline identifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the pipeline. You can use the same name for multiple pipelines
     * associated with your AWS account, because AWS Data Pipeline assigns each
     * pipeline a unique pipeline identifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the pipeline. You can use the same name for multiple pipelines
     * associated with your AWS account, because AWS Data Pipeline assigns each
     * pipeline a unique pipeline identifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the pipeline. You can use the same name for multiple pipelines
     * associated with your AWS account, because AWS Data Pipeline assigns each
     * pipeline a unique pipeline identifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the pipeline. You can use the same name for multiple pipelines
     * associated with your AWS account, because AWS Data Pipeline assigns each
     * pipeline a unique pipeline identifier.</p>
     */
    inline CreatePipelineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the pipeline. You can use the same name for multiple pipelines
     * associated with your AWS account, because AWS Data Pipeline assigns each
     * pipeline a unique pipeline identifier.</p>
     */
    inline CreatePipelineRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the pipeline. You can use the same name for multiple pipelines
     * associated with your AWS account, because AWS Data Pipeline assigns each
     * pipeline a unique pipeline identifier.</p>
     */
    inline CreatePipelineRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier. This identifier is not the same as the pipeline
     * identifier assigned by AWS Data Pipeline. You are responsible for defining the
     * format and ensuring the uniqueness of this identifier. You use this parameter to
     * ensure idempotency during repeated calls to <code>CreatePipeline</code>. For
     * example, if the first call to <code>CreatePipeline</code> does not succeed, you
     * can pass in the same unique identifier and pipeline name combination on a
     * subsequent call to <code>CreatePipeline</code>. <code>CreatePipeline</code>
     * ensures that if a pipeline already exists with the same name and unique
     * identifier, a new pipeline is not created. Instead, you'll receive the pipeline
     * identifier from the previous attempt. The uniqueness of the name and unique
     * identifier combination is scoped to the AWS account or IAM user credentials.</p>
     */
    inline const Aws::String& GetUniqueId() const{ return m_uniqueId; }

    /**
     * <p>A unique identifier. This identifier is not the same as the pipeline
     * identifier assigned by AWS Data Pipeline. You are responsible for defining the
     * format and ensuring the uniqueness of this identifier. You use this parameter to
     * ensure idempotency during repeated calls to <code>CreatePipeline</code>. For
     * example, if the first call to <code>CreatePipeline</code> does not succeed, you
     * can pass in the same unique identifier and pipeline name combination on a
     * subsequent call to <code>CreatePipeline</code>. <code>CreatePipeline</code>
     * ensures that if a pipeline already exists with the same name and unique
     * identifier, a new pipeline is not created. Instead, you'll receive the pipeline
     * identifier from the previous attempt. The uniqueness of the name and unique
     * identifier combination is scoped to the AWS account or IAM user credentials.</p>
     */
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }

    /**
     * <p>A unique identifier. This identifier is not the same as the pipeline
     * identifier assigned by AWS Data Pipeline. You are responsible for defining the
     * format and ensuring the uniqueness of this identifier. You use this parameter to
     * ensure idempotency during repeated calls to <code>CreatePipeline</code>. For
     * example, if the first call to <code>CreatePipeline</code> does not succeed, you
     * can pass in the same unique identifier and pipeline name combination on a
     * subsequent call to <code>CreatePipeline</code>. <code>CreatePipeline</code>
     * ensures that if a pipeline already exists with the same name and unique
     * identifier, a new pipeline is not created. Instead, you'll receive the pipeline
     * identifier from the previous attempt. The uniqueness of the name and unique
     * identifier combination is scoped to the AWS account or IAM user credentials.</p>
     */
    inline void SetUniqueId(const Aws::String& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = value; }

    /**
     * <p>A unique identifier. This identifier is not the same as the pipeline
     * identifier assigned by AWS Data Pipeline. You are responsible for defining the
     * format and ensuring the uniqueness of this identifier. You use this parameter to
     * ensure idempotency during repeated calls to <code>CreatePipeline</code>. For
     * example, if the first call to <code>CreatePipeline</code> does not succeed, you
     * can pass in the same unique identifier and pipeline name combination on a
     * subsequent call to <code>CreatePipeline</code>. <code>CreatePipeline</code>
     * ensures that if a pipeline already exists with the same name and unique
     * identifier, a new pipeline is not created. Instead, you'll receive the pipeline
     * identifier from the previous attempt. The uniqueness of the name and unique
     * identifier combination is scoped to the AWS account or IAM user credentials.</p>
     */
    inline void SetUniqueId(Aws::String&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::move(value); }

    /**
     * <p>A unique identifier. This identifier is not the same as the pipeline
     * identifier assigned by AWS Data Pipeline. You are responsible for defining the
     * format and ensuring the uniqueness of this identifier. You use this parameter to
     * ensure idempotency during repeated calls to <code>CreatePipeline</code>. For
     * example, if the first call to <code>CreatePipeline</code> does not succeed, you
     * can pass in the same unique identifier and pipeline name combination on a
     * subsequent call to <code>CreatePipeline</code>. <code>CreatePipeline</code>
     * ensures that if a pipeline already exists with the same name and unique
     * identifier, a new pipeline is not created. Instead, you'll receive the pipeline
     * identifier from the previous attempt. The uniqueness of the name and unique
     * identifier combination is scoped to the AWS account or IAM user credentials.</p>
     */
    inline void SetUniqueId(const char* value) { m_uniqueIdHasBeenSet = true; m_uniqueId.assign(value); }

    /**
     * <p>A unique identifier. This identifier is not the same as the pipeline
     * identifier assigned by AWS Data Pipeline. You are responsible for defining the
     * format and ensuring the uniqueness of this identifier. You use this parameter to
     * ensure idempotency during repeated calls to <code>CreatePipeline</code>. For
     * example, if the first call to <code>CreatePipeline</code> does not succeed, you
     * can pass in the same unique identifier and pipeline name combination on a
     * subsequent call to <code>CreatePipeline</code>. <code>CreatePipeline</code>
     * ensures that if a pipeline already exists with the same name and unique
     * identifier, a new pipeline is not created. Instead, you'll receive the pipeline
     * identifier from the previous attempt. The uniqueness of the name and unique
     * identifier combination is scoped to the AWS account or IAM user credentials.</p>
     */
    inline CreatePipelineRequest& WithUniqueId(const Aws::String& value) { SetUniqueId(value); return *this;}

    /**
     * <p>A unique identifier. This identifier is not the same as the pipeline
     * identifier assigned by AWS Data Pipeline. You are responsible for defining the
     * format and ensuring the uniqueness of this identifier. You use this parameter to
     * ensure idempotency during repeated calls to <code>CreatePipeline</code>. For
     * example, if the first call to <code>CreatePipeline</code> does not succeed, you
     * can pass in the same unique identifier and pipeline name combination on a
     * subsequent call to <code>CreatePipeline</code>. <code>CreatePipeline</code>
     * ensures that if a pipeline already exists with the same name and unique
     * identifier, a new pipeline is not created. Instead, you'll receive the pipeline
     * identifier from the previous attempt. The uniqueness of the name and unique
     * identifier combination is scoped to the AWS account or IAM user credentials.</p>
     */
    inline CreatePipelineRequest& WithUniqueId(Aws::String&& value) { SetUniqueId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier. This identifier is not the same as the pipeline
     * identifier assigned by AWS Data Pipeline. You are responsible for defining the
     * format and ensuring the uniqueness of this identifier. You use this parameter to
     * ensure idempotency during repeated calls to <code>CreatePipeline</code>. For
     * example, if the first call to <code>CreatePipeline</code> does not succeed, you
     * can pass in the same unique identifier and pipeline name combination on a
     * subsequent call to <code>CreatePipeline</code>. <code>CreatePipeline</code>
     * ensures that if a pipeline already exists with the same name and unique
     * identifier, a new pipeline is not created. Instead, you'll receive the pipeline
     * identifier from the previous attempt. The uniqueness of the name and unique
     * identifier combination is scoped to the AWS account or IAM user credentials.</p>
     */
    inline CreatePipelineRequest& WithUniqueId(const char* value) { SetUniqueId(value); return *this;}


    /**
     * <p>The description for the pipeline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the pipeline.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the pipeline.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the pipeline.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the pipeline.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the pipeline.</p>
     */
    inline CreatePipelineRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the pipeline.</p>
     */
    inline CreatePipelineRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the pipeline.</p>
     */
    inline CreatePipelineRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of tags to associate with the pipeline at creation. Tags let you
     * control access to pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with the pipeline at creation. Tags let you
     * control access to pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associate with the pipeline at creation. Tags let you
     * control access to pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with the pipeline at creation. Tags let you
     * control access to pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associate with the pipeline at creation. Tags let you
     * control access to pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline CreatePipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with the pipeline at creation. Tags let you
     * control access to pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline CreatePipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associate with the pipeline at creation. Tags let you
     * control access to pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline CreatePipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with the pipeline at creation. Tags let you
     * control access to pipelines. For more information, see <a
     * href="http://docs.aws.amazon.com/datapipeline/latest/DeveloperGuide/dp-control-access.html">Controlling
     * User Access to Pipelines</a> in the <i>AWS Data Pipeline Developer
     * Guide</i>.</p>
     */
    inline CreatePipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
