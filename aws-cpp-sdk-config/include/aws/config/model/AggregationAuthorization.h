﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API AggregationAuthorization
  {
  public:
    AggregationAuthorization();
    AggregationAuthorization(Aws::Utils::Json::JsonView jsonValue);
    AggregationAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline const Aws::String& GetAggregationAuthorizationArn() const{ return m_aggregationAuthorizationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline void SetAggregationAuthorizationArn(const Aws::String& value) { m_aggregationAuthorizationArnHasBeenSet = true; m_aggregationAuthorizationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline void SetAggregationAuthorizationArn(Aws::String&& value) { m_aggregationAuthorizationArnHasBeenSet = true; m_aggregationAuthorizationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline void SetAggregationAuthorizationArn(const char* value) { m_aggregationAuthorizationArnHasBeenSet = true; m_aggregationAuthorizationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline AggregationAuthorization& WithAggregationAuthorizationArn(const Aws::String& value) { SetAggregationAuthorizationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline AggregationAuthorization& WithAggregationAuthorizationArn(Aws::String&& value) { SetAggregationAuthorizationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the aggregation object.</p>
     */
    inline AggregationAuthorization& WithAggregationAuthorizationArn(const char* value) { SetAggregationAuthorizationArn(value); return *this;}


    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline const Aws::String& GetAuthorizedAccountId() const{ return m_authorizedAccountId; }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline void SetAuthorizedAccountId(const Aws::String& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = value; }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline void SetAuthorizedAccountId(Aws::String&& value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId = std::move(value); }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline void SetAuthorizedAccountId(const char* value) { m_authorizedAccountIdHasBeenSet = true; m_authorizedAccountId.assign(value); }

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline AggregationAuthorization& WithAuthorizedAccountId(const Aws::String& value) { SetAuthorizedAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline AggregationAuthorization& WithAuthorizedAccountId(Aws::String&& value) { SetAuthorizedAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of the account authorized to aggregate data.</p>
     */
    inline AggregationAuthorization& WithAuthorizedAccountId(const char* value) { SetAuthorizedAccountId(value); return *this;}


    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline const Aws::String& GetAuthorizedAwsRegion() const{ return m_authorizedAwsRegion; }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline void SetAuthorizedAwsRegion(const Aws::String& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = value; }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline void SetAuthorizedAwsRegion(Aws::String&& value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion = std::move(value); }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline void SetAuthorizedAwsRegion(const char* value) { m_authorizedAwsRegionHasBeenSet = true; m_authorizedAwsRegion.assign(value); }

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline AggregationAuthorization& WithAuthorizedAwsRegion(const Aws::String& value) { SetAuthorizedAwsRegion(value); return *this;}

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline AggregationAuthorization& WithAuthorizedAwsRegion(Aws::String&& value) { SetAuthorizedAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline AggregationAuthorization& WithAuthorizedAwsRegion(const char* value) { SetAuthorizedAwsRegion(value); return *this;}


    /**
     * <p>The time stamp when the aggregation authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time stamp when the aggregation authorization was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time stamp when the aggregation authorization was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time stamp when the aggregation authorization was created.</p>
     */
    inline AggregationAuthorization& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time stamp when the aggregation authorization was created.</p>
     */
    inline AggregationAuthorization& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_aggregationAuthorizationArn;
    bool m_aggregationAuthorizationArnHasBeenSet;

    Aws::String m_authorizedAccountId;
    bool m_authorizedAccountIdHasBeenSet;

    Aws::String m_authorizedAwsRegion;
    bool m_authorizedAwsRegionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
