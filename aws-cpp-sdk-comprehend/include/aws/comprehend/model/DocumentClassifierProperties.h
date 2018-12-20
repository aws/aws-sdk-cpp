/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/ModelStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehend/model/DocumentClassifierInputDataConfig.h>
#include <aws/comprehend/model/ClassifierMetadata.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information about a document classifier.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassifierProperties">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API DocumentClassifierProperties
  {
  public:
    DocumentClassifierProperties();
    DocumentClassifierProperties(Aws::Utils::Json::JsonView jsonValue);
    DocumentClassifierProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline const Aws::String& GetDocumentClassifierArn() const{ return m_documentClassifierArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline void SetDocumentClassifierArn(const Aws::String& value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline void SetDocumentClassifierArn(Aws::String&& value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline void SetDocumentClassifierArn(const char* value) { m_documentClassifierArnHasBeenSet = true; m_documentClassifierArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline DocumentClassifierProperties& WithDocumentClassifierArn(const Aws::String& value) { SetDocumentClassifierArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline DocumentClassifierProperties& WithDocumentClassifierArn(Aws::String&& value) { SetDocumentClassifierArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline DocumentClassifierProperties& WithDocumentClassifierArn(const char* value) { SetDocumentClassifierArn(value); return *this;}


    /**
     * <p>The language code for the language of the documents that the classifier was
     * trained on.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code for the language of the documents that the classifier was
     * trained on.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code for the language of the documents that the classifier was
     * trained on.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code for the language of the documents that the classifier was
     * trained on.</p>
     */
    inline DocumentClassifierProperties& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language of the documents that the classifier was
     * trained on.</p>
     */
    inline DocumentClassifierProperties& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The status of the document classifier. If the status is <code>TRAINED</code>
     * the classifier is ready to use. If the status is <code>FAILED</code> you can see
     * additional information about why the classifier wasn't trained in the
     * <code>Message</code> field.</p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the document classifier. If the status is <code>TRAINED</code>
     * the classifier is ready to use. If the status is <code>FAILED</code> you can see
     * additional information about why the classifier wasn't trained in the
     * <code>Message</code> field.</p>
     */
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the document classifier. If the status is <code>TRAINED</code>
     * the classifier is ready to use. If the status is <code>FAILED</code> you can see
     * additional information about why the classifier wasn't trained in the
     * <code>Message</code> field.</p>
     */
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the document classifier. If the status is <code>TRAINED</code>
     * the classifier is ready to use. If the status is <code>FAILED</code> you can see
     * additional information about why the classifier wasn't trained in the
     * <code>Message</code> field.</p>
     */
    inline DocumentClassifierProperties& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the document classifier. If the status is <code>TRAINED</code>
     * the classifier is ready to use. If the status is <code>FAILED</code> you can see
     * additional information about why the classifier wasn't trained in the
     * <code>Message</code> field.</p>
     */
    inline DocumentClassifierProperties& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Additional information about the status of the classifier.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Additional information about the status of the classifier.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Additional information about the status of the classifier.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Additional information about the status of the classifier.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Additional information about the status of the classifier.</p>
     */
    inline DocumentClassifierProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Additional information about the status of the classifier.</p>
     */
    inline DocumentClassifierProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information about the status of the classifier.</p>
     */
    inline DocumentClassifierProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The time that the document classifier was submitted for training.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * <p>The time that the document classifier was submitted for training.</p>
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * <p>The time that the document classifier was submitted for training.</p>
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * <p>The time that the document classifier was submitted for training.</p>
     */
    inline DocumentClassifierProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * <p>The time that the document classifier was submitted for training.</p>
     */
    inline DocumentClassifierProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}


    /**
     * <p>The time that training the document classifier completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that training the document classifier completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that training the document classifier completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that training the document classifier completed.</p>
     */
    inline DocumentClassifierProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that training the document classifier completed.</p>
     */
    inline DocumentClassifierProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time when the training starts on documentation classifiers. You
     * are billed for the time interval between this time and the value of
     * TrainingEndTime. </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingStartTime() const{ return m_trainingStartTime; }

    /**
     * <p>Indicates the time when the training starts on documentation classifiers. You
     * are billed for the time interval between this time and the value of
     * TrainingEndTime. </p>
     */
    inline void SetTrainingStartTime(const Aws::Utils::DateTime& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = value; }

    /**
     * <p>Indicates the time when the training starts on documentation classifiers. You
     * are billed for the time interval between this time and the value of
     * TrainingEndTime. </p>
     */
    inline void SetTrainingStartTime(Aws::Utils::DateTime&& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = std::move(value); }

    /**
     * <p>Indicates the time when the training starts on documentation classifiers. You
     * are billed for the time interval between this time and the value of
     * TrainingEndTime. </p>
     */
    inline DocumentClassifierProperties& WithTrainingStartTime(const Aws::Utils::DateTime& value) { SetTrainingStartTime(value); return *this;}

    /**
     * <p>Indicates the time when the training starts on documentation classifiers. You
     * are billed for the time interval between this time and the value of
     * TrainingEndTime. </p>
     */
    inline DocumentClassifierProperties& WithTrainingStartTime(Aws::Utils::DateTime&& value) { SetTrainingStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that training of the document classifier was completed. Indicates
     * the time when the training completes on documentation classifiers. You are
     * billed for the time interval between this time and the value of
     * TrainingStartTime.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const{ return m_trainingEndTime; }

    /**
     * <p>The time that training of the document classifier was completed. Indicates
     * the time when the training completes on documentation classifiers. You are
     * billed for the time interval between this time and the value of
     * TrainingStartTime.</p>
     */
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = value; }

    /**
     * <p>The time that training of the document classifier was completed. Indicates
     * the time when the training completes on documentation classifiers. You are
     * billed for the time interval between this time and the value of
     * TrainingStartTime.</p>
     */
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::move(value); }

    /**
     * <p>The time that training of the document classifier was completed. Indicates
     * the time when the training completes on documentation classifiers. You are
     * billed for the time interval between this time and the value of
     * TrainingStartTime.</p>
     */
    inline DocumentClassifierProperties& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}

    /**
     * <p>The time that training of the document classifier was completed. Indicates
     * the time when the training completes on documentation classifiers. You are
     * billed for the time interval between this time and the value of
     * TrainingStartTime.</p>
     */
    inline DocumentClassifierProperties& WithTrainingEndTime(Aws::Utils::DateTime&& value) { SetTrainingEndTime(std::move(value)); return *this;}


    /**
     * <p>The input data configuration that you supplied when you created the document
     * classifier for training.</p>
     */
    inline const DocumentClassifierInputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classifier for training.</p>
     */
    inline void SetInputDataConfig(const DocumentClassifierInputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classifier for training.</p>
     */
    inline void SetInputDataConfig(DocumentClassifierInputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classifier for training.</p>
     */
    inline DocumentClassifierProperties& WithInputDataConfig(const DocumentClassifierInputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input data configuration that you supplied when you created the document
     * classifier for training.</p>
     */
    inline DocumentClassifierProperties& WithInputDataConfig(DocumentClassifierInputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the document classifier, including the number of documents
     * used for training the classifier, the number of documents used for test the
     * classifier, and an accuracy rating.</p>
     */
    inline const ClassifierMetadata& GetClassifierMetadata() const{ return m_classifierMetadata; }

    /**
     * <p>Information about the document classifier, including the number of documents
     * used for training the classifier, the number of documents used for test the
     * classifier, and an accuracy rating.</p>
     */
    inline void SetClassifierMetadata(const ClassifierMetadata& value) { m_classifierMetadataHasBeenSet = true; m_classifierMetadata = value; }

    /**
     * <p>Information about the document classifier, including the number of documents
     * used for training the classifier, the number of documents used for test the
     * classifier, and an accuracy rating.</p>
     */
    inline void SetClassifierMetadata(ClassifierMetadata&& value) { m_classifierMetadataHasBeenSet = true; m_classifierMetadata = std::move(value); }

    /**
     * <p>Information about the document classifier, including the number of documents
     * used for training the classifier, the number of documents used for test the
     * classifier, and an accuracy rating.</p>
     */
    inline DocumentClassifierProperties& WithClassifierMetadata(const ClassifierMetadata& value) { SetClassifierMetadata(value); return *this;}

    /**
     * <p>Information about the document classifier, including the number of documents
     * used for training the classifier, the number of documents used for test the
     * classifier, and an accuracy rating.</p>
     */
    inline DocumentClassifierProperties& WithClassifierMetadata(ClassifierMetadata&& value) { SetClassifierMetadata(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline DocumentClassifierProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline DocumentClassifierProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline DocumentClassifierProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}

  private:

    Aws::String m_documentClassifierArn;
    bool m_documentClassifierArnHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    ModelStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::Utils::DateTime m_trainingStartTime;
    bool m_trainingStartTimeHasBeenSet;

    Aws::Utils::DateTime m_trainingEndTime;
    bool m_trainingEndTimeHasBeenSet;

    DocumentClassifierInputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    ClassifierMetadata m_classifierMetadata;
    bool m_classifierMetadataHasBeenSet;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
