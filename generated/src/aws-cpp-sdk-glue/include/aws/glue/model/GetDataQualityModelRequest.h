/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetDataQualityModelRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetDataQualityModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataQualityModel"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Statistic ID.</p>
     */
    inline const Aws::String& GetStatisticId() const { return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    template<typename StatisticIdT = Aws::String>
    void SetStatisticId(StatisticIdT&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::forward<StatisticIdT>(value); }
    template<typename StatisticIdT = Aws::String>
    GetDataQualityModelRequest& WithStatisticId(StatisticIdT&& value) { SetStatisticId(std::forward<StatisticIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Profile ID.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    GetDataQualityModelRequest& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_statisticId;
    bool m_statisticIdHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
