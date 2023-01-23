/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/SourceCodeVersionType.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Identifies a version of code that App Runner refers to within a source code
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/SourceCodeVersion">AWS
   * API Reference</a></p>
   */
  class SourceCodeVersion
  {
  public:
    AWS_APPRUNNER_API SourceCodeVersion();
    AWS_APPRUNNER_API SourceCodeVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API SourceCodeVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of version identifier.</p> <p>For a git-based repository, branches
     * represent versions.</p>
     */
    inline const SourceCodeVersionType& GetType() const{ return m_type; }

    /**
     * <p>The type of version identifier.</p> <p>For a git-based repository, branches
     * represent versions.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of version identifier.</p> <p>For a git-based repository, branches
     * represent versions.</p>
     */
    inline void SetType(const SourceCodeVersionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of version identifier.</p> <p>For a git-based repository, branches
     * represent versions.</p>
     */
    inline void SetType(SourceCodeVersionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of version identifier.</p> <p>For a git-based repository, branches
     * represent versions.</p>
     */
    inline SourceCodeVersion& WithType(const SourceCodeVersionType& value) { SetType(value); return *this;}

    /**
     * <p>The type of version identifier.</p> <p>For a git-based repository, branches
     * represent versions.</p>
     */
    inline SourceCodeVersion& WithType(SourceCodeVersionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A source code version.</p> <p>For a git-based repository, a branch name maps
     * to a specific version. App Runner uses the most recent commit to the branch.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A source code version.</p> <p>For a git-based repository, a branch name maps
     * to a specific version. App Runner uses the most recent commit to the branch.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A source code version.</p> <p>For a git-based repository, a branch name maps
     * to a specific version. App Runner uses the most recent commit to the branch.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A source code version.</p> <p>For a git-based repository, a branch name maps
     * to a specific version. App Runner uses the most recent commit to the branch.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A source code version.</p> <p>For a git-based repository, a branch name maps
     * to a specific version. App Runner uses the most recent commit to the branch.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A source code version.</p> <p>For a git-based repository, a branch name maps
     * to a specific version. App Runner uses the most recent commit to the branch.</p>
     */
    inline SourceCodeVersion& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A source code version.</p> <p>For a git-based repository, a branch name maps
     * to a specific version. App Runner uses the most recent commit to the branch.</p>
     */
    inline SourceCodeVersion& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A source code version.</p> <p>For a git-based repository, a branch name maps
     * to a specific version. App Runner uses the most recent commit to the branch.</p>
     */
    inline SourceCodeVersion& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    SourceCodeVersionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
