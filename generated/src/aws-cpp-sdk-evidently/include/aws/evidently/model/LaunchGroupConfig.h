﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/LaunchGroupConfig">AWS
   * API Reference</a></p>
   */
  class LaunchGroupConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API LaunchGroupConfig();
    AWS_CLOUDWATCHEVIDENTLY_API LaunchGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API LaunchGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the launch group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline LaunchGroupConfig& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LaunchGroupConfig& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LaunchGroupConfig& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature that this launch is using.</p>
     */
    inline const Aws::String& GetFeature() const{ return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(const Aws::String& value) { m_featureHasBeenSet = true; m_feature = value; }
    inline void SetFeature(Aws::String&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }
    inline void SetFeature(const char* value) { m_featureHasBeenSet = true; m_feature.assign(value); }
    inline LaunchGroupConfig& WithFeature(const Aws::String& value) { SetFeature(value); return *this;}
    inline LaunchGroupConfig& WithFeature(Aws::String&& value) { SetFeature(std::move(value)); return *this;}
    inline LaunchGroupConfig& WithFeature(const char* value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for this launch group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LaunchGroupConfig& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LaunchGroupConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LaunchGroupConfig& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature variation to use for this launch group.</p>
     */
    inline const Aws::String& GetVariation() const{ return m_variation; }
    inline bool VariationHasBeenSet() const { return m_variationHasBeenSet; }
    inline void SetVariation(const Aws::String& value) { m_variationHasBeenSet = true; m_variation = value; }
    inline void SetVariation(Aws::String&& value) { m_variationHasBeenSet = true; m_variation = std::move(value); }
    inline void SetVariation(const char* value) { m_variationHasBeenSet = true; m_variation.assign(value); }
    inline LaunchGroupConfig& WithVariation(const Aws::String& value) { SetVariation(value); return *this;}
    inline LaunchGroupConfig& WithVariation(Aws::String&& value) { SetVariation(std::move(value)); return *this;}
    inline LaunchGroupConfig& WithVariation(const char* value) { SetVariation(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_feature;
    bool m_featureHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_variation;
    bool m_variationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
