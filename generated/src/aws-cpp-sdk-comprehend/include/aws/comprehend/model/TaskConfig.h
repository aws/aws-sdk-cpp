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
    AWS_COMPREHEND_API TaskConfig() = default;
    AWS_COMPREHEND_API TaskConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API TaskConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Language code for the language that the model supports.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline TaskConfig& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration required for a document classification model.</p>
     */
    inline const DocumentClassificationConfig& GetDocumentClassificationConfig() const { return m_documentClassificationConfig; }
    inline bool DocumentClassificationConfigHasBeenSet() const { return m_documentClassificationConfigHasBeenSet; }
    template<typename DocumentClassificationConfigT = DocumentClassificationConfig>
    void SetDocumentClassificationConfig(DocumentClassificationConfigT&& value) { m_documentClassificationConfigHasBeenSet = true; m_documentClassificationConfig = std::forward<DocumentClassificationConfigT>(value); }
    template<typename DocumentClassificationConfigT = DocumentClassificationConfig>
    TaskConfig& WithDocumentClassificationConfig(DocumentClassificationConfigT&& value) { SetDocumentClassificationConfig(std::forward<DocumentClassificationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration required for an entity recognition model.</p>
     */
    inline const EntityRecognitionConfig& GetEntityRecognitionConfig() const { return m_entityRecognitionConfig; }
    inline bool EntityRecognitionConfigHasBeenSet() const { return m_entityRecognitionConfigHasBeenSet; }
    template<typename EntityRecognitionConfigT = EntityRecognitionConfig>
    void SetEntityRecognitionConfig(EntityRecognitionConfigT&& value) { m_entityRecognitionConfigHasBeenSet = true; m_entityRecognitionConfig = std::forward<EntityRecognitionConfigT>(value); }
    template<typename EntityRecognitionConfigT = EntityRecognitionConfig>
    TaskConfig& WithEntityRecognitionConfig(EntityRecognitionConfigT&& value) { SetEntityRecognitionConfig(std::forward<EntityRecognitionConfigT>(value)); return *this;}
    ///@}
  private:

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    DocumentClassificationConfig m_documentClassificationConfig;
    bool m_documentClassificationConfigHasBeenSet = false;

    EntityRecognitionConfig m_entityRecognitionConfig;
    bool m_entityRecognitionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
