/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TelephonyConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{
  class GetTrafficDistributionResult
  {
  public:
    AWS_CONNECT_API GetTrafficDistributionResult();
    AWS_CONNECT_API GetTrafficDistributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetTrafficDistributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The distribution of traffic between the instance and its replicas.</p>
     */
    inline const TelephonyConfig& GetTelephonyConfig() const{ return m_telephonyConfig; }

    /**
     * <p>The distribution of traffic between the instance and its replicas.</p>
     */
    inline void SetTelephonyConfig(const TelephonyConfig& value) { m_telephonyConfig = value; }

    /**
     * <p>The distribution of traffic between the instance and its replicas.</p>
     */
    inline void SetTelephonyConfig(TelephonyConfig&& value) { m_telephonyConfig = std::move(value); }

    /**
     * <p>The distribution of traffic between the instance and its replicas.</p>
     */
    inline GetTrafficDistributionResult& WithTelephonyConfig(const TelephonyConfig& value) { SetTelephonyConfig(value); return *this;}

    /**
     * <p>The distribution of traffic between the instance and its replicas.</p>
     */
    inline GetTrafficDistributionResult& WithTelephonyConfig(TelephonyConfig&& value) { SetTelephonyConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline GetTrafficDistributionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline GetTrafficDistributionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN if the API is being called in the Region where the traffic distribution
     * group was created. The ARN must be provided if the call is from the replicated
     * Region.</p>
     */
    inline GetTrafficDistributionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline GetTrafficDistributionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline GetTrafficDistributionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic distribution group.</p>
     */
    inline GetTrafficDistributionResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    TelephonyConfig m_telephonyConfig;

    Aws::String m_id;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
