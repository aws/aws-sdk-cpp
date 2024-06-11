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
    AWS_CONFIGSERVICE_API AggregationAuthorization();
    AWS_CONFIGSERVICE_API AggregationAuthorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregationAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline const Aws::String& GetAggregationAuthorizationArn() const{ return m_aggregationAuthorizationArn; }
    inline bool AggregationAuthorizationArnHasBeenSet() const { return m_aggregationAuthorizationArnHasBeenSet; }
    inline void SetAggregationAuthorizationArn(const Aws::String& value) { m_aggregationAuthorizationArnHasBeenSet = true; m_aggregationAuthorizationArn = value; }
    inline void SetAggregationAuthorizationArn(Aws::String&& value) { m_aggregationAuthorizationArnHasBeenSet = true; m_aggregationAuthorizationArn = std::move(value); }
    inline void SetAggregationAuthorizationArn(const char* value) { m_aggregationAuthorizationArnHasBeenSet = true; m_aggregationAuthorizationArn.assign(value); }
    inline AggregationAuthorization& WithAggregationAuthorizationArn(const Aws::String& value) { SetAggregationAuthorizationArn(value); return *this;}
    inline AggregationAuthorization& WithAggregationAuthorizationArn(Aws::String&& value) { SetAggregationAuthorizationArn(std::move(value)); return *this;}
    inline AggregationAuthorization& WithAggregationAuthorizationArn(const char* value) { SetAggregationAuthorizationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline const Aws::String& GetAuthorizedAccountId() const{ return m_authorizedAccountId; }
    inline bool AuthorizedAccountIdHasBeenSet() const { return m_authorizedAccountIdHasBeenSet; }
    inline void SetAuthorizedAccountId(const Aws::String& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = value; }
    inline void SetAuthorizedAccountId(Aws::String&& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = std::move(value); }
    inline void SetAuthorizedAccountId(const char* value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId.assign(value); }
    inline AggregationAuthorization& WithAuthorizedAccountId(const Aws::String& value) { SetAuthorizedAccountId(value); return *this;}
    inline AggregationAuthorization& WithAuthorizedAccountId(Aws::String&& value) { SetAuthorizedAccountId(std::move(value)); return *this;}
    inline AggregationAuthorization& WithAuthorizedAccountId(const char* value) { SetAuthorizedAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline const Aws::String& GetAuthorizedAwsRegion() const{ return m_authorizedAwsRegion; }
    inline bool AuthorizedAwsRegionHasBeenSet() const { return m_authorizedAwsRegionHasBeenSet; }
    inline void SetAuthorizedAwsRegion(const Aws::String& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = value; }
    inline void SetAuthorizedAwsRegion(Aws::String&& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = std::move(value); }
    inline void SetAuthorizedAwsRegion(const char* value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion.assign(value); }
    inline AggregationAuthorization& WithAuthorizedAwsRegion(const Aws::String& value) { SetAuthorizedAwsRegion(value); return *this;}
    inline AggregationAuthorization& WithAuthorizedAwsRegion(Aws::String&& value) { SetAuthorizedAwsRegion(std::move(value)); return *this;}
    inline AggregationAuthorization& WithAuthorizedAwsRegion(const char* value) { SetAuthorizedAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the aggregation authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AggregationAuthorization& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AggregationAuthorization& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_aggregationAuthorizationArn;
    bool m_aggregationAuthorizationArnHasBeenSet = false;

    Aws::String m_authorizedAccountId;
    bool m_authorizedAccountIdHasBeenSet = false;

    Aws::String m_authorizedAwsRegion;
    bool m_authorizedAwsRegionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
