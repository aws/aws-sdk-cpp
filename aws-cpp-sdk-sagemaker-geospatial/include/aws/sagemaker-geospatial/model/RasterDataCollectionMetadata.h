/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker-geospatial/model/DataCollectionType.h>
#include <aws/sagemaker-geospatial/model/Filter.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>Response object containing details for a specific
   * RasterDataCollection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/RasterDataCollectionMetadata">AWS
   * API Reference</a></p>
   */
  class RasterDataCollectionMetadata
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionMetadata();
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A description of the raster data collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline const Aws::String& GetDescriptionPageUrl() const{ return m_descriptionPageUrl; }

    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline bool DescriptionPageUrlHasBeenSet() const { return m_descriptionPageUrlHasBeenSet; }

    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline void SetDescriptionPageUrl(const Aws::String& value) { m_descriptionPageUrlHasBeenSet = true; m_descriptionPageUrl = value; }

    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline void SetDescriptionPageUrl(Aws::String&& value) { m_descriptionPageUrlHasBeenSet = true; m_descriptionPageUrl = std::move(value); }

    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline void SetDescriptionPageUrl(const char* value) { m_descriptionPageUrlHasBeenSet = true; m_descriptionPageUrl.assign(value); }

    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithDescriptionPageUrl(const Aws::String& value) { SetDescriptionPageUrl(value); return *this;}

    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithDescriptionPageUrl(Aws::String&& value) { SetDescriptionPageUrl(std::move(value)); return *this;}

    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithDescriptionPageUrl(const char* value) { SetDescriptionPageUrl(value); return *this;}


    /**
     * <p>The name of the raster data collection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Filter>& GetSupportedFilters() const{ return m_supportedFilters; }

    /**
     * <p/>
     */
    inline bool SupportedFiltersHasBeenSet() const { return m_supportedFiltersHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSupportedFilters(const Aws::Vector<Filter>& value) { m_supportedFiltersHasBeenSet = true; m_supportedFilters = value; }

    /**
     * <p/>
     */
    inline void SetSupportedFilters(Aws::Vector<Filter>&& value) { m_supportedFiltersHasBeenSet = true; m_supportedFilters = std::move(value); }

    /**
     * <p/>
     */
    inline RasterDataCollectionMetadata& WithSupportedFilters(const Aws::Vector<Filter>& value) { SetSupportedFilters(value); return *this;}

    /**
     * <p/>
     */
    inline RasterDataCollectionMetadata& WithSupportedFilters(Aws::Vector<Filter>&& value) { SetSupportedFilters(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RasterDataCollectionMetadata& AddSupportedFilters(const Filter& value) { m_supportedFiltersHasBeenSet = true; m_supportedFilters.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline RasterDataCollectionMetadata& AddSupportedFilters(Filter&& value) { m_supportedFiltersHasBeenSet = true; m_supportedFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline RasterDataCollectionMetadata& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of raster data collection.</p>
     */
    inline const DataCollectionType& GetType() const{ return m_type; }

    /**
     * <p>The type of raster data collection.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of raster data collection.</p>
     */
    inline void SetType(const DataCollectionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of raster data collection.</p>
     */
    inline void SetType(DataCollectionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithType(const DataCollectionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of raster data collection.</p>
     */
    inline RasterDataCollectionMetadata& WithType(DataCollectionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_descriptionPageUrl;
    bool m_descriptionPageUrlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Filter> m_supportedFilters;
    bool m_supportedFiltersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DataCollectionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
