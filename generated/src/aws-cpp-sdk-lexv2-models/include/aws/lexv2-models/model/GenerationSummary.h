/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/GenerationStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about a generation request made for the bot
   * locale.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/GenerationSummary">AWS
   * API Reference</a></p>
   */
  class GenerationSummary
  {
  public:
    AWS_LEXMODELSV2_API GenerationSummary();
    AWS_LEXMODELSV2_API GenerationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API GenerationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }

    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline void SetGenerationId(const Aws::String& value) { m_generationIdHasBeenSet = true; m_generationId = value; }

    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline void SetGenerationId(Aws::String&& value) { m_generationIdHasBeenSet = true; m_generationId = std::move(value); }

    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline void SetGenerationId(const char* value) { m_generationIdHasBeenSet = true; m_generationId.assign(value); }

    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline GenerationSummary& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}

    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline GenerationSummary& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline GenerationSummary& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}


    /**
     * <p>The status of the generation request.</p>
     */
    inline const GenerationStatus& GetGenerationStatus() const{ return m_generationStatus; }

    /**
     * <p>The status of the generation request.</p>
     */
    inline bool GenerationStatusHasBeenSet() const { return m_generationStatusHasBeenSet; }

    /**
     * <p>The status of the generation request.</p>
     */
    inline void SetGenerationStatus(const GenerationStatus& value) { m_generationStatusHasBeenSet = true; m_generationStatus = value; }

    /**
     * <p>The status of the generation request.</p>
     */
    inline void SetGenerationStatus(GenerationStatus&& value) { m_generationStatusHasBeenSet = true; m_generationStatus = std::move(value); }

    /**
     * <p>The status of the generation request.</p>
     */
    inline GenerationSummary& WithGenerationStatus(const GenerationStatus& value) { SetGenerationStatus(value); return *this;}

    /**
     * <p>The status of the generation request.</p>
     */
    inline GenerationSummary& WithGenerationStatus(GenerationStatus&& value) { SetGenerationStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline GenerationSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline GenerationSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the generation request was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time at which the generation request was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time at which the generation request was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time at which the generation request was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time at which the generation request was last updated.</p>
     */
    inline GenerationSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time at which the generation request was last updated.</p>
     */
    inline GenerationSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;

    GenerationStatus m_generationStatus;
    bool m_generationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
