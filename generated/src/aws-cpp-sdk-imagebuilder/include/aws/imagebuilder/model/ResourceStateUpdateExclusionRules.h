/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailExclusionRulesAmis.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Additional rules to specify resources that should be exempt from ad-hoc
   * lifecycle actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ResourceStateUpdateExclusionRules">AWS
   * API Reference</a></p>
   */
  class ResourceStateUpdateExclusionRules
  {
  public:
    AWS_IMAGEBUILDER_API ResourceStateUpdateExclusionRules();
    AWS_IMAGEBUILDER_API ResourceStateUpdateExclusionRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ResourceStateUpdateExclusionRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const LifecyclePolicyDetailExclusionRulesAmis& GetAmis() const{ return m_amis; }

    
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }

    
    inline void SetAmis(const LifecyclePolicyDetailExclusionRulesAmis& value) { m_amisHasBeenSet = true; m_amis = value; }

    
    inline void SetAmis(LifecyclePolicyDetailExclusionRulesAmis&& value) { m_amisHasBeenSet = true; m_amis = std::move(value); }

    
    inline ResourceStateUpdateExclusionRules& WithAmis(const LifecyclePolicyDetailExclusionRulesAmis& value) { SetAmis(value); return *this;}

    
    inline ResourceStateUpdateExclusionRules& WithAmis(LifecyclePolicyDetailExclusionRulesAmis&& value) { SetAmis(std::move(value)); return *this;}

  private:

    LifecyclePolicyDetailExclusionRulesAmis m_amis;
    bool m_amisHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
