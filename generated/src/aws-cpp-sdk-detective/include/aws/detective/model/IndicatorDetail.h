﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/model/TTPsObservedDetail.h>
#include <aws/detective/model/ImpossibleTravelDetail.h>
#include <aws/detective/model/FlaggedIpAddressDetail.h>
#include <aws/detective/model/NewGeolocationDetail.h>
#include <aws/detective/model/NewAsoDetail.h>
#include <aws/detective/model/NewUserAgentDetail.h>
#include <aws/detective/model/RelatedFindingDetail.h>
#include <aws/detective/model/RelatedFindingGroupDetail.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details about the indicators of compromise which are used to determine if a
   * resource is involved in a security incident. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/IndicatorDetail">AWS
   * API Reference</a></p>
   */
  class IndicatorDetail
  {
  public:
    AWS_DETECTIVE_API IndicatorDetail();
    AWS_DETECTIVE_API IndicatorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API IndicatorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the indicator of compromise.</p>
     */
    inline const TTPsObservedDetail& GetTTPsObservedDetail() const{ return m_tTPsObservedDetail; }

    /**
     * <p>Details about the indicator of compromise.</p>
     */
    inline bool TTPsObservedDetailHasBeenSet() const { return m_tTPsObservedDetailHasBeenSet; }

    /**
     * <p>Details about the indicator of compromise.</p>
     */
    inline void SetTTPsObservedDetail(const TTPsObservedDetail& value) { m_tTPsObservedDetailHasBeenSet = true; m_tTPsObservedDetail = value; }

    /**
     * <p>Details about the indicator of compromise.</p>
     */
    inline void SetTTPsObservedDetail(TTPsObservedDetail&& value) { m_tTPsObservedDetailHasBeenSet = true; m_tTPsObservedDetail = std::move(value); }

    /**
     * <p>Details about the indicator of compromise.</p>
     */
    inline IndicatorDetail& WithTTPsObservedDetail(const TTPsObservedDetail& value) { SetTTPsObservedDetail(value); return *this;}

    /**
     * <p>Details about the indicator of compromise.</p>
     */
    inline IndicatorDetail& WithTTPsObservedDetail(TTPsObservedDetail&& value) { SetTTPsObservedDetail(std::move(value)); return *this;}


    /**
     * <p>Identifies unusual and impossible user activity for an account. </p>
     */
    inline const ImpossibleTravelDetail& GetImpossibleTravelDetail() const{ return m_impossibleTravelDetail; }

    /**
     * <p>Identifies unusual and impossible user activity for an account. </p>
     */
    inline bool ImpossibleTravelDetailHasBeenSet() const { return m_impossibleTravelDetailHasBeenSet; }

    /**
     * <p>Identifies unusual and impossible user activity for an account. </p>
     */
    inline void SetImpossibleTravelDetail(const ImpossibleTravelDetail& value) { m_impossibleTravelDetailHasBeenSet = true; m_impossibleTravelDetail = value; }

    /**
     * <p>Identifies unusual and impossible user activity for an account. </p>
     */
    inline void SetImpossibleTravelDetail(ImpossibleTravelDetail&& value) { m_impossibleTravelDetailHasBeenSet = true; m_impossibleTravelDetail = std::move(value); }

    /**
     * <p>Identifies unusual and impossible user activity for an account. </p>
     */
    inline IndicatorDetail& WithImpossibleTravelDetail(const ImpossibleTravelDetail& value) { SetImpossibleTravelDetail(value); return *this;}

    /**
     * <p>Identifies unusual and impossible user activity for an account. </p>
     */
    inline IndicatorDetail& WithImpossibleTravelDetail(ImpossibleTravelDetail&& value) { SetImpossibleTravelDetail(std::move(value)); return *this;}


    /**
     * <p>Suspicious IP addresses that are flagged, which indicates critical or severe
     * threats based on threat intelligence by Detective. This indicator is derived
     * from AWS threat intelligence.</p>
     */
    inline const FlaggedIpAddressDetail& GetFlaggedIpAddressDetail() const{ return m_flaggedIpAddressDetail; }

    /**
     * <p>Suspicious IP addresses that are flagged, which indicates critical or severe
     * threats based on threat intelligence by Detective. This indicator is derived
     * from AWS threat intelligence.</p>
     */
    inline bool FlaggedIpAddressDetailHasBeenSet() const { return m_flaggedIpAddressDetailHasBeenSet; }

    /**
     * <p>Suspicious IP addresses that are flagged, which indicates critical or severe
     * threats based on threat intelligence by Detective. This indicator is derived
     * from AWS threat intelligence.</p>
     */
    inline void SetFlaggedIpAddressDetail(const FlaggedIpAddressDetail& value) { m_flaggedIpAddressDetailHasBeenSet = true; m_flaggedIpAddressDetail = value; }

    /**
     * <p>Suspicious IP addresses that are flagged, which indicates critical or severe
     * threats based on threat intelligence by Detective. This indicator is derived
     * from AWS threat intelligence.</p>
     */
    inline void SetFlaggedIpAddressDetail(FlaggedIpAddressDetail&& value) { m_flaggedIpAddressDetailHasBeenSet = true; m_flaggedIpAddressDetail = std::move(value); }

    /**
     * <p>Suspicious IP addresses that are flagged, which indicates critical or severe
     * threats based on threat intelligence by Detective. This indicator is derived
     * from AWS threat intelligence.</p>
     */
    inline IndicatorDetail& WithFlaggedIpAddressDetail(const FlaggedIpAddressDetail& value) { SetFlaggedIpAddressDetail(value); return *this;}

    /**
     * <p>Suspicious IP addresses that are flagged, which indicates critical or severe
     * threats based on threat intelligence by Detective. This indicator is derived
     * from AWS threat intelligence.</p>
     */
    inline IndicatorDetail& WithFlaggedIpAddressDetail(FlaggedIpAddressDetail&& value) { SetFlaggedIpAddressDetail(std::move(value)); return *this;}


    /**
     * <p>Contains details about the new geographic location.</p>
     */
    inline const NewGeolocationDetail& GetNewGeolocationDetail() const{ return m_newGeolocationDetail; }

    /**
     * <p>Contains details about the new geographic location.</p>
     */
    inline bool NewGeolocationDetailHasBeenSet() const { return m_newGeolocationDetailHasBeenSet; }

    /**
     * <p>Contains details about the new geographic location.</p>
     */
    inline void SetNewGeolocationDetail(const NewGeolocationDetail& value) { m_newGeolocationDetailHasBeenSet = true; m_newGeolocationDetail = value; }

    /**
     * <p>Contains details about the new geographic location.</p>
     */
    inline void SetNewGeolocationDetail(NewGeolocationDetail&& value) { m_newGeolocationDetailHasBeenSet = true; m_newGeolocationDetail = std::move(value); }

    /**
     * <p>Contains details about the new geographic location.</p>
     */
    inline IndicatorDetail& WithNewGeolocationDetail(const NewGeolocationDetail& value) { SetNewGeolocationDetail(value); return *this;}

    /**
     * <p>Contains details about the new geographic location.</p>
     */
    inline IndicatorDetail& WithNewGeolocationDetail(NewGeolocationDetail&& value) { SetNewGeolocationDetail(std::move(value)); return *this;}


    /**
     * <p>Contains details about the new Autonomous System Organization (ASO).</p>
     */
    inline const NewAsoDetail& GetNewAsoDetail() const{ return m_newAsoDetail; }

    /**
     * <p>Contains details about the new Autonomous System Organization (ASO).</p>
     */
    inline bool NewAsoDetailHasBeenSet() const { return m_newAsoDetailHasBeenSet; }

    /**
     * <p>Contains details about the new Autonomous System Organization (ASO).</p>
     */
    inline void SetNewAsoDetail(const NewAsoDetail& value) { m_newAsoDetailHasBeenSet = true; m_newAsoDetail = value; }

    /**
     * <p>Contains details about the new Autonomous System Organization (ASO).</p>
     */
    inline void SetNewAsoDetail(NewAsoDetail&& value) { m_newAsoDetailHasBeenSet = true; m_newAsoDetail = std::move(value); }

    /**
     * <p>Contains details about the new Autonomous System Organization (ASO).</p>
     */
    inline IndicatorDetail& WithNewAsoDetail(const NewAsoDetail& value) { SetNewAsoDetail(value); return *this;}

    /**
     * <p>Contains details about the new Autonomous System Organization (ASO).</p>
     */
    inline IndicatorDetail& WithNewAsoDetail(NewAsoDetail&& value) { SetNewAsoDetail(std::move(value)); return *this;}


    /**
     * <p>Contains details about the new user agent.</p>
     */
    inline const NewUserAgentDetail& GetNewUserAgentDetail() const{ return m_newUserAgentDetail; }

    /**
     * <p>Contains details about the new user agent.</p>
     */
    inline bool NewUserAgentDetailHasBeenSet() const { return m_newUserAgentDetailHasBeenSet; }

    /**
     * <p>Contains details about the new user agent.</p>
     */
    inline void SetNewUserAgentDetail(const NewUserAgentDetail& value) { m_newUserAgentDetailHasBeenSet = true; m_newUserAgentDetail = value; }

    /**
     * <p>Contains details about the new user agent.</p>
     */
    inline void SetNewUserAgentDetail(NewUserAgentDetail&& value) { m_newUserAgentDetailHasBeenSet = true; m_newUserAgentDetail = std::move(value); }

    /**
     * <p>Contains details about the new user agent.</p>
     */
    inline IndicatorDetail& WithNewUserAgentDetail(const NewUserAgentDetail& value) { SetNewUserAgentDetail(value); return *this;}

    /**
     * <p>Contains details about the new user agent.</p>
     */
    inline IndicatorDetail& WithNewUserAgentDetail(NewUserAgentDetail&& value) { SetNewUserAgentDetail(std::move(value)); return *this;}


    /**
     * <p>Contains details about related findings.</p>
     */
    inline const RelatedFindingDetail& GetRelatedFindingDetail() const{ return m_relatedFindingDetail; }

    /**
     * <p>Contains details about related findings.</p>
     */
    inline bool RelatedFindingDetailHasBeenSet() const { return m_relatedFindingDetailHasBeenSet; }

    /**
     * <p>Contains details about related findings.</p>
     */
    inline void SetRelatedFindingDetail(const RelatedFindingDetail& value) { m_relatedFindingDetailHasBeenSet = true; m_relatedFindingDetail = value; }

    /**
     * <p>Contains details about related findings.</p>
     */
    inline void SetRelatedFindingDetail(RelatedFindingDetail&& value) { m_relatedFindingDetailHasBeenSet = true; m_relatedFindingDetail = std::move(value); }

    /**
     * <p>Contains details about related findings.</p>
     */
    inline IndicatorDetail& WithRelatedFindingDetail(const RelatedFindingDetail& value) { SetRelatedFindingDetail(value); return *this;}

    /**
     * <p>Contains details about related findings.</p>
     */
    inline IndicatorDetail& WithRelatedFindingDetail(RelatedFindingDetail&& value) { SetRelatedFindingDetail(std::move(value)); return *this;}


    /**
     * <p>Contains details about related finding groups.</p>
     */
    inline const RelatedFindingGroupDetail& GetRelatedFindingGroupDetail() const{ return m_relatedFindingGroupDetail; }

    /**
     * <p>Contains details about related finding groups.</p>
     */
    inline bool RelatedFindingGroupDetailHasBeenSet() const { return m_relatedFindingGroupDetailHasBeenSet; }

    /**
     * <p>Contains details about related finding groups.</p>
     */
    inline void SetRelatedFindingGroupDetail(const RelatedFindingGroupDetail& value) { m_relatedFindingGroupDetailHasBeenSet = true; m_relatedFindingGroupDetail = value; }

    /**
     * <p>Contains details about related finding groups.</p>
     */
    inline void SetRelatedFindingGroupDetail(RelatedFindingGroupDetail&& value) { m_relatedFindingGroupDetailHasBeenSet = true; m_relatedFindingGroupDetail = std::move(value); }

    /**
     * <p>Contains details about related finding groups.</p>
     */
    inline IndicatorDetail& WithRelatedFindingGroupDetail(const RelatedFindingGroupDetail& value) { SetRelatedFindingGroupDetail(value); return *this;}

    /**
     * <p>Contains details about related finding groups.</p>
     */
    inline IndicatorDetail& WithRelatedFindingGroupDetail(RelatedFindingGroupDetail&& value) { SetRelatedFindingGroupDetail(std::move(value)); return *this;}

  private:

    TTPsObservedDetail m_tTPsObservedDetail;
    bool m_tTPsObservedDetailHasBeenSet = false;

    ImpossibleTravelDetail m_impossibleTravelDetail;
    bool m_impossibleTravelDetailHasBeenSet = false;

    FlaggedIpAddressDetail m_flaggedIpAddressDetail;
    bool m_flaggedIpAddressDetailHasBeenSet = false;

    NewGeolocationDetail m_newGeolocationDetail;
    bool m_newGeolocationDetailHasBeenSet = false;

    NewAsoDetail m_newAsoDetail;
    bool m_newAsoDetailHasBeenSet = false;

    NewUserAgentDetail m_newUserAgentDetail;
    bool m_newUserAgentDetailHasBeenSet = false;

    RelatedFindingDetail m_relatedFindingDetail;
    bool m_relatedFindingDetailHasBeenSet = false;

    RelatedFindingGroupDetail m_relatedFindingGroupDetail;
    bool m_relatedFindingGroupDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
