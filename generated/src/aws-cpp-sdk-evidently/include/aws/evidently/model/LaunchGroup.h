/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that defines one launch group in a launch. A launch group is a
   * variation of the feature that you are including in the launch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/LaunchGroup">AWS
   * API Reference</a></p>
   */
  class LaunchGroup
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API LaunchGroup();
    AWS_CLOUDWATCHEVIDENTLY_API LaunchGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API LaunchGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the launch group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the launch group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the launch group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the launch group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the launch group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the launch group.</p>
     */
    inline LaunchGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the launch group.</p>
     */
    inline LaunchGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the launch group.</p>
     */
    inline LaunchGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFeatureVariations() const{ return m_featureVariations; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline bool FeatureVariationsHasBeenSet() const { return m_featureVariationsHasBeenSet; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline void SetFeatureVariations(const Aws::Map<Aws::String, Aws::String>& value) { m_featureVariationsHasBeenSet = true; m_featureVariations = value; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline void SetFeatureVariations(Aws::Map<Aws::String, Aws::String>&& value) { m_featureVariationsHasBeenSet = true; m_featureVariations = std::move(value); }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& WithFeatureVariations(const Aws::Map<Aws::String, Aws::String>& value) { SetFeatureVariations(value); return *this;}

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& WithFeatureVariations(Aws::Map<Aws::String, Aws::String>&& value) { SetFeatureVariations(std::move(value)); return *this;}

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& AddFeatureVariations(const Aws::String& key, const Aws::String& value) { m_featureVariationsHasBeenSet = true; m_featureVariations.emplace(key, value); return *this; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& AddFeatureVariations(Aws::String&& key, const Aws::String& value) { m_featureVariationsHasBeenSet = true; m_featureVariations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& AddFeatureVariations(const Aws::String& key, Aws::String&& value) { m_featureVariationsHasBeenSet = true; m_featureVariations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& AddFeatureVariations(Aws::String&& key, Aws::String&& value) { m_featureVariationsHasBeenSet = true; m_featureVariations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& AddFeatureVariations(const char* key, Aws::String&& value) { m_featureVariationsHasBeenSet = true; m_featureVariations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& AddFeatureVariations(Aws::String&& key, const char* value) { m_featureVariationsHasBeenSet = true; m_featureVariations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The feature variation for this launch group. This is a key-value pair.</p>
     */
    inline LaunchGroup& AddFeatureVariations(const char* key, const char* value) { m_featureVariationsHasBeenSet = true; m_featureVariations.emplace(key, value); return *this; }


    /**
     * <p>The name of the launch group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the launch group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the launch group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the launch group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the launch group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the launch group.</p>
     */
    inline LaunchGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the launch group.</p>
     */
    inline LaunchGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch group.</p>
     */
    inline LaunchGroup& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_featureVariations;
    bool m_featureVariationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
