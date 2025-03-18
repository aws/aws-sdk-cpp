/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/AllowedStatistics.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Configuration of entity detection for a profile job. When undefined, entity
   * detection is disabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/EntityDetectorConfiguration">AWS
   * API Reference</a></p>
   */
  class EntityDetectorConfiguration
  {
  public:
    AWS_GLUEDATABREW_API EntityDetectorConfiguration() = default;
    AWS_GLUEDATABREW_API EntityDetectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API EntityDetectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Entity types to detect. Can be any of the following:</p> <ul> <li>
     * <p>USA_SSN</p> </li> <li> <p>EMAIL</p> </li> <li> <p>USA_ITIN</p> </li> <li>
     * <p>USA_PASSPORT_NUMBER</p> </li> <li> <p>PHONE_NUMBER</p> </li> <li>
     * <p>USA_DRIVING_LICENSE</p> </li> <li> <p>BANK_ACCOUNT</p> </li> <li>
     * <p>CREDIT_CARD</p> </li> <li> <p>IP_ADDRESS</p> </li> <li> <p>MAC_ADDRESS</p>
     * </li> <li> <p>USA_DEA_NUMBER</p> </li> <li> <p>USA_HCPCS_CODE</p> </li> <li>
     * <p>USA_NATIONAL_PROVIDER_IDENTIFIER</p> </li> <li> <p>USA_NATIONAL_DRUG_CODE</p>
     * </li> <li> <p>USA_HEALTH_INSURANCE_CLAIM_NUMBER</p> </li> <li>
     * <p>USA_MEDICARE_BENEFICIARY_IDENTIFIER</p> </li> <li> <p>USA_CPT_CODE</p> </li>
     * <li> <p>PERSON_NAME</p> </li> <li> <p>DATE</p> </li> </ul> <p>The Entity type
     * group USA_ALL is also supported, and includes all of the above entity types
     * except PERSON_NAME and DATE.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityTypes() const { return m_entityTypes; }
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
    template<typename EntityTypesT = Aws::Vector<Aws::String>>
    void SetEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::forward<EntityTypesT>(value); }
    template<typename EntityTypesT = Aws::Vector<Aws::String>>
    EntityDetectorConfiguration& WithEntityTypes(EntityTypesT&& value) { SetEntityTypes(std::forward<EntityTypesT>(value)); return *this;}
    template<typename EntityTypesT = Aws::String>
    EntityDetectorConfiguration& AddEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.emplace_back(std::forward<EntityTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration of statistics that are allowed to be run on columns that
     * contain detected entities. When undefined, no statistics will be computed on
     * columns that contain detected entities.</p>
     */
    inline const Aws::Vector<AllowedStatistics>& GetAllowedStatistics() const { return m_allowedStatistics; }
    inline bool AllowedStatisticsHasBeenSet() const { return m_allowedStatisticsHasBeenSet; }
    template<typename AllowedStatisticsT = Aws::Vector<AllowedStatistics>>
    void SetAllowedStatistics(AllowedStatisticsT&& value) { m_allowedStatisticsHasBeenSet = true; m_allowedStatistics = std::forward<AllowedStatisticsT>(value); }
    template<typename AllowedStatisticsT = Aws::Vector<AllowedStatistics>>
    EntityDetectorConfiguration& WithAllowedStatistics(AllowedStatisticsT&& value) { SetAllowedStatistics(std::forward<AllowedStatisticsT>(value)); return *this;}
    template<typename AllowedStatisticsT = AllowedStatistics>
    EntityDetectorConfiguration& AddAllowedStatistics(AllowedStatisticsT&& value) { m_allowedStatisticsHasBeenSet = true; m_allowedStatistics.emplace_back(std::forward<AllowedStatisticsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_entityTypes;
    bool m_entityTypesHasBeenSet = false;

    Aws::Vector<AllowedStatistics> m_allowedStatistics;
    bool m_allowedStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
