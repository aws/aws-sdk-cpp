/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ShadowModelVariantConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p> Shows which variant is a production variant and which variant is a shadow
   * variant. For shadow variants, also shows the sampling percentages.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ShadowModeConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ShadowModeConfig
  {
  public:
    ShadowModeConfig();
    ShadowModeConfig(Aws::Utils::Json::JsonView jsonValue);
    ShadowModeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the production variant. </p>
     */
    inline const Aws::String& GetSourceModelVariantName() const{ return m_sourceModelVariantName; }

    /**
     * <p> The name of the production variant. </p>
     */
    inline bool SourceModelVariantNameHasBeenSet() const { return m_sourceModelVariantNameHasBeenSet; }

    /**
     * <p> The name of the production variant. </p>
     */
    inline void SetSourceModelVariantName(const Aws::String& value) { m_sourceModelVariantNameHasBeenSet = true; m_sourceModelVariantName = value; }

    /**
     * <p> The name of the production variant. </p>
     */
    inline void SetSourceModelVariantName(Aws::String&& value) { m_sourceModelVariantNameHasBeenSet = true; m_sourceModelVariantName = std::move(value); }

    /**
     * <p> The name of the production variant. </p>
     */
    inline void SetSourceModelVariantName(const char* value) { m_sourceModelVariantNameHasBeenSet = true; m_sourceModelVariantName.assign(value); }

    /**
     * <p> The name of the production variant. </p>
     */
    inline ShadowModeConfig& WithSourceModelVariantName(const Aws::String& value) { SetSourceModelVariantName(value); return *this;}

    /**
     * <p> The name of the production variant. </p>
     */
    inline ShadowModeConfig& WithSourceModelVariantName(Aws::String&& value) { SetSourceModelVariantName(std::move(value)); return *this;}

    /**
     * <p> The name of the production variant. </p>
     */
    inline ShadowModeConfig& WithSourceModelVariantName(const char* value) { SetSourceModelVariantName(value); return *this;}


    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline const Aws::Vector<ShadowModelVariantConfig>& GetShadowModelVariants() const{ return m_shadowModelVariants; }

    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline bool ShadowModelVariantsHasBeenSet() const { return m_shadowModelVariantsHasBeenSet; }

    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline void SetShadowModelVariants(const Aws::Vector<ShadowModelVariantConfig>& value) { m_shadowModelVariantsHasBeenSet = true; m_shadowModelVariants = value; }

    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline void SetShadowModelVariants(Aws::Vector<ShadowModelVariantConfig>&& value) { m_shadowModelVariantsHasBeenSet = true; m_shadowModelVariants = std::move(value); }

    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline ShadowModeConfig& WithShadowModelVariants(const Aws::Vector<ShadowModelVariantConfig>& value) { SetShadowModelVariants(value); return *this;}

    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline ShadowModeConfig& WithShadowModelVariants(Aws::Vector<ShadowModelVariantConfig>&& value) { SetShadowModelVariants(std::move(value)); return *this;}

    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline ShadowModeConfig& AddShadowModelVariants(const ShadowModelVariantConfig& value) { m_shadowModelVariantsHasBeenSet = true; m_shadowModelVariants.push_back(value); return *this; }

    /**
     * <p>List of shadow variant configurations.</p>
     */
    inline ShadowModeConfig& AddShadowModelVariants(ShadowModelVariantConfig&& value) { m_shadowModelVariantsHasBeenSet = true; m_shadowModelVariants.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceModelVariantName;
    bool m_sourceModelVariantNameHasBeenSet = false;

    Aws::Vector<ShadowModelVariantConfig> m_shadowModelVariants;
    bool m_shadowModelVariantsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
