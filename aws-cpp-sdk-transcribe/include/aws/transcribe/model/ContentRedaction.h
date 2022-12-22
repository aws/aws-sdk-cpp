/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/RedactionType.h>
#include <aws/transcribe/model/RedactionOutput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/PiiEntityType.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Makes it possible to redact or flag specified personally identifiable
   * information (PII) in your transcript. If you use <code>ContentRedaction</code>,
   * you must also include the sub-parameters: <code>PiiEntityTypes</code>,
   * <code>RedactionOutput</code>, and <code>RedactionType</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ContentRedaction">AWS
   * API Reference</a></p>
   */
  class ContentRedaction
  {
  public:
    AWS_TRANSCRIBESERVICE_API ContentRedaction();
    AWS_TRANSCRIBESERVICE_API ContentRedaction(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API ContentRedaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the category of information you want to redact; <code>PII</code>
     * (personally identifiable information) is the only valid value. You can use
     * <code>PiiEntityTypes</code> to choose which types of PII you want to redact.</p>
     */
    inline const RedactionType& GetRedactionType() const{ return m_redactionType; }

    /**
     * <p>Specify the category of information you want to redact; <code>PII</code>
     * (personally identifiable information) is the only valid value. You can use
     * <code>PiiEntityTypes</code> to choose which types of PII you want to redact.</p>
     */
    inline bool RedactionTypeHasBeenSet() const { return m_redactionTypeHasBeenSet; }

    /**
     * <p>Specify the category of information you want to redact; <code>PII</code>
     * (personally identifiable information) is the only valid value. You can use
     * <code>PiiEntityTypes</code> to choose which types of PII you want to redact.</p>
     */
    inline void SetRedactionType(const RedactionType& value) { m_redactionTypeHasBeenSet = true; m_redactionType = value; }

    /**
     * <p>Specify the category of information you want to redact; <code>PII</code>
     * (personally identifiable information) is the only valid value. You can use
     * <code>PiiEntityTypes</code> to choose which types of PII you want to redact.</p>
     */
    inline void SetRedactionType(RedactionType&& value) { m_redactionTypeHasBeenSet = true; m_redactionType = std::move(value); }

    /**
     * <p>Specify the category of information you want to redact; <code>PII</code>
     * (personally identifiable information) is the only valid value. You can use
     * <code>PiiEntityTypes</code> to choose which types of PII you want to redact.</p>
     */
    inline ContentRedaction& WithRedactionType(const RedactionType& value) { SetRedactionType(value); return *this;}

    /**
     * <p>Specify the category of information you want to redact; <code>PII</code>
     * (personally identifiable information) is the only valid value. You can use
     * <code>PiiEntityTypes</code> to choose which types of PII you want to redact.</p>
     */
    inline ContentRedaction& WithRedactionType(RedactionType&& value) { SetRedactionType(std::move(value)); return *this;}


    /**
     * <p>Specify if you want only a redacted transcript, or if you want a redacted and
     * an unredacted transcript.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe creates only a redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe creates a redacted and an
     * unredacted transcript (as two separate files).</p>
     */
    inline const RedactionOutput& GetRedactionOutput() const{ return m_redactionOutput; }

    /**
     * <p>Specify if you want only a redacted transcript, or if you want a redacted and
     * an unredacted transcript.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe creates only a redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe creates a redacted and an
     * unredacted transcript (as two separate files).</p>
     */
    inline bool RedactionOutputHasBeenSet() const { return m_redactionOutputHasBeenSet; }

    /**
     * <p>Specify if you want only a redacted transcript, or if you want a redacted and
     * an unredacted transcript.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe creates only a redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe creates a redacted and an
     * unredacted transcript (as two separate files).</p>
     */
    inline void SetRedactionOutput(const RedactionOutput& value) { m_redactionOutputHasBeenSet = true; m_redactionOutput = value; }

    /**
     * <p>Specify if you want only a redacted transcript, or if you want a redacted and
     * an unredacted transcript.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe creates only a redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe creates a redacted and an
     * unredacted transcript (as two separate files).</p>
     */
    inline void SetRedactionOutput(RedactionOutput&& value) { m_redactionOutputHasBeenSet = true; m_redactionOutput = std::move(value); }

    /**
     * <p>Specify if you want only a redacted transcript, or if you want a redacted and
     * an unredacted transcript.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe creates only a redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe creates a redacted and an
     * unredacted transcript (as two separate files).</p>
     */
    inline ContentRedaction& WithRedactionOutput(const RedactionOutput& value) { SetRedactionOutput(value); return *this;}

    /**
     * <p>Specify if you want only a redacted transcript, or if you want a redacted and
     * an unredacted transcript.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe creates only a redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe creates a redacted and an
     * unredacted transcript (as two separate files).</p>
     */
    inline ContentRedaction& WithRedactionOutput(RedactionOutput&& value) { SetRedactionOutput(std::move(value)); return *this;}


    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p>
     */
    inline const Aws::Vector<PiiEntityType>& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const Aws::Vector<PiiEntityType>& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(Aws::Vector<PiiEntityType>&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p>
     */
    inline ContentRedaction& WithPiiEntityTypes(const Aws::Vector<PiiEntityType>& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p>
     */
    inline ContentRedaction& WithPiiEntityTypes(Aws::Vector<PiiEntityType>&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p>
     */
    inline ContentRedaction& AddPiiEntityTypes(const PiiEntityType& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.push_back(value); return *this; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p>
     */
    inline ContentRedaction& AddPiiEntityTypes(PiiEntityType&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.push_back(std::move(value)); return *this; }

  private:

    RedactionType m_redactionType;
    bool m_redactionTypeHasBeenSet = false;

    RedactionOutput m_redactionOutput;
    bool m_redactionOutputHasBeenSet = false;

    Aws::Vector<PiiEntityType> m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
