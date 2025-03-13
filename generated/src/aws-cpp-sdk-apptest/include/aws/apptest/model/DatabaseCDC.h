/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/SourceDatabaseMetadata.h>
#include <aws/apptest/model/TargetDatabaseMetadata.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Defines the Change Data Capture (CDC) of the database.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DatabaseCDC">AWS
   * API Reference</a></p>
   */
  class DatabaseCDC
  {
  public:
    AWS_APPTEST_API DatabaseCDC() = default;
    AWS_APPTEST_API DatabaseCDC(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API DatabaseCDC& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source metadata of the database CDC.</p>
     */
    inline const SourceDatabaseMetadata& GetSourceMetadata() const { return m_sourceMetadata; }
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }
    template<typename SourceMetadataT = SourceDatabaseMetadata>
    void SetSourceMetadata(SourceMetadataT&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::forward<SourceMetadataT>(value); }
    template<typename SourceMetadataT = SourceDatabaseMetadata>
    DatabaseCDC& WithSourceMetadata(SourceMetadataT&& value) { SetSourceMetadata(std::forward<SourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target metadata of the database CDC.</p>
     */
    inline const TargetDatabaseMetadata& GetTargetMetadata() const { return m_targetMetadata; }
    inline bool TargetMetadataHasBeenSet() const { return m_targetMetadataHasBeenSet; }
    template<typename TargetMetadataT = TargetDatabaseMetadata>
    void SetTargetMetadata(TargetMetadataT&& value) { m_targetMetadataHasBeenSet = true; m_targetMetadata = std::forward<TargetMetadataT>(value); }
    template<typename TargetMetadataT = TargetDatabaseMetadata>
    DatabaseCDC& WithTargetMetadata(TargetMetadataT&& value) { SetTargetMetadata(std::forward<TargetMetadataT>(value)); return *this;}
    ///@}
  private:

    SourceDatabaseMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;

    TargetDatabaseMetadata m_targetMetadata;
    bool m_targetMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
