/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/FileValidationMessage.h>
#include <aws/frauddetector/model/FieldValidationMessage.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The model training data validation metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DataValidationMetrics">AWS
   * API Reference</a></p>
   */
  class DataValidationMetrics
  {
  public:
    AWS_FRAUDDETECTOR_API DataValidationMetrics() = default;
    AWS_FRAUDDETECTOR_API DataValidationMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API DataValidationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline const Aws::Vector<FileValidationMessage>& GetFileLevelMessages() const { return m_fileLevelMessages; }
    inline bool FileLevelMessagesHasBeenSet() const { return m_fileLevelMessagesHasBeenSet; }
    template<typename FileLevelMessagesT = Aws::Vector<FileValidationMessage>>
    void SetFileLevelMessages(FileLevelMessagesT&& value) { m_fileLevelMessagesHasBeenSet = true; m_fileLevelMessages = std::forward<FileLevelMessagesT>(value); }
    template<typename FileLevelMessagesT = Aws::Vector<FileValidationMessage>>
    DataValidationMetrics& WithFileLevelMessages(FileLevelMessagesT&& value) { SetFileLevelMessages(std::forward<FileLevelMessagesT>(value)); return *this;}
    template<typename FileLevelMessagesT = FileValidationMessage>
    DataValidationMetrics& AddFileLevelMessages(FileLevelMessagesT&& value) { m_fileLevelMessagesHasBeenSet = true; m_fileLevelMessages.emplace_back(std::forward<FileLevelMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline const Aws::Vector<FieldValidationMessage>& GetFieldLevelMessages() const { return m_fieldLevelMessages; }
    inline bool FieldLevelMessagesHasBeenSet() const { return m_fieldLevelMessagesHasBeenSet; }
    template<typename FieldLevelMessagesT = Aws::Vector<FieldValidationMessage>>
    void SetFieldLevelMessages(FieldLevelMessagesT&& value) { m_fieldLevelMessagesHasBeenSet = true; m_fieldLevelMessages = std::forward<FieldLevelMessagesT>(value); }
    template<typename FieldLevelMessagesT = Aws::Vector<FieldValidationMessage>>
    DataValidationMetrics& WithFieldLevelMessages(FieldLevelMessagesT&& value) { SetFieldLevelMessages(std::forward<FieldLevelMessagesT>(value)); return *this;}
    template<typename FieldLevelMessagesT = FieldValidationMessage>
    DataValidationMetrics& AddFieldLevelMessages(FieldLevelMessagesT&& value) { m_fieldLevelMessagesHasBeenSet = true; m_fieldLevelMessages.emplace_back(std::forward<FieldLevelMessagesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FileValidationMessage> m_fileLevelMessages;
    bool m_fileLevelMessagesHasBeenSet = false;

    Aws::Vector<FieldValidationMessage> m_fieldLevelMessages;
    bool m_fieldLevelMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
