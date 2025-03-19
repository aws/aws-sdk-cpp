/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/AudienceSize.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>The relevance score of a generated audience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/RelevanceMetric">AWS
   * API Reference</a></p>
   */
  class RelevanceMetric
  {
  public:
    AWS_CLEANROOMSML_API RelevanceMetric() = default;
    AWS_CLEANROOMSML_API RelevanceMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API RelevanceMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AudienceSize& GetAudienceSize() const { return m_audienceSize; }
    inline bool AudienceSizeHasBeenSet() const { return m_audienceSizeHasBeenSet; }
    template<typename AudienceSizeT = AudienceSize>
    void SetAudienceSize(AudienceSizeT&& value) { m_audienceSizeHasBeenSet = true; m_audienceSize = std::forward<AudienceSizeT>(value); }
    template<typename AudienceSizeT = AudienceSize>
    RelevanceMetric& WithAudienceSize(AudienceSizeT&& value) { SetAudienceSize(std::forward<AudienceSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of the generated audience.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline RelevanceMetric& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    AudienceSize m_audienceSize;
    bool m_audienceSizeHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
