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
    AWS_LEXMODELSV2_API GenerationSummary() = default;
    AWS_LEXMODELSV2_API GenerationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API GenerationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the generation request.</p>
     */
    inline const Aws::String& GetGenerationId() const { return m_generationId; }
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }
    template<typename GenerationIdT = Aws::String>
    void SetGenerationId(GenerationIdT&& value) { m_generationIdHasBeenSet = true; m_generationId = std::forward<GenerationIdT>(value); }
    template<typename GenerationIdT = Aws::String>
    GenerationSummary& WithGenerationId(GenerationIdT&& value) { SetGenerationId(std::forward<GenerationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the generation request.</p>
     */
    inline GenerationStatus GetGenerationStatus() const { return m_generationStatus; }
    inline bool GenerationStatusHasBeenSet() const { return m_generationStatusHasBeenSet; }
    inline void SetGenerationStatus(GenerationStatus value) { m_generationStatusHasBeenSet = true; m_generationStatus = value; }
    inline GenerationSummary& WithGenerationStatus(GenerationStatus value) { SetGenerationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the generation request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    GenerationSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the generation request was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    GenerationSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;

    GenerationStatus m_generationStatus{GenerationStatus::NOT_SET};
    bool m_generationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
