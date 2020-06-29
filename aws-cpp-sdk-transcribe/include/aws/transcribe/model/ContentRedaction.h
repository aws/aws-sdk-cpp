/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/RedactionType.h>
#include <aws/transcribe/model/RedactionOutput.h>
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
   * <p>Settings for content redaction within a transcription job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ContentRedaction">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API ContentRedaction
  {
  public:
    ContentRedaction();
    ContentRedaction(Aws::Utils::Json::JsonView jsonValue);
    ContentRedaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Request parameter that defines the entities to be redacted. The only accepted
     * value is <code>PII</code>.</p>
     */
    inline const RedactionType& GetRedactionType() const{ return m_redactionType; }

    /**
     * <p>Request parameter that defines the entities to be redacted. The only accepted
     * value is <code>PII</code>.</p>
     */
    inline bool RedactionTypeHasBeenSet() const { return m_redactionTypeHasBeenSet; }

    /**
     * <p>Request parameter that defines the entities to be redacted. The only accepted
     * value is <code>PII</code>.</p>
     */
    inline void SetRedactionType(const RedactionType& value) { m_redactionTypeHasBeenSet = true; m_redactionType = value; }

    /**
     * <p>Request parameter that defines the entities to be redacted. The only accepted
     * value is <code>PII</code>.</p>
     */
    inline void SetRedactionType(RedactionType&& value) { m_redactionTypeHasBeenSet = true; m_redactionType = std::move(value); }

    /**
     * <p>Request parameter that defines the entities to be redacted. The only accepted
     * value is <code>PII</code>.</p>
     */
    inline ContentRedaction& WithRedactionType(const RedactionType& value) { SetRedactionType(value); return *this;}

    /**
     * <p>Request parameter that defines the entities to be redacted. The only accepted
     * value is <code>PII</code>.</p>
     */
    inline ContentRedaction& WithRedactionType(RedactionType&& value) { SetRedactionType(std::move(value)); return *this;}


    /**
     * <p>The output transcript file stored in either the default S3 bucket or in a
     * bucket you specify.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe outputs only the redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe outputs both the redacted
     * and unredacted transcripts.</p>
     */
    inline const RedactionOutput& GetRedactionOutput() const{ return m_redactionOutput; }

    /**
     * <p>The output transcript file stored in either the default S3 bucket or in a
     * bucket you specify.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe outputs only the redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe outputs both the redacted
     * and unredacted transcripts.</p>
     */
    inline bool RedactionOutputHasBeenSet() const { return m_redactionOutputHasBeenSet; }

    /**
     * <p>The output transcript file stored in either the default S3 bucket or in a
     * bucket you specify.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe outputs only the redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe outputs both the redacted
     * and unredacted transcripts.</p>
     */
    inline void SetRedactionOutput(const RedactionOutput& value) { m_redactionOutputHasBeenSet = true; m_redactionOutput = value; }

    /**
     * <p>The output transcript file stored in either the default S3 bucket or in a
     * bucket you specify.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe outputs only the redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe outputs both the redacted
     * and unredacted transcripts.</p>
     */
    inline void SetRedactionOutput(RedactionOutput&& value) { m_redactionOutputHasBeenSet = true; m_redactionOutput = std::move(value); }

    /**
     * <p>The output transcript file stored in either the default S3 bucket or in a
     * bucket you specify.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe outputs only the redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe outputs both the redacted
     * and unredacted transcripts.</p>
     */
    inline ContentRedaction& WithRedactionOutput(const RedactionOutput& value) { SetRedactionOutput(value); return *this;}

    /**
     * <p>The output transcript file stored in either the default S3 bucket or in a
     * bucket you specify.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe outputs only the redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe outputs both the redacted
     * and unredacted transcripts.</p>
     */
    inline ContentRedaction& WithRedactionOutput(RedactionOutput&& value) { SetRedactionOutput(std::move(value)); return *this;}

  private:

    RedactionType m_redactionType;
    bool m_redactionTypeHasBeenSet;

    RedactionOutput m_redactionOutput;
    bool m_redactionOutputHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
