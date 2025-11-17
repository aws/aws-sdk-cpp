/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ProcessedObject.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DatabaseMigrationService {
namespace Model {

/**
 * <p>Provides information about the progress of the schema conversion
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Progress">AWS API
 * Reference</a></p>
 */
class Progress {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API Progress() = default;
  AWS_DATABASEMIGRATIONSERVICE_API Progress(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API Progress& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The percent complete for the current step of the schema conversion
   * operation.</p>
   */
  inline double GetProgressPercent() const { return m_progressPercent; }
  inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
  inline void SetProgressPercent(double value) {
    m_progressPercentHasBeenSet = true;
    m_progressPercent = value;
  }
  inline Progress& WithProgressPercent(double value) {
    SetProgressPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of objects in this schema conversion operation.</p>
   */
  inline long long GetTotalObjects() const { return m_totalObjects; }
  inline bool TotalObjectsHasBeenSet() const { return m_totalObjectsHasBeenSet; }
  inline void SetTotalObjects(long long value) {
    m_totalObjectsHasBeenSet = true;
    m_totalObjects = value;
  }
  inline Progress& WithTotalObjects(long long value) {
    SetTotalObjects(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The step of the schema conversion operation. This parameter can store one of
   * the following values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> – The operation
   * is running.</p> </li> <li> <p> <code>LOADING_METADATA</code> – Loads metadata
   * from the source database.</p> </li> <li> <p> <code>COUNTING_OBJECTS</code> –
   * Determines the number of objects involved in the operation.</p> </li> <li> <p>
   * <code>ANALYZING</code> – Analyzes the source database objects.</p> </li> <li>
   * <p> <code>CONVERTING</code> – Converts the source database objects to a format
   * compatible with the target database.</p> </li> <li> <p> <code>APPLYING</code> –
   * Applies the converted code to the target database.</p> </li> <li> <p>
   * <code>FINISHED</code> – The operation completed successfully.</p> </li> </ul>
   */
  inline const Aws::String& GetProgressStep() const { return m_progressStep; }
  inline bool ProgressStepHasBeenSet() const { return m_progressStepHasBeenSet; }
  template <typename ProgressStepT = Aws::String>
  void SetProgressStep(ProgressStepT&& value) {
    m_progressStepHasBeenSet = true;
    m_progressStep = std::forward<ProgressStepT>(value);
  }
  template <typename ProgressStepT = Aws::String>
  Progress& WithProgressStep(ProgressStepT&& value) {
    SetProgressStep(std::forward<ProgressStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database object that the schema conversion operation
   * currently uses.</p>
   */
  inline const ProcessedObject& GetProcessedObject() const { return m_processedObject; }
  inline bool ProcessedObjectHasBeenSet() const { return m_processedObjectHasBeenSet; }
  template <typename ProcessedObjectT = ProcessedObject>
  void SetProcessedObject(ProcessedObjectT&& value) {
    m_processedObjectHasBeenSet = true;
    m_processedObject = std::forward<ProcessedObjectT>(value);
  }
  template <typename ProcessedObjectT = ProcessedObject>
  Progress& WithProcessedObject(ProcessedObjectT&& value) {
    SetProcessedObject(std::forward<ProcessedObjectT>(value));
    return *this;
  }
  ///@}
 private:
  double m_progressPercent{0.0};
  bool m_progressPercentHasBeenSet = false;

  long long m_totalObjects{0};
  bool m_totalObjectsHasBeenSet = false;

  Aws::String m_progressStep;
  bool m_progressStepHasBeenSet = false;

  ProcessedObject m_processedObject;
  bool m_processedObjectHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
