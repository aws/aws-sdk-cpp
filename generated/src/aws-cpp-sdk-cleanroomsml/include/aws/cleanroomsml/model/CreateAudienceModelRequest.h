/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class CreateAudienceModelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API CreateAudienceModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAudienceModel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of the audience model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the audience model.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the audience model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the audience model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the audience model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the audience model.</p>
     */
    inline CreateAudienceModelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the audience model.</p>
     */
    inline CreateAudienceModelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the audience model.</p>
     */
    inline CreateAudienceModelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline CreateAudienceModelRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline CreateAudienceModelRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline CreateAudienceModelRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The name of the audience model resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the audience model resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the audience model resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the audience model resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the audience model resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the audience model resource.</p>
     */
    inline CreateAudienceModelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the audience model resource.</p>
     */
    inline CreateAudienceModelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the audience model resource.</p>
     */
    inline CreateAudienceModelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Forecast considers it to be a user tag and will count
     * against the limit of 50 tags. Tags with only the key prefix of aws do not count
     * against your tags per resource limit.</p> </li> </ul>
     */
    inline CreateAudienceModelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The end date and time of the training window.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataEndTime() const{ return m_trainingDataEndTime; }

    /**
     * <p>The end date and time of the training window.</p>
     */
    inline bool TrainingDataEndTimeHasBeenSet() const { return m_trainingDataEndTimeHasBeenSet; }

    /**
     * <p>The end date and time of the training window.</p>
     */
    inline void SetTrainingDataEndTime(const Aws::Utils::DateTime& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = value; }

    /**
     * <p>The end date and time of the training window.</p>
     */
    inline void SetTrainingDataEndTime(Aws::Utils::DateTime&& value) { m_trainingDataEndTimeHasBeenSet = true; m_trainingDataEndTime = std::move(value); }

    /**
     * <p>The end date and time of the training window.</p>
     */
    inline CreateAudienceModelRequest& WithTrainingDataEndTime(const Aws::Utils::DateTime& value) { SetTrainingDataEndTime(value); return *this;}

    /**
     * <p>The end date and time of the training window.</p>
     */
    inline CreateAudienceModelRequest& WithTrainingDataEndTime(Aws::Utils::DateTime&& value) { SetTrainingDataEndTime(std::move(value)); return *this;}


    /**
     * <p>The start date and time of the training window.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingDataStartTime() const{ return m_trainingDataStartTime; }

    /**
     * <p>The start date and time of the training window.</p>
     */
    inline bool TrainingDataStartTimeHasBeenSet() const { return m_trainingDataStartTimeHasBeenSet; }

    /**
     * <p>The start date and time of the training window.</p>
     */
    inline void SetTrainingDataStartTime(const Aws::Utils::DateTime& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = value; }

    /**
     * <p>The start date and time of the training window.</p>
     */
    inline void SetTrainingDataStartTime(Aws::Utils::DateTime&& value) { m_trainingDataStartTimeHasBeenSet = true; m_trainingDataStartTime = std::move(value); }

    /**
     * <p>The start date and time of the training window.</p>
     */
    inline CreateAudienceModelRequest& WithTrainingDataStartTime(const Aws::Utils::DateTime& value) { SetTrainingDataStartTime(value); return *this;}

    /**
     * <p>The start date and time of the training window.</p>
     */
    inline CreateAudienceModelRequest& WithTrainingDataStartTime(Aws::Utils::DateTime&& value) { SetTrainingDataStartTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const{ return m_trainingDatasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline bool TrainingDatasetArnHasBeenSet() const { return m_trainingDatasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline void SetTrainingDatasetArn(const Aws::String& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline void SetTrainingDatasetArn(Aws::String&& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline void SetTrainingDatasetArn(const char* value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline CreateAudienceModelRequest& WithTrainingDatasetArn(const Aws::String& value) { SetTrainingDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline CreateAudienceModelRequest& WithTrainingDatasetArn(Aws::String&& value) { SetTrainingDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset for this audience
     * model.</p>
     */
    inline CreateAudienceModelRequest& WithTrainingDatasetArn(const char* value) { SetTrainingDatasetArn(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataEndTime;
    bool m_trainingDataEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingDataStartTime;
    bool m_trainingDataStartTimeHasBeenSet = false;

    Aws::String m_trainingDatasetArn;
    bool m_trainingDatasetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
