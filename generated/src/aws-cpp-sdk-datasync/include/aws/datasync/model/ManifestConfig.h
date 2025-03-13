/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ManifestAction.h>
#include <aws/datasync/model/ManifestFormat.h>
#include <aws/datasync/model/SourceManifestConfig.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Configures a manifest, which is a list of files or objects that you want
   * DataSync to transfer. For more information and configuration examples, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">Specifying
   * what DataSync transfers by using a manifest</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ManifestConfig">AWS
   * API Reference</a></p>
   */
  class ManifestConfig
  {
  public:
    AWS_DATASYNC_API ManifestConfig() = default;
    AWS_DATASYNC_API ManifestConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ManifestConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies what DataSync uses the manifest for.</p>
     */
    inline ManifestAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ManifestAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline ManifestConfig& WithAction(ManifestAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the file format of your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-create">Creating
     * a manifest</a>.</p>
     */
    inline ManifestFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(ManifestFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline ManifestConfig& WithFormat(ManifestFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the manifest that you want DataSync to use and where it's
     * hosted.</p>  <p>You must specify this parameter if you're configuring a
     * new manifest on or after February 7, 2024.</p> <p>If you don't, you'll get a 400
     * status code and <code>ValidationException</code> error stating that you're
     * missing the IAM role for DataSync to access the S3 bucket where you're hosting
     * your manifest. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html#transferring-with-manifest-access">Providing
     * DataSync access to your manifest</a>.</p> 
     */
    inline const SourceManifestConfig& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = SourceManifestConfig>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = SourceManifestConfig>
    ManifestConfig& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    ManifestAction m_action{ManifestAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    ManifestFormat m_format{ManifestFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    SourceManifestConfig m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
