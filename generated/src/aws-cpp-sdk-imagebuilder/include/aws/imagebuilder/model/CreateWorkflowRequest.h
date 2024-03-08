/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/WorkflowType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class CreateWorkflowRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API CreateWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the workflow to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workflow to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workflow to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow to create.</p>
     */
    inline CreateWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow to create.</p>
     */
    inline CreateWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow to create.</p>
     */
    inline CreateWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The semantic version of this workflow resource. The semantic version syntax
     * adheres to the following rules.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> 
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of this workflow resource. The semantic version syntax
     * adheres to the following rules.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> 
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version of this workflow resource. The semantic version syntax
     * adheres to the following rules.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> 
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version of this workflow resource. The semantic version syntax
     * adheres to the following rules.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> 
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of this workflow resource. The semantic version syntax
     * adheres to the following rules.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> 
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of this workflow resource. The semantic version syntax
     * adheres to the following rules.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> 
     */
    inline CreateWorkflowRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of this workflow resource. The semantic version syntax
     * adheres to the following rules.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> 
     */
    inline CreateWorkflowRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of this workflow resource. The semantic version syntax
     * adheres to the following rules.</p>  <p>The semantic version has four
     * nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign
     * values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> 
     */
    inline CreateWorkflowRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>Describes the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes the workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes the workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Describes the workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline const Aws::String& GetChangeDescription() const{ return m_changeDescription; }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline void SetChangeDescription(const Aws::String& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = value; }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline void SetChangeDescription(Aws::String&& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = std::move(value); }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline void SetChangeDescription(const char* value) { m_changeDescriptionHasBeenSet = true; m_changeDescription.assign(value); }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline CreateWorkflowRequest& WithChangeDescription(const Aws::String& value) { SetChangeDescription(value); return *this;}

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline CreateWorkflowRequest& WithChangeDescription(Aws::String&& value) { SetChangeDescription(std::move(value)); return *this;}

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline CreateWorkflowRequest& WithChangeDescription(const char* value) { SetChangeDescription(value); return *this;}


    /**
     * <p>Contains the UTF-8 encoded YAML document content for the workflow.
     * Alternatively, you can specify the <code>uri</code> of a YAML document file
     * stored in Amazon S3. However, you cannot specify both properties.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>Contains the UTF-8 encoded YAML document content for the workflow.
     * Alternatively, you can specify the <code>uri</code> of a YAML document file
     * stored in Amazon S3. However, you cannot specify both properties.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>Contains the UTF-8 encoded YAML document content for the workflow.
     * Alternatively, you can specify the <code>uri</code> of a YAML document file
     * stored in Amazon S3. However, you cannot specify both properties.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>Contains the UTF-8 encoded YAML document content for the workflow.
     * Alternatively, you can specify the <code>uri</code> of a YAML document file
     * stored in Amazon S3. However, you cannot specify both properties.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>Contains the UTF-8 encoded YAML document content for the workflow.
     * Alternatively, you can specify the <code>uri</code> of a YAML document file
     * stored in Amazon S3. However, you cannot specify both properties.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>Contains the UTF-8 encoded YAML document content for the workflow.
     * Alternatively, you can specify the <code>uri</code> of a YAML document file
     * stored in Amazon S3. However, you cannot specify both properties.</p>
     */
    inline CreateWorkflowRequest& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>Contains the UTF-8 encoded YAML document content for the workflow.
     * Alternatively, you can specify the <code>uri</code> of a YAML document file
     * stored in Amazon S3. However, you cannot specify both properties.</p>
     */
    inline CreateWorkflowRequest& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>Contains the UTF-8 encoded YAML document content for the workflow.
     * Alternatively, you can specify the <code>uri</code> of a YAML document file
     * stored in Amazon S3. However, you cannot specify both properties.</p>
     */
    inline CreateWorkflowRequest& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>The <code>uri</code> of a YAML component document file. This must be an S3
     * URL (<code>s3://bucket/key</code>), and the requester must have permission to
     * access the S3 bucket it points to. If you use Amazon S3, you can specify
     * component content up to your service quota.</p> <p>Alternatively, you can
     * specify the YAML document inline, using the component <code>data</code>
     * property. You cannot specify both properties.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The <code>uri</code> of a YAML component document file. This must be an S3
     * URL (<code>s3://bucket/key</code>), and the requester must have permission to
     * access the S3 bucket it points to. If you use Amazon S3, you can specify
     * component content up to your service quota.</p> <p>Alternatively, you can
     * specify the YAML document inline, using the component <code>data</code>
     * property. You cannot specify both properties.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The <code>uri</code> of a YAML component document file. This must be an S3
     * URL (<code>s3://bucket/key</code>), and the requester must have permission to
     * access the S3 bucket it points to. If you use Amazon S3, you can specify
     * component content up to your service quota.</p> <p>Alternatively, you can
     * specify the YAML document inline, using the component <code>data</code>
     * property. You cannot specify both properties.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The <code>uri</code> of a YAML component document file. This must be an S3
     * URL (<code>s3://bucket/key</code>), and the requester must have permission to
     * access the S3 bucket it points to. If you use Amazon S3, you can specify
     * component content up to your service quota.</p> <p>Alternatively, you can
     * specify the YAML document inline, using the component <code>data</code>
     * property. You cannot specify both properties.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The <code>uri</code> of a YAML component document file. This must be an S3
     * URL (<code>s3://bucket/key</code>), and the requester must have permission to
     * access the S3 bucket it points to. If you use Amazon S3, you can specify
     * component content up to your service quota.</p> <p>Alternatively, you can
     * specify the YAML document inline, using the component <code>data</code>
     * property. You cannot specify both properties.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The <code>uri</code> of a YAML component document file. This must be an S3
     * URL (<code>s3://bucket/key</code>), and the requester must have permission to
     * access the S3 bucket it points to. If you use Amazon S3, you can specify
     * component content up to your service quota.</p> <p>Alternatively, you can
     * specify the YAML document inline, using the component <code>data</code>
     * property. You cannot specify both properties.</p>
     */
    inline CreateWorkflowRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The <code>uri</code> of a YAML component document file. This must be an S3
     * URL (<code>s3://bucket/key</code>), and the requester must have permission to
     * access the S3 bucket it points to. If you use Amazon S3, you can specify
     * component content up to your service quota.</p> <p>Alternatively, you can
     * specify the YAML document inline, using the component <code>data</code>
     * property. You cannot specify both properties.</p>
     */
    inline CreateWorkflowRequest& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The <code>uri</code> of a YAML component document file. This must be an S3
     * URL (<code>s3://bucket/key</code>), and the requester must have permission to
     * access the S3 bucket it points to. If you use Amazon S3, you can specify
     * component content up to your service quota.</p> <p>Alternatively, you can
     * specify the YAML document inline, using the component <code>data</code>
     * property. You cannot specify both properties.</p>
     */
    inline CreateWorkflowRequest& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The ID of the KMS key that is used to encrypt this workflow resource.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key that is used to encrypt this workflow resource.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key that is used to encrypt this workflow resource.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key that is used to encrypt this workflow resource.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key that is used to encrypt this workflow resource.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key that is used to encrypt this workflow resource.</p>
     */
    inline CreateWorkflowRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key that is used to encrypt this workflow resource.</p>
     */
    inline CreateWorkflowRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key that is used to encrypt this workflow resource.</p>
     */
    inline CreateWorkflowRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that apply to the workflow resource.</p>
     */
    inline CreateWorkflowRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateWorkflowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateWorkflowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateWorkflowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The phase in the image build process for which the workflow resource is
     * responsible.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }

    /**
     * <p>The phase in the image build process for which the workflow resource is
     * responsible.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The phase in the image build process for which the workflow resource is
     * responsible.</p>
     */
    inline void SetType(const WorkflowType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The phase in the image build process for which the workflow resource is
     * responsible.</p>
     */
    inline void SetType(WorkflowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The phase in the image build process for which the workflow resource is
     * responsible.</p>
     */
    inline CreateWorkflowRequest& WithType(const WorkflowType& value) { SetType(value); return *this;}

    /**
     * <p>The phase in the image build process for which the workflow resource is
     * responsible.</p>
     */
    inline CreateWorkflowRequest& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_changeDescription;
    bool m_changeDescriptionHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    WorkflowType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
