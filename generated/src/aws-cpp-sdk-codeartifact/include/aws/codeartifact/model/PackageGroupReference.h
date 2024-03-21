/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p>Information about the identifiers of a package group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/PackageGroupReference">AWS
   * API Reference</a></p>
   */
  class PackageGroupReference
  {
  public:
    AWS_CODEARTIFACT_API PackageGroupReference();
    AWS_CODEARTIFACT_API PackageGroupReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API PackageGroupReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ARN of the package group. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the package group. </p>
     */
    inline PackageGroupReference& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the package group. </p>
     */
    inline PackageGroupReference& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the package group. </p>
     */
    inline PackageGroupReference& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group, and is also the identifier of the package
     * group. </p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group, and is also the identifier of the package
     * group. </p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group, and is also the identifier of the package
     * group. </p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group, and is also the identifier of the package
     * group. </p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group, and is also the identifier of the package
     * group. </p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group, and is also the identifier of the package
     * group. </p>
     */
    inline PackageGroupReference& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group, and is also the identifier of the package
     * group. </p>
     */
    inline PackageGroupReference& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p> The pattern of the package group. The pattern determines which packages are
     * associated with the package group, and is also the identifier of the package
     * group. </p>
     */
    inline PackageGroupReference& WithPattern(const char* value) { SetPattern(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
