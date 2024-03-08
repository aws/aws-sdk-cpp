/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/DocumentClassificationConfig.h>
#include <aws/comprehend/model/EntityRecognitionConfig.h>
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
   * <p>Configuration about the model associated with a flywheel.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/TaskConfig">AWS
   * API Reference</a></p>
   */
  class TaskConfig
  {
  public:
    AWS_COMPREHEND_API TaskConfig();
    AWS_COMPREHEND_API TaskConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API TaskConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Language code for the language that the model supports.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Language code for the language that the model supports.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Language code for the language that the model supports.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Language code for the language that the model supports.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Language code for the language that the model supports.</p>
     */
    inline TaskConfig& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Language code for the language that the model supports.</p>
     */
    inline TaskConfig& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Configuration required for a document classification model.</p>
     */
    inline const DocumentClassificationConfig& GetDocumentClassificationConfig() const{ return m_documentClassificationConfig; }

    /**
     * <p>Configuration required for a document classification model.</p>
     */
    inline bool DocumentClassificationConfigHasBeenSet() const { return m_documentClassificationConfigHasBeenSet; }

    /**
     * <p>Configuration required for a document classification model.</p>
     */
    inline void SetDocumentClassificationConfig(const DocumentClassificationConfig& value) { m_documentClassificationConfigHasBeenSet = true; m_documentClassificationConfig = value; }

    /**
     * <p>Configuration required for a document classification model.</p>
     */
    inline void SetDocumentClassificationConfig(DocumentClassificationConfig&& value) { m_documentClassificationConfigHasBeenSet = true; m_documentClassificationConfig = std::move(value); }

    /**
     * <p>Configuration required for a document classification model.</p>
     */
    inline TaskConfig& WithDocumentClassificationConfig(const DocumentClassificationConfig& value) { SetDocumentClassificationConfig(value); return *this;}

    /**
     * <p>Configuration required for a document classification model.</p>
     */
    inline TaskConfig& WithDocumentClassificationConfig(DocumentClassificationConfig&& value) { SetDocumentClassificationConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration required for an entity recognition model.</p>
     */
    inline const EntityRecognitionConfig& GetEntityRecognitionConfig() const{ return m_entityRecognitionConfig; }

    /**
     * <p>Configuration required for an entity recognition model.</p>
     */
    inline bool EntityRecognitionConfigHasBeenSet() const { return m_entityRecognitionConfigHasBeenSet; }

    /**
     * <p>Configuration required for an entity recognition model.</p>
     */
    inline void SetEntityRecognitionConfig(const EntityRecognitionConfig& value) { m_entityRecognitionConfigHasBeenSet = true; m_entityRecognitionConfig = value; }

    /**
     * <p>Configuration required for an entity recognition model.</p>
     */
    inline void SetEntityRecognitionConfig(EntityRecognitionConfig&& value) { m_entityRecognitionConfigHasBeenSet = true; m_entityRecognitionConfig = std::move(value); }

    /**
     * <p>Configuration required for an entity recognition model.</p>
     */
    inline TaskConfig& WithEntityRecognitionConfig(const EntityRecognitionConfig& value) { SetEntityRecognitionConfig(value); return *this;}

    /**
     * <p>Configuration required for an entity recognition model.</p>
     */
    inline TaskConfig& WithEntityRecognitionConfig(EntityRecognitionConfig&& value) { SetEntityRecognitionConfig(std::move(value)); return *this;}

  private:

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    DocumentClassificationConfig m_documentClassificationConfig;
    bool m_documentClassificationConfigHasBeenSet = false;

    EntityRecognitionConfig m_entityRecognitionConfig;
    bool m_entityRecognitionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
