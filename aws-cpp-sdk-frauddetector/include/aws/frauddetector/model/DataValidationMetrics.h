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
    AWS_FRAUDDETECTOR_API DataValidationMetrics();
    AWS_FRAUDDETECTOR_API DataValidationMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API DataValidationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline const Aws::Vector<FileValidationMessage>& GetFileLevelMessages() const{ return m_fileLevelMessages; }

    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline bool FileLevelMessagesHasBeenSet() const { return m_fileLevelMessagesHasBeenSet; }

    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline void SetFileLevelMessages(const Aws::Vector<FileValidationMessage>& value) { m_fileLevelMessagesHasBeenSet = true; m_fileLevelMessages = value; }

    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline void SetFileLevelMessages(Aws::Vector<FileValidationMessage>&& value) { m_fileLevelMessagesHasBeenSet = true; m_fileLevelMessages = std::move(value); }

    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline DataValidationMetrics& WithFileLevelMessages(const Aws::Vector<FileValidationMessage>& value) { SetFileLevelMessages(value); return *this;}

    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline DataValidationMetrics& WithFileLevelMessages(Aws::Vector<FileValidationMessage>&& value) { SetFileLevelMessages(std::move(value)); return *this;}

    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline DataValidationMetrics& AddFileLevelMessages(const FileValidationMessage& value) { m_fileLevelMessagesHasBeenSet = true; m_fileLevelMessages.push_back(value); return *this; }

    /**
     * <p>The file-specific model training data validation messages.</p>
     */
    inline DataValidationMetrics& AddFileLevelMessages(FileValidationMessage&& value) { m_fileLevelMessagesHasBeenSet = true; m_fileLevelMessages.push_back(std::move(value)); return *this; }


    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline const Aws::Vector<FieldValidationMessage>& GetFieldLevelMessages() const{ return m_fieldLevelMessages; }

    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline bool FieldLevelMessagesHasBeenSet() const { return m_fieldLevelMessagesHasBeenSet; }

    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline void SetFieldLevelMessages(const Aws::Vector<FieldValidationMessage>& value) { m_fieldLevelMessagesHasBeenSet = true; m_fieldLevelMessages = value; }

    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline void SetFieldLevelMessages(Aws::Vector<FieldValidationMessage>&& value) { m_fieldLevelMessagesHasBeenSet = true; m_fieldLevelMessages = std::move(value); }

    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline DataValidationMetrics& WithFieldLevelMessages(const Aws::Vector<FieldValidationMessage>& value) { SetFieldLevelMessages(value); return *this;}

    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline DataValidationMetrics& WithFieldLevelMessages(Aws::Vector<FieldValidationMessage>&& value) { SetFieldLevelMessages(std::move(value)); return *this;}

    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline DataValidationMetrics& AddFieldLevelMessages(const FieldValidationMessage& value) { m_fieldLevelMessagesHasBeenSet = true; m_fieldLevelMessages.push_back(value); return *this; }

    /**
     * <p>The field-specific model training validation messages.</p>
     */
    inline DataValidationMetrics& AddFieldLevelMessages(FieldValidationMessage&& value) { m_fieldLevelMessagesHasBeenSet = true; m_fieldLevelMessages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FileValidationMessage> m_fileLevelMessages;
    bool m_fileLevelMessagesHasBeenSet = false;

    Aws::Vector<FieldValidationMessage> m_fieldLevelMessages;
    bool m_fieldLevelMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
