/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An object that represents the authorizations granted to aggregator accounts
   * and regions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregationAuthorization">AWS
   * API Reference</a></p>
   */
  class AggregationAuthorization
  {
  public:
    AWS_CONFIGSERVICE_API AggregationAuthorization() = default;
    AWS_CONFIGSERVICE_API AggregationAuthorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregationAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline const Aws::String& GetAggregationAuthorizationArn() const { return m_aggregationAuthorizationArn; }
    inline bool AggregationAuthorizationArnHasBeenSet() const { return m_aggregationAuthorizationArnHasBeenSet; }
    template<typename AggregationAuthorizationArnT = Aws::String>
    void SetAggregationAuthorizationArn(AggregationAuthorizationArnT&& value) { m_aggregationAuthorizationArnHasBeenSet = true; m_aggregationAuthorizationArn = std::forward<AggregationAuthorizationArnT>(value); }
    template<typename AggregationAuthorizationArnT = Aws::String>
    AggregationAuthorization& WithAggregationAuthorizationArn(AggregationAuthorizationArnT&& value) { SetAggregationAuthorizationArn(std::forward<AggregationAuthorizationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline const Aws::String& GetAuthorizedAccountId() const { return m_authorizedAccountId; }
    inline bool AuthorizedAccountIdHasBeenSet() const { return m_authorizedAccountIdHasBeenSet; }
    template<typename AuthorizedAccountIdT = Aws::String>
    void SetAuthorizedAccountId(AuthorizedAccountIdT&& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = std::forward<AuthorizedAccountIdT>(value); }
    template<typename AuthorizedAccountIdT = Aws::String>
    AggregationAuthorization& WithAuthorizedAccountId(AuthorizedAccountIdT&& value) { SetAuthorizedAccountId(std::forward<AuthorizedAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline const Aws::String& GetAuthorizedAwsRegion() const { return m_authorizedAwsRegion; }
    inline bool AuthorizedAwsRegionHasBeenSet() const { return m_authorizedAwsRegionHasBeenSet; }
    template<typename AuthorizedAwsRegionT = Aws::String>
    void SetAuthorizedAwsRegion(AuthorizedAwsRegionT&& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = std::forward<AuthorizedAwsRegionT>(value); }
    template<typename AuthorizedAwsRegionT = Aws::String>
    AggregationAuthorization& WithAuthorizedAwsRegion(AuthorizedAwsRegionT&& value) { SetAuthorizedAwsRegion(std::forward<AuthorizedAwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the aggregation authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AggregationAuthorization& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aggregationAuthorizationArn;
    bool m_aggregationAuthorizationArnHasBeenSet = false;

    Aws::String m_authorizedAccountId;
    bool m_authorizedAccountIdHasBeenSet = false;

    Aws::String m_authorizedAwsRegion;
    bool m_authorizedAwsRegionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
