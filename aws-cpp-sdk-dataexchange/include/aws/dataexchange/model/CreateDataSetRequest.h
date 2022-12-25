/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/dataexchange/model/AssetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class CreateDataSetRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API CreateDataSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSet"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline const AssetType& GetAssetType() const{ return m_assetType; }

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline void SetAssetType(const AssetType& value) { m_assetTypeHasBeenSet = true; m_assetType = value; }

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline void SetAssetType(AssetType&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::move(value); }

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline CreateDataSetRequest& WithAssetType(const AssetType& value) { SetAssetType(value); return *this;}

    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline CreateDataSetRequest& WithAssetType(AssetType&& value) { SetAssetType(std::move(value)); return *this;}


    /**
     * <p>A description for the data set. This value can be up to 16,348 characters
     * long.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the data set. This value can be up to 16,348 characters
     * long.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the data set. This value can be up to 16,348 characters
     * long.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the data set. This value can be up to 16,348 characters
     * long.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the data set. This value can be up to 16,348 characters
     * long.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the data set. This value can be up to 16,348 characters
     * long.</p>
     */
    inline CreateDataSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the data set. This value can be up to 16,348 characters
     * long.</p>
     */
    inline CreateDataSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the data set. This value can be up to 16,348 characters
     * long.</p>
     */
    inline CreateDataSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data set.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline CreateDataSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline CreateDataSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline CreateDataSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A data set tag is an optional label that you can assign to a data set when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateDataSetRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AssetType m_assetType;
    bool m_assetTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
