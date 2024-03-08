/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Specifies an Image Builder recipe that the lifecycle policy uses for resource
   * selection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyResourceSelectionRecipe">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyResourceSelectionRecipe
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelectionRecipe();
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelectionRecipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelectionRecipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an Image Builder recipe that the lifecycle policy uses for
     * resource selection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an Image Builder recipe that the lifecycle policy uses for
     * resource selection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an Image Builder recipe that the lifecycle policy uses for
     * resource selection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an Image Builder recipe that the lifecycle policy uses for
     * resource selection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an Image Builder recipe that the lifecycle policy uses for
     * resource selection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an Image Builder recipe that the lifecycle policy uses for
     * resource selection.</p>
     */
    inline LifecyclePolicyResourceSelectionRecipe& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an Image Builder recipe that the lifecycle policy uses for
     * resource selection.</p>
     */
    inline LifecyclePolicyResourceSelectionRecipe& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an Image Builder recipe that the lifecycle policy uses for
     * resource selection.</p>
     */
    inline LifecyclePolicyResourceSelectionRecipe& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the Image Builder recipe specified by the <code>name</code>
     * field.</p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The version of the Image Builder recipe specified by the <code>name</code>
     * field.</p>
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The version of the Image Builder recipe specified by the <code>name</code>
     * field.</p>
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The version of the Image Builder recipe specified by the <code>name</code>
     * field.</p>
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The version of the Image Builder recipe specified by the <code>name</code>
     * field.</p>
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The version of the Image Builder recipe specified by the <code>name</code>
     * field.</p>
     */
    inline LifecyclePolicyResourceSelectionRecipe& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The version of the Image Builder recipe specified by the <code>name</code>
     * field.</p>
     */
    inline LifecyclePolicyResourceSelectionRecipe& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Image Builder recipe specified by the <code>name</code>
     * field.</p>
     */
    inline LifecyclePolicyResourceSelectionRecipe& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
