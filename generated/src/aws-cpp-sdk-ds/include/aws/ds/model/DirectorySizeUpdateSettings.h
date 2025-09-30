/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/DirectorySize.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the directory size configuration for update
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DirectorySizeUpdateSettings">AWS
   * API Reference</a></p>
   */
  class DirectorySizeUpdateSettings
  {
  public:
    AWS_DIRECTORYSERVICE_API DirectorySizeUpdateSettings() = default;
    AWS_DIRECTORYSERVICE_API DirectorySizeUpdateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API DirectorySizeUpdateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target directory size for the update operation.</p>
     */
    inline DirectorySize GetDirectorySize() const { return m_directorySize; }
    inline bool DirectorySizeHasBeenSet() const { return m_directorySizeHasBeenSet; }
    inline void SetDirectorySize(DirectorySize value) { m_directorySizeHasBeenSet = true; m_directorySize = value; }
    inline DirectorySizeUpdateSettings& WithDirectorySize(DirectorySize value) { SetDirectorySize(value); return *this;}
    ///@}
  private:

    DirectorySize m_directorySize{DirectorySize::NOT_SET};
    bool m_directorySizeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
