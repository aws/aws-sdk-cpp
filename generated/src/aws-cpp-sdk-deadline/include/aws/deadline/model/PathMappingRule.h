/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/PathFormat.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a source and destination path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/PathMappingRule">AWS
   * API Reference</a></p>
   */
  class PathMappingRule
  {
  public:
    AWS_DEADLINE_API PathMappingRule();
    AWS_DEADLINE_API PathMappingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API PathMappingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination path.</p>
     */
    inline const Aws::String& GetDestinationPath() const{ return m_destinationPath; }

    /**
     * <p>The destination path.</p>
     */
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }

    /**
     * <p>The destination path.</p>
     */
    inline void SetDestinationPath(const Aws::String& value) { m_destinationPathHasBeenSet = true; m_destinationPath = value; }

    /**
     * <p>The destination path.</p>
     */
    inline void SetDestinationPath(Aws::String&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::move(value); }

    /**
     * <p>The destination path.</p>
     */
    inline void SetDestinationPath(const char* value) { m_destinationPathHasBeenSet = true; m_destinationPath.assign(value); }

    /**
     * <p>The destination path.</p>
     */
    inline PathMappingRule& WithDestinationPath(const Aws::String& value) { SetDestinationPath(value); return *this;}

    /**
     * <p>The destination path.</p>
     */
    inline PathMappingRule& WithDestinationPath(Aws::String&& value) { SetDestinationPath(std::move(value)); return *this;}

    /**
     * <p>The destination path.</p>
     */
    inline PathMappingRule& WithDestinationPath(const char* value) { SetDestinationPath(value); return *this;}


    /**
     * <p>The source path.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>The source path.</p>
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * <p>The source path.</p>
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>The source path.</p>
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * <p>The source path.</p>
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * <p>The source path.</p>
     */
    inline PathMappingRule& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * <p>The source path.</p>
     */
    inline PathMappingRule& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * <p>The source path.</p>
     */
    inline PathMappingRule& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}


    /**
     * <p>The source path format.</p>
     */
    inline const PathFormat& GetSourcePathFormat() const{ return m_sourcePathFormat; }

    /**
     * <p>The source path format.</p>
     */
    inline bool SourcePathFormatHasBeenSet() const { return m_sourcePathFormatHasBeenSet; }

    /**
     * <p>The source path format.</p>
     */
    inline void SetSourcePathFormat(const PathFormat& value) { m_sourcePathFormatHasBeenSet = true; m_sourcePathFormat = value; }

    /**
     * <p>The source path format.</p>
     */
    inline void SetSourcePathFormat(PathFormat&& value) { m_sourcePathFormatHasBeenSet = true; m_sourcePathFormat = std::move(value); }

    /**
     * <p>The source path format.</p>
     */
    inline PathMappingRule& WithSourcePathFormat(const PathFormat& value) { SetSourcePathFormat(value); return *this;}

    /**
     * <p>The source path format.</p>
     */
    inline PathMappingRule& WithSourcePathFormat(PathFormat&& value) { SetSourcePathFormat(std::move(value)); return *this;}

  private:

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    PathFormat m_sourcePathFormat;
    bool m_sourcePathFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
