/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Compares the database Change Data Capture (CDC) step input.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CompareDatabaseCDCStepInput">AWS
   * API Reference</a></p>
   */
  class CompareDatabaseCDCStepInput
  {
  public:
    AWS_APPTEST_API CompareDatabaseCDCStepInput() = default;
    AWS_APPTEST_API CompareDatabaseCDCStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareDatabaseCDCStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source location of the compare database CDC step input.</p>
     */
    inline const Aws::String& GetSourceLocation() const { return m_sourceLocation; }
    inline bool SourceLocationHasBeenSet() const { return m_sourceLocationHasBeenSet; }
    template<typename SourceLocationT = Aws::String>
    void SetSourceLocation(SourceLocationT&& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = std::forward<SourceLocationT>(value); }
    template<typename SourceLocationT = Aws::String>
    CompareDatabaseCDCStepInput& WithSourceLocation(SourceLocationT&& value) { SetSourceLocation(std::forward<SourceLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target location of the compare database CDC step input.</p>
     */
    inline const Aws::String& GetTargetLocation() const { return m_targetLocation; }
    inline bool TargetLocationHasBeenSet() const { return m_targetLocationHasBeenSet; }
    template<typename TargetLocationT = Aws::String>
    void SetTargetLocation(TargetLocationT&& value) { m_targetLocationHasBeenSet = true; m_targetLocation = std::forward<TargetLocationT>(value); }
    template<typename TargetLocationT = Aws::String>
    CompareDatabaseCDCStepInput& WithTargetLocation(TargetLocationT&& value) { SetTargetLocation(std::forward<TargetLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output location of the compare database CDC step input.</p>
     */
    inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = Aws::String>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = Aws::String>
    CompareDatabaseCDCStepInput& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source metadata of the compare database CDC step input.</p>
     */
    inline const SourceDatabaseMetadata& GetSourceMetadata() const { return m_sourceMetadata; }
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }
    template<typename SourceMetadataT = SourceDatabaseMetadata>
    void SetSourceMetadata(SourceMetadataT&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::forward<SourceMetadataT>(value); }
    template<typename SourceMetadataT = SourceDatabaseMetadata>
    CompareDatabaseCDCStepInput& WithSourceMetadata(SourceMetadataT&& value) { SetSourceMetadata(std::forward<SourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target metadata location of the compare database CDC step input.</p>
     */
    inline const TargetDatabaseMetadata& GetTargetMetadata() const { return m_targetMetadata; }
    inline bool TargetMetadataHasBeenSet() const { return m_targetMetadataHasBeenSet; }
    template<typename TargetMetadataT = TargetDatabaseMetadata>
    void SetTargetMetadata(TargetMetadataT&& value) { m_targetMetadataHasBeenSet = true; m_targetMetadata = std::forward<TargetMetadataT>(value); }
    template<typename TargetMetadataT = TargetDatabaseMetadata>
    CompareDatabaseCDCStepInput& WithTargetMetadata(TargetMetadataT&& value) { SetTargetMetadata(std::forward<TargetMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceLocation;
    bool m_sourceLocationHasBeenSet = false;

    Aws::String m_targetLocation;
    bool m_targetLocationHasBeenSet = false;

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    SourceDatabaseMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;

    TargetDatabaseMetadata m_targetMetadata;
    bool m_targetMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
