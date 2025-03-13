/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/PathFormat.h>
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
    AWS_DEADLINE_API PathMappingRule() = default;
    AWS_DEADLINE_API PathMappingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API PathMappingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source path format.</p>
     */
    inline PathFormat GetSourcePathFormat() const { return m_sourcePathFormat; }
    inline bool SourcePathFormatHasBeenSet() const { return m_sourcePathFormatHasBeenSet; }
    inline void SetSourcePathFormat(PathFormat value) { m_sourcePathFormatHasBeenSet = true; m_sourcePathFormat = value; }
    inline PathMappingRule& WithSourcePathFormat(PathFormat value) { SetSourcePathFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source path.</p>
     */
    inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::String>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::String>
    PathMappingRule& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination path.</p>
     */
    inline const Aws::String& GetDestinationPath() const { return m_destinationPath; }
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }
    template<typename DestinationPathT = Aws::String>
    void SetDestinationPath(DestinationPathT&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::forward<DestinationPathT>(value); }
    template<typename DestinationPathT = Aws::String>
    PathMappingRule& WithDestinationPath(DestinationPathT&& value) { SetDestinationPath(std::forward<DestinationPathT>(value)); return *this;}
    ///@}
  private:

    PathFormat m_sourcePathFormat{PathFormat::NOT_SET};
    bool m_sourcePathFormatHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
