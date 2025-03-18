/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/AudienceSizeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Returns the relevance scores at these audience sizes when used in the
   * <a>GetAudienceGenerationJob</a> for a specified audience generation job and
   * configured audience model.</p> <p>Specifies the list of allowed
   * <code>audienceSize</code> values when used in the <a>StartAudienceExportJob</a>
   * for an audience generation job. You can use the <code>ABSOLUTE</code>
   * <a>AudienceSize</a> to configure out audience sizes using the count of
   * identifiers in the output. You can use the <code>Percentage</code>
   * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceSizeConfig">AWS
   * API Reference</a></p>
   */
  class AudienceSizeConfig
  {
  public:
    AWS_CLEANROOMSML_API AudienceSizeConfig() = default;
    AWS_CLEANROOMSML_API AudienceSizeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceSizeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the audience output sizes are defined as an absolute number or a
     * percentage.</p>
     */
    inline AudienceSizeType GetAudienceSizeType() const { return m_audienceSizeType; }
    inline bool AudienceSizeTypeHasBeenSet() const { return m_audienceSizeTypeHasBeenSet; }
    inline void SetAudienceSizeType(AudienceSizeType value) { m_audienceSizeTypeHasBeenSet = true; m_audienceSizeType = value; }
    inline AudienceSizeConfig& WithAudienceSizeType(AudienceSizeType value) { SetAudienceSizeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the different audience output sizes.</p>
     */
    inline const Aws::Vector<int>& GetAudienceSizeBins() const { return m_audienceSizeBins; }
    inline bool AudienceSizeBinsHasBeenSet() const { return m_audienceSizeBinsHasBeenSet; }
    template<typename AudienceSizeBinsT = Aws::Vector<int>>
    void SetAudienceSizeBins(AudienceSizeBinsT&& value) { m_audienceSizeBinsHasBeenSet = true; m_audienceSizeBins = std::forward<AudienceSizeBinsT>(value); }
    template<typename AudienceSizeBinsT = Aws::Vector<int>>
    AudienceSizeConfig& WithAudienceSizeBins(AudienceSizeBinsT&& value) { SetAudienceSizeBins(std::forward<AudienceSizeBinsT>(value)); return *this;}
    inline AudienceSizeConfig& AddAudienceSizeBins(int value) { m_audienceSizeBinsHasBeenSet = true; m_audienceSizeBins.push_back(value); return *this; }
    ///@}
  private:

    AudienceSizeType m_audienceSizeType{AudienceSizeType::NOT_SET};
    bool m_audienceSizeTypeHasBeenSet = false;

    Aws::Vector<int> m_audienceSizeBins;
    bool m_audienceSizeBinsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
