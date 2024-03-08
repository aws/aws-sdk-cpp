/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The recommendation to be updated as part of the <code>UpdateDataSource</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RecommendationConfiguration">AWS
   * API Reference</a></p>
   */
  class RecommendationConfiguration
  {
  public:
    AWS_DATAZONE_API RecommendationConfiguration();
    AWS_DATAZONE_API RecommendationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RecommendationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether automatic business name generation is to be enabled or not
     * as part of the recommendation configuration.</p>
     */
    inline bool GetEnableBusinessNameGeneration() const{ return m_enableBusinessNameGeneration; }

    /**
     * <p>Specifies whether automatic business name generation is to be enabled or not
     * as part of the recommendation configuration.</p>
     */
    inline bool EnableBusinessNameGenerationHasBeenSet() const { return m_enableBusinessNameGenerationHasBeenSet; }

    /**
     * <p>Specifies whether automatic business name generation is to be enabled or not
     * as part of the recommendation configuration.</p>
     */
    inline void SetEnableBusinessNameGeneration(bool value) { m_enableBusinessNameGenerationHasBeenSet = true; m_enableBusinessNameGeneration = value; }

    /**
     * <p>Specifies whether automatic business name generation is to be enabled or not
     * as part of the recommendation configuration.</p>
     */
    inline RecommendationConfiguration& WithEnableBusinessNameGeneration(bool value) { SetEnableBusinessNameGeneration(value); return *this;}

  private:

    bool m_enableBusinessNameGeneration;
    bool m_enableBusinessNameGenerationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
