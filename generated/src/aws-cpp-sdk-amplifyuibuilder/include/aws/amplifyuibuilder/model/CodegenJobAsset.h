/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes an asset for a code generation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenJobAsset">AWS
   * API Reference</a></p>
   */
  class CodegenJobAsset
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenJobAsset() = default;
    AWS_AMPLIFYUIBUILDER_API CodegenJobAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenJobAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL to use to access the asset.</p>
     */
    inline const Aws::String& GetDownloadUrl() const { return m_downloadUrl; }
    inline bool DownloadUrlHasBeenSet() const { return m_downloadUrlHasBeenSet; }
    template<typename DownloadUrlT = Aws::String>
    void SetDownloadUrl(DownloadUrlT&& value) { m_downloadUrlHasBeenSet = true; m_downloadUrl = std::forward<DownloadUrlT>(value); }
    template<typename DownloadUrlT = Aws::String>
    CodegenJobAsset& WithDownloadUrl(DownloadUrlT&& value) { SetDownloadUrl(std::forward<DownloadUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_downloadUrl;
    bool m_downloadUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
