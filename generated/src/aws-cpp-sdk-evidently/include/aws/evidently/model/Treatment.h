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
   * <p>A structure that defines one treatment in an experiment. A treatment is a
   * variation of the feature that you are including in the experiment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/Treatment">AWS
   * API Reference</a></p>
   */
  class Treatment
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API Treatment() = default;
    AWS_CLOUDWATCHEVIDENTLY_API Treatment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Treatment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the treatment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Treatment& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature variation used for this treatment. This is a key-value pair. The
     * key is the feature name, and the value is the variation name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFeatureVariations() const { return m_featureVariations; }
    inline bool FeatureVariationsHasBeenSet() const { return m_featureVariationsHasBeenSet; }
    template<typename FeatureVariationsT = Aws::Map<Aws::String, Aws::String>>
    void SetFeatureVariations(FeatureVariationsT&& value) { m_featureVariationsHasBeenSet = true; m_featureVariations = std::forward<FeatureVariationsT>(value); }
    template<typename FeatureVariationsT = Aws::Map<Aws::String, Aws::String>>
    Treatment& WithFeatureVariations(FeatureVariationsT&& value) { SetFeatureVariations(std::forward<FeatureVariationsT>(value)); return *this;}
    template<typename FeatureVariationsKeyT = Aws::String, typename FeatureVariationsValueT = Aws::String>
    Treatment& AddFeatureVariations(FeatureVariationsKeyT&& key, FeatureVariationsValueT&& value) {
      m_featureVariationsHasBeenSet = true; m_featureVariations.emplace(std::forward<FeatureVariationsKeyT>(key), std::forward<FeatureVariationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of this treatment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Treatment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
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
