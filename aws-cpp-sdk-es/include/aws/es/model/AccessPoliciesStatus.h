/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/OptionStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>The configured access rules for the domain's document and search endpoints,
   * and the current status of those rules.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API AccessPoliciesStatus
  {
  public:
    AccessPoliciesStatus();
    AccessPoliciesStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    AccessPoliciesStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The access policy configured for the Elasticsearch domain. Access policies
     * may be resource-based, IP-based, or IAM-based. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-access-policies"
     * target="_blank"> Configuring Access Policies</a>for more information.</p>
     */
    inline const Aws::String& GetOptions() const{ return m_options; }

    /**
     * <p>The access policy configured for the Elasticsearch domain. Access policies
     * may be resource-based, IP-based, or IAM-based. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-access-policies"
     * target="_blank"> Configuring Access Policies</a>for more information.</p>
     */
    inline void SetOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The access policy configured for the Elasticsearch domain. Access policies
     * may be resource-based, IP-based, or IAM-based. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-access-policies"
     * target="_blank"> Configuring Access Policies</a>for more information.</p>
     */
    inline void SetOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The access policy configured for the Elasticsearch domain. Access policies
     * may be resource-based, IP-based, or IAM-based. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-access-policies"
     * target="_blank"> Configuring Access Policies</a>for more information.</p>
     */
    inline void SetOptions(const char* value) { m_optionsHasBeenSet = true; m_options.assign(value); }

    /**
     * <p>The access policy configured for the Elasticsearch domain. Access policies
     * may be resource-based, IP-based, or IAM-based. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-access-policies"
     * target="_blank"> Configuring Access Policies</a>for more information.</p>
     */
    inline AccessPoliciesStatus& WithOptions(const Aws::String& value) { SetOptions(value); return *this;}

    /**
     * <p>The access policy configured for the Elasticsearch domain. Access policies
     * may be resource-based, IP-based, or IAM-based. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-access-policies"
     * target="_blank"> Configuring Access Policies</a>for more information.</p>
     */
    inline AccessPoliciesStatus& WithOptions(Aws::String&& value) { SetOptions(value); return *this;}

    /**
     * <p>The access policy configured for the Elasticsearch domain. Access policies
     * may be resource-based, IP-based, or IAM-based. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-access-policies"
     * target="_blank"> Configuring Access Policies</a>for more information.</p>
     */
    inline AccessPoliciesStatus& WithOptions(const char* value) { SetOptions(value); return *this;}

    /**
     * <p>The status of the access policy for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the access policy for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access policy for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access policy for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline AccessPoliciesStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the access policy for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline AccessPoliciesStatus& WithStatus(OptionStatus&& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_options;
    bool m_optionsHasBeenSet;
    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
