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
    AWS_APPTEST_API CompareDatabaseCDCStepInput();
    AWS_APPTEST_API CompareDatabaseCDCStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareDatabaseCDCStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source location of the compare database CDC step input.</p>
     */
    inline const Aws::String& GetSourceLocation() const{ return m_sourceLocation; }
    inline bool SourceLocationHasBeenSet() const { return m_sourceLocationHasBeenSet; }
    inline void SetSourceLocation(const Aws::String& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = value; }
    inline void SetSourceLocation(Aws::String&& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = std::move(value); }
    inline void SetSourceLocation(const char* value) { m_sourceLocationHasBeenSet = true; m_sourceLocation.assign(value); }
    inline CompareDatabaseCDCStepInput& WithSourceLocation(const Aws::String& value) { SetSourceLocation(value); return *this;}
    inline CompareDatabaseCDCStepInput& WithSourceLocation(Aws::String&& value) { SetSourceLocation(std::move(value)); return *this;}
    inline CompareDatabaseCDCStepInput& WithSourceLocation(const char* value) { SetSourceLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target location of the compare database CDC step input.</p>
     */
    inline const Aws::String& GetTargetLocation() const{ return m_targetLocation; }
    inline bool TargetLocationHasBeenSet() const { return m_targetLocationHasBeenSet; }
    inline void SetTargetLocation(const Aws::String& value) { m_targetLocationHasBeenSet = true; m_targetLocation = value; }
    inline void SetTargetLocation(Aws::String&& value) { m_targetLocationHasBeenSet = true; m_targetLocation = std::move(value); }
    inline void SetTargetLocation(const char* value) { m_targetLocationHasBeenSet = true; m_targetLocation.assign(value); }
    inline CompareDatabaseCDCStepInput& WithTargetLocation(const Aws::String& value) { SetTargetLocation(value); return *this;}
    inline CompareDatabaseCDCStepInput& WithTargetLocation(Aws::String&& value) { SetTargetLocation(std::move(value)); return *this;}
    inline CompareDatabaseCDCStepInput& WithTargetLocation(const char* value) { SetTargetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output location of the compare database CDC step input.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }
    inline CompareDatabaseCDCStepInput& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}
    inline CompareDatabaseCDCStepInput& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}
    inline CompareDatabaseCDCStepInput& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source metadata of the compare database CDC step input.</p>
     */
    inline const SourceDatabaseMetadata& GetSourceMetadata() const{ return m_sourceMetadata; }
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }
    inline void SetSourceMetadata(const SourceDatabaseMetadata& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = value; }
    inline void SetSourceMetadata(SourceDatabaseMetadata&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::move(value); }
    inline CompareDatabaseCDCStepInput& WithSourceMetadata(const SourceDatabaseMetadata& value) { SetSourceMetadata(value); return *this;}
    inline CompareDatabaseCDCStepInput& WithSourceMetadata(SourceDatabaseMetadata&& value) { SetSourceMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target metadata location of the compare database CDC step input.</p>
     */
    inline const TargetDatabaseMetadata& GetTargetMetadata() const{ return m_targetMetadata; }
    inline bool TargetMetadataHasBeenSet() const { return m_targetMetadataHasBeenSet; }
    inline void SetTargetMetadata(const TargetDatabaseMetadata& value) { m_targetMetadataHasBeenSet = true; m_targetMetadata = value; }
    inline void SetTargetMetadata(TargetDatabaseMetadata&& value) { m_targetMetadataHasBeenSet = true; m_targetMetadata = std::move(value); }
    inline CompareDatabaseCDCStepInput& WithTargetMetadata(const TargetDatabaseMetadata& value) { SetTargetMetadata(value); return *this;}
    inline CompareDatabaseCDCStepInput& WithTargetMetadata(TargetDatabaseMetadata&& value) { SetTargetMetadata(std::move(value)); return *this;}
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
