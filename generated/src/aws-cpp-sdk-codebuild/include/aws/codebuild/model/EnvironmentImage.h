/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about a Docker image that is managed by CodeBuild.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/EnvironmentImage">AWS
   * API Reference</a></p>
   */
  class EnvironmentImage
  {
  public:
    AWS_CODEBUILD_API EnvironmentImage();
    AWS_CODEBUILD_API EnvironmentImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API EnvironmentImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Docker image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EnvironmentImage& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EnvironmentImage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EnvironmentImage& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Docker image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EnvironmentImage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EnvironmentImage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EnvironmentImage& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of environment image versions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }
    inline EnvironmentImage& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}
    inline EnvironmentImage& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}
    inline EnvironmentImage& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }
    inline EnvironmentImage& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }
    inline EnvironmentImage& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
