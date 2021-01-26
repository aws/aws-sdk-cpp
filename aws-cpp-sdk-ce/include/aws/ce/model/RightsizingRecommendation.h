/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CurrentInstance.h>
#include <aws/ce/model/RightsizingType.h>
#include <aws/ce/model/ModifyRecommendationDetail.h>
#include <aws/ce/model/TerminateRecommendationDetail.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Recommendations to rightsize resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RightsizingRecommendation">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API RightsizingRecommendation
  {
  public:
    RightsizingRecommendation();
    RightsizingRecommendation(Aws::Utils::Json::JsonView jsonValue);
    RightsizingRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline RightsizingRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline RightsizingRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline RightsizingRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> Context regarding the current instance.</p>
     */
    inline const CurrentInstance& GetCurrentInstance() const{ return m_currentInstance; }

    /**
     * <p> Context regarding the current instance.</p>
     */
    inline bool CurrentInstanceHasBeenSet() const { return m_currentInstanceHasBeenSet; }

    /**
     * <p> Context regarding the current instance.</p>
     */
    inline void SetCurrentInstance(const CurrentInstance& value) { m_currentInstanceHasBeenSet = true; m_currentInstance = value; }

    /**
     * <p> Context regarding the current instance.</p>
     */
    inline void SetCurrentInstance(CurrentInstance&& value) { m_currentInstanceHasBeenSet = true; m_currentInstance = std::move(value); }

    /**
     * <p> Context regarding the current instance.</p>
     */
    inline RightsizingRecommendation& WithCurrentInstance(const CurrentInstance& value) { SetCurrentInstance(value); return *this;}

    /**
     * <p> Context regarding the current instance.</p>
     */
    inline RightsizingRecommendation& WithCurrentInstance(CurrentInstance&& value) { SetCurrentInstance(std::move(value)); return *this;}


    /**
     * <p>Recommendation to either terminate or modify the resource.</p>
     */
    inline const RightsizingType& GetRightsizingType() const{ return m_rightsizingType; }

    /**
     * <p>Recommendation to either terminate or modify the resource.</p>
     */
    inline bool RightsizingTypeHasBeenSet() const { return m_rightsizingTypeHasBeenSet; }

    /**
     * <p>Recommendation to either terminate or modify the resource.</p>
     */
    inline void SetRightsizingType(const RightsizingType& value) { m_rightsizingTypeHasBeenSet = true; m_rightsizingType = value; }

    /**
     * <p>Recommendation to either terminate or modify the resource.</p>
     */
    inline void SetRightsizingType(RightsizingType&& value) { m_rightsizingTypeHasBeenSet = true; m_rightsizingType = std::move(value); }

    /**
     * <p>Recommendation to either terminate or modify the resource.</p>
     */
    inline RightsizingRecommendation& WithRightsizingType(const RightsizingType& value) { SetRightsizingType(value); return *this;}

    /**
     * <p>Recommendation to either terminate or modify the resource.</p>
     */
    inline RightsizingRecommendation& WithRightsizingType(RightsizingType&& value) { SetRightsizingType(std::move(value)); return *this;}


    /**
     * <p> Details for modification recommendations. </p>
     */
    inline const ModifyRecommendationDetail& GetModifyRecommendationDetail() const{ return m_modifyRecommendationDetail; }

    /**
     * <p> Details for modification recommendations. </p>
     */
    inline bool ModifyRecommendationDetailHasBeenSet() const { return m_modifyRecommendationDetailHasBeenSet; }

    /**
     * <p> Details for modification recommendations. </p>
     */
    inline void SetModifyRecommendationDetail(const ModifyRecommendationDetail& value) { m_modifyRecommendationDetailHasBeenSet = true; m_modifyRecommendationDetail = value; }

    /**
     * <p> Details for modification recommendations. </p>
     */
    inline void SetModifyRecommendationDetail(ModifyRecommendationDetail&& value) { m_modifyRecommendationDetailHasBeenSet = true; m_modifyRecommendationDetail = std::move(value); }

    /**
     * <p> Details for modification recommendations. </p>
     */
    inline RightsizingRecommendation& WithModifyRecommendationDetail(const ModifyRecommendationDetail& value) { SetModifyRecommendationDetail(value); return *this;}

    /**
     * <p> Details for modification recommendations. </p>
     */
    inline RightsizingRecommendation& WithModifyRecommendationDetail(ModifyRecommendationDetail&& value) { SetModifyRecommendationDetail(std::move(value)); return *this;}


    /**
     * <p>Details for termination recommendations.</p>
     */
    inline const TerminateRecommendationDetail& GetTerminateRecommendationDetail() const{ return m_terminateRecommendationDetail; }

    /**
     * <p>Details for termination recommendations.</p>
     */
    inline bool TerminateRecommendationDetailHasBeenSet() const { return m_terminateRecommendationDetailHasBeenSet; }

    /**
     * <p>Details for termination recommendations.</p>
     */
    inline void SetTerminateRecommendationDetail(const TerminateRecommendationDetail& value) { m_terminateRecommendationDetailHasBeenSet = true; m_terminateRecommendationDetail = value; }

    /**
     * <p>Details for termination recommendations.</p>
     */
    inline void SetTerminateRecommendationDetail(TerminateRecommendationDetail&& value) { m_terminateRecommendationDetailHasBeenSet = true; m_terminateRecommendationDetail = std::move(value); }

    /**
     * <p>Details for termination recommendations.</p>
     */
    inline RightsizingRecommendation& WithTerminateRecommendationDetail(const TerminateRecommendationDetail& value) { SetTerminateRecommendationDetail(value); return *this;}

    /**
     * <p>Details for termination recommendations.</p>
     */
    inline RightsizingRecommendation& WithTerminateRecommendationDetail(TerminateRecommendationDetail&& value) { SetTerminateRecommendationDetail(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    CurrentInstance m_currentInstance;
    bool m_currentInstanceHasBeenSet;

    RightsizingType m_rightsizingType;
    bool m_rightsizingTypeHasBeenSet;

    ModifyRecommendationDetail m_modifyRecommendationDetail;
    bool m_modifyRecommendationDetailHasBeenSet;

    TerminateRecommendationDetail m_terminateRecommendationDetail;
    bool m_terminateRecommendationDetailHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
