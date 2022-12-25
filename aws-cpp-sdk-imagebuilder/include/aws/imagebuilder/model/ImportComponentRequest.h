/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ComponentType.h>
#include <aws/imagebuilder/model/ComponentFormat.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ImportComponentRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ImportComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportComponent"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the component.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the component.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the component.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the component.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the component.</p>
     */
    inline ImportComponentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the component.</p>
     */
    inline ImportComponentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the component.</p>
     */
    inline ImportComponentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The semantic version of the component. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
     * With semantic versioning, you have the flexibility to use wildcards (x) to
     * specify the most recent versions or nodes when selecting the base image or
     * components for your recipe. When you use a wildcard in any node, all nodes to
     * the right of the first wildcard must also be wildcards.</p> 
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version of the component. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
     * With semantic versioning, you have the flexibility to use wildcards (x) to
     * specify the most recent versions or nodes when selecting the base image or
     * components for your recipe. When you use a wildcard in any node, all nodes to
     * the right of the first wildcard must also be wildcards.</p> 
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version of the component. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
     * With semantic versioning, you have the flexibility to use wildcards (x) to
     * specify the most recent versions or nodes when selecting the base image or
     * components for your recipe. When you use a wildcard in any node, all nodes to
     * the right of the first wildcard must also be wildcards.</p> 
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version of the component. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
     * With semantic versioning, you have the flexibility to use wildcards (x) to
     * specify the most recent versions or nodes when selecting the base image or
     * components for your recipe. When you use a wildcard in any node, all nodes to
     * the right of the first wildcard must also be wildcards.</p> 
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version of the component. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
     * With semantic versioning, you have the flexibility to use wildcards (x) to
     * specify the most recent versions or nodes when selecting the base image or
     * components for your recipe. When you use a wildcard in any node, all nodes to
     * the right of the first wildcard must also be wildcards.</p> 
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version of the component. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
     * With semantic versioning, you have the flexibility to use wildcards (x) to
     * specify the most recent versions or nodes when selecting the base image or
     * components for your recipe. When you use a wildcard in any node, all nodes to
     * the right of the first wildcard must also be wildcards.</p> 
     */
    inline ImportComponentRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version of the component. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
     * With semantic versioning, you have the flexibility to use wildcards (x) to
     * specify the most recent versions or nodes when selecting the base image or
     * components for your recipe. When you use a wildcard in any node, all nodes to
     * the right of the first wildcard must also be wildcards.</p> 
     */
    inline ImportComponentRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the component. This version follows the semantic
     * version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
     * With semantic versioning, you have the flexibility to use wildcards (x) to
     * specify the most recent versions or nodes when selecting the base image or
     * components for your recipe. When you use a wildcard in any node, all nodes to
     * the right of the first wildcard must also be wildcards.</p> 
     */
    inline ImportComponentRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>The description of the component. Describes the contents of the
     * component.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the component. Describes the contents of the
     * component.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the component. Describes the contents of the
     * component.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the component. Describes the contents of the
     * component.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the component. Describes the contents of the
     * component.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the component. Describes the contents of the
     * component.</p>
     */
    inline ImportComponentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component. Describes the contents of the
     * component.</p>
     */
    inline ImportComponentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component. Describes the contents of the
     * component.</p>
     */
    inline ImportComponentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The change description of the component. Describes what change has been made
     * in this version, or what makes this version different from other versions of
     * this component.</p>
     */
    inline const Aws::String& GetChangeDescription() const{ return m_changeDescription; }

    /**
     * <p>The change description of the component. Describes what change has been made
     * in this version, or what makes this version different from other versions of
     * this component.</p>
     */
    inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }

    /**
     * <p>The change description of the component. Describes what change has been made
     * in this version, or what makes this version different from other versions of
     * this component.</p>
     */
    inline void SetChangeDescription(const Aws::String& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = value; }

    /**
     * <p>The change description of the component. Describes what change has been made
     * in this version, or what makes this version different from other versions of
     * this component.</p>
     */
    inline void SetChangeDescription(Aws::String&& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = std::move(value); }

    /**
     * <p>The change description of the component. Describes what change has been made
     * in this version, or what makes this version different from other versions of
     * this component.</p>
     */
    inline void SetChangeDescription(const char* value) { m_changeDescriptionHasBeenSet = true; m_changeDescription.assign(value); }

    /**
     * <p>The change description of the component. Describes what change has been made
     * in this version, or what makes this version different from other versions of
     * this component.</p>
     */
    inline ImportComponentRequest& WithChangeDescription(const Aws::String& value) { SetChangeDescription(value); return *this;}

    /**
     * <p>The change description of the component. Describes what change has been made
     * in this version, or what makes this version different from other versions of
     * this component.</p>
     */
    inline ImportComponentRequest& WithChangeDescription(Aws::String&& value) { SetChangeDescription(std::move(value)); return *this;}

    /**
     * <p>The change description of the component. Describes what change has been made
     * in this version, or what makes this version different from other versions of
     * this component.</p>
     */
    inline ImportComponentRequest& WithChangeDescription(const char* value) { SetChangeDescription(value); return *this;}


    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image, or only to test it.</p>
     */
    inline const ComponentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image, or only to test it.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image, or only to test it.</p>
     */
    inline void SetType(const ComponentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image, or only to test it.</p>
     */
    inline void SetType(ComponentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image, or only to test it.</p>
     */
    inline ImportComponentRequest& WithType(const ComponentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image, or only to test it.</p>
     */
    inline ImportComponentRequest& WithType(ComponentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The format of the resource that you want to import as a component.</p>
     */
    inline const ComponentFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the resource that you want to import as a component.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the resource that you want to import as a component.</p>
     */
    inline void SetFormat(const ComponentFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the resource that you want to import as a component.</p>
     */
    inline void SetFormat(ComponentFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the resource that you want to import as a component.</p>
     */
    inline ImportComponentRequest& WithFormat(const ComponentFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the resource that you want to import as a component.</p>
     */
    inline ImportComponentRequest& WithFormat(ComponentFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The platform of the component.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the component.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the component.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the component.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the component.</p>
     */
    inline ImportComponentRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the component.</p>
     */
    inline ImportComponentRequest& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The data of the component. Used to specify the data inline. Either
     * <code>data</code> or <code>uri</code> can be used to specify the data within the
     * component.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The data of the component. Used to specify the data inline. Either
     * <code>data</code> or <code>uri</code> can be used to specify the data within the
     * component.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The data of the component. Used to specify the data inline. Either
     * <code>data</code> or <code>uri</code> can be used to specify the data within the
     * component.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data of the component. Used to specify the data inline. Either
     * <code>data</code> or <code>uri</code> can be used to specify the data within the
     * component.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The data of the component. Used to specify the data inline. Either
     * <code>data</code> or <code>uri</code> can be used to specify the data within the
     * component.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The data of the component. Used to specify the data inline. Either
     * <code>data</code> or <code>uri</code> can be used to specify the data within the
     * component.</p>
     */
    inline ImportComponentRequest& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The data of the component. Used to specify the data inline. Either
     * <code>data</code> or <code>uri</code> can be used to specify the data within the
     * component.</p>
     */
    inline ImportComponentRequest& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The data of the component. Used to specify the data inline. Either
     * <code>data</code> or <code>uri</code> can be used to specify the data within the
     * component.</p>
     */
    inline ImportComponentRequest& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>The uri of the component. Must be an Amazon S3 URL and the requester must
     * have permission to access the Amazon S3 bucket. If you use Amazon S3, you can
     * specify component content up to your service quota. Either <code>data</code> or
     * <code>uri</code> can be used to specify the data within the component.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The uri of the component. Must be an Amazon S3 URL and the requester must
     * have permission to access the Amazon S3 bucket. If you use Amazon S3, you can
     * specify component content up to your service quota. Either <code>data</code> or
     * <code>uri</code> can be used to specify the data within the component.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The uri of the component. Must be an Amazon S3 URL and the requester must
     * have permission to access the Amazon S3 bucket. If you use Amazon S3, you can
     * specify component content up to your service quota. Either <code>data</code> or
     * <code>uri</code> can be used to specify the data within the component.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The uri of the component. Must be an Amazon S3 URL and the requester must
     * have permission to access the Amazon S3 bucket. If you use Amazon S3, you can
     * specify component content up to your service quota. Either <code>data</code> or
     * <code>uri</code> can be used to specify the data within the component.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The uri of the component. Must be an Amazon S3 URL and the requester must
     * have permission to access the Amazon S3 bucket. If you use Amazon S3, you can
     * specify component content up to your service quota. Either <code>data</code> or
     * <code>uri</code> can be used to specify the data within the component.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The uri of the component. Must be an Amazon S3 URL and the requester must
     * have permission to access the Amazon S3 bucket. If you use Amazon S3, you can
     * specify component content up to your service quota. Either <code>data</code> or
     * <code>uri</code> can be used to specify the data within the component.</p>
     */
    inline ImportComponentRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The uri of the component. Must be an Amazon S3 URL and the requester must
     * have permission to access the Amazon S3 bucket. If you use Amazon S3, you can
     * specify component content up to your service quota. Either <code>data</code> or
     * <code>uri</code> can be used to specify the data within the component.</p>
     */
    inline ImportComponentRequest& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The uri of the component. Must be an Amazon S3 URL and the requester must
     * have permission to access the Amazon S3 bucket. If you use Amazon S3, you can
     * specify component content up to your service quota. Either <code>data</code> or
     * <code>uri</code> can be used to specify the data within the component.</p>
     */
    inline ImportComponentRequest& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline ImportComponentRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline ImportComponentRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key that should be used to encrypt this component.</p>
     */
    inline ImportComponentRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The tags of the component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the component.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the component.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the component.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the component.</p>
     */
    inline ImportComponentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The idempotency token of the component.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token of the component.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token of the component.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token of the component.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token of the component.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token of the component.</p>
     */
    inline ImportComponentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token of the component.</p>
     */
    inline ImportComponentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token of the component.</p>
     */
    inline ImportComponentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_changeDescription;
    bool m_changeDescriptionHasBeenSet = false;

    ComponentType m_type;
    bool m_typeHasBeenSet = false;

    ComponentFormat m_format;
    bool m_formatHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

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
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
