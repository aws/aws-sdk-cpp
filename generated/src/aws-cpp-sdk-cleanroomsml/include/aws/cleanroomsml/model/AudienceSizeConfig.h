/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/AudienceSizeType.h>
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
   * <p>Configure the list of audience output sizes that can be created. A request to
   * <a>StartAudienceGenerationJob</a> that uses this configured audience model must
   * have an <code>audienceSize</code> selected from this list. You can use the
   * <code>ABSOLUTE</code> <a>AudienceSize</a> to configure out audience sizes using
   * the count of identifiers in the output. You can use the <code>Percentage</code>
   * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AudienceSizeConfig">AWS
   * API Reference</a></p>
   */
  class AudienceSizeConfig
  {
  public:
    AWS_CLEANROOMSML_API AudienceSizeConfig();
    AWS_CLEANROOMSML_API AudienceSizeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API AudienceSizeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of the different audience output sizes.</p>
     */
    inline const Aws::Vector<int>& GetAudienceSizeBins() const{ return m_audienceSizeBins; }

    /**
     * <p>An array of the different audience output sizes.</p>
     */
    inline bool AudienceSizeBinsHasBeenSet() const { return m_audienceSizeBinsHasBeenSet; }

    /**
     * <p>An array of the different audience output sizes.</p>
     */
    inline void SetAudienceSizeBins(const Aws::Vector<int>& value) { m_audienceSizeBinsHasBeenSet = true; m_audienceSizeBins = value; }

    /**
     * <p>An array of the different audience output sizes.</p>
     */
    inline void SetAudienceSizeBins(Aws::Vector<int>&& value) { m_audienceSizeBinsHasBeenSet = true; m_audienceSizeBins = std::move(value); }

    /**
     * <p>An array of the different audience output sizes.</p>
     */
    inline AudienceSizeConfig& WithAudienceSizeBins(const Aws::Vector<int>& value) { SetAudienceSizeBins(value); return *this;}

    /**
     * <p>An array of the different audience output sizes.</p>
     */
    inline AudienceSizeConfig& WithAudienceSizeBins(Aws::Vector<int>&& value) { SetAudienceSizeBins(std::move(value)); return *this;}

    /**
     * <p>An array of the different audience output sizes.</p>
     */
    inline AudienceSizeConfig& AddAudienceSizeBins(int value) { m_audienceSizeBinsHasBeenSet = true; m_audienceSizeBins.push_back(value); return *this; }


    /**
     * <p>Whether the audience output sizes are defined as an absolute number or a
     * percentage.</p>
     */
    inline const AudienceSizeType& GetAudienceSizeType() const{ return m_audienceSizeType; }

    /**
     * <p>Whether the audience output sizes are defined as an absolute number or a
     * percentage.</p>
     */
    inline bool AudienceSizeTypeHasBeenSet() const { return m_audienceSizeTypeHasBeenSet; }

    /**
     * <p>Whether the audience output sizes are defined as an absolute number or a
     * percentage.</p>
     */
    inline void SetAudienceSizeType(const AudienceSizeType& value) { m_audienceSizeTypeHasBeenSet = true; m_audienceSizeType = value; }

    /**
     * <p>Whether the audience output sizes are defined as an absolute number or a
     * percentage.</p>
     */
    inline void SetAudienceSizeType(AudienceSizeType&& value) { m_audienceSizeTypeHasBeenSet = true; m_audienceSizeType = std::move(value); }

    /**
     * <p>Whether the audience output sizes are defined as an absolute number or a
     * percentage.</p>
     */
    inline AudienceSizeConfig& WithAudienceSizeType(const AudienceSizeType& value) { SetAudienceSizeType(value); return *this;}

    /**
     * <p>Whether the audience output sizes are defined as an absolute number or a
     * percentage.</p>
     */
    inline AudienceSizeConfig& WithAudienceSizeType(AudienceSizeType&& value) { SetAudienceSizeType(std::move(value)); return *this;}

  private:

    Aws::Vector<int> m_audienceSizeBins;
    bool m_audienceSizeBinsHasBeenSet = false;

    AudienceSizeType m_audienceSizeType;
    bool m_audienceSizeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
