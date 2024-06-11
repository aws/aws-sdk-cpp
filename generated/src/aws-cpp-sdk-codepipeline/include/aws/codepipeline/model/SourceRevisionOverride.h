﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/SourceRevisionType.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>A list that allows you to specify, or override, the source revision for a
   * pipeline execution that's being started. A source revision is the version with
   * all the changes to your application code, or source artifact, for the pipeline
   * execution.</p>  <p>For the <code>S3_OBJECT_VERSION_ID</code> and
   * <code>S3_OBJECT_KEY</code> types of source revisions, either of the types can be
   * used independently, or they can be used together to override the source with a
   * specific ObjectKey and VersionID.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/SourceRevisionOverride">AWS
   * API Reference</a></p>
   */
  class SourceRevisionOverride
  {
  public:
    AWS_CODEPIPELINE_API SourceRevisionOverride();
    AWS_CODEPIPELINE_API SourceRevisionOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API SourceRevisionOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action where the override will be applied.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline SourceRevisionOverride& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline SourceRevisionOverride& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline SourceRevisionOverride& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of source revision, based on the source provider. For example, the
     * revision type for the CodeCommit action provider is the commit ID.</p>
     */
    inline const SourceRevisionType& GetRevisionType() const{ return m_revisionType; }
    inline bool RevisionTypeHasBeenSet() const { return m_revisionTypeHasBeenSet; }
    inline void SetRevisionType(const SourceRevisionType& value) { m_revisionTypeHasBeenSet = true; m_revisionType = value; }
    inline void SetRevisionType(SourceRevisionType&& value) { m_revisionTypeHasBeenSet = true; m_revisionType = std::move(value); }
    inline SourceRevisionOverride& WithRevisionType(const SourceRevisionType& value) { SetRevisionType(value); return *this;}
    inline SourceRevisionOverride& WithRevisionType(SourceRevisionType&& value) { SetRevisionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source revision, or version of your source artifact, with the changes
     * that you want to run in the pipeline execution.</p>
     */
    inline const Aws::String& GetRevisionValue() const{ return m_revisionValue; }
    inline bool RevisionValueHasBeenSet() const { return m_revisionValueHasBeenSet; }
    inline void SetRevisionValue(const Aws::String& value) { m_revisionValueHasBeenSet = true; m_revisionValue = value; }
    inline void SetRevisionValue(Aws::String&& value) { m_revisionValueHasBeenSet = true; m_revisionValue = std::move(value); }
    inline void SetRevisionValue(const char* value) { m_revisionValueHasBeenSet = true; m_revisionValue.assign(value); }
    inline SourceRevisionOverride& WithRevisionValue(const Aws::String& value) { SetRevisionValue(value); return *this;}
    inline SourceRevisionOverride& WithRevisionValue(Aws::String&& value) { SetRevisionValue(std::move(value)); return *this;}
    inline SourceRevisionOverride& WithRevisionValue(const char* value) { SetRevisionValue(value); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    SourceRevisionType m_revisionType;
    bool m_revisionTypeHasBeenSet = false;

    Aws::String m_revisionValue;
    bool m_revisionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
