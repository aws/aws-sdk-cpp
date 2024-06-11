﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/OptionStatus.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>The configured access rules for the domain's document and search endpoints,
   * and the current status of those rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AccessPoliciesStatus">AWS
   * API Reference</a></p>
   */
  class AccessPoliciesStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AccessPoliciesStatus();
    AWS_ELASTICSEARCHSERVICE_API AccessPoliciesStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AccessPoliciesStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access policy configured for the Elasticsearch domain. Access policies
     * may be resource-based, IP-based, or IAM-based. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-access-policies"
     * target="_blank"> Configuring Access Policies</a>for more information.</p>
     */
    inline const Aws::String& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline void SetOptions(const char* value) { m_optionsHasBeenSet = true; m_options.assign(value); }
    inline AccessPoliciesStatus& WithOptions(const Aws::String& value) { SetOptions(value); return *this;}
    inline AccessPoliciesStatus& WithOptions(Aws::String&& value) { SetOptions(std::move(value)); return *this;}
    inline AccessPoliciesStatus& WithOptions(const char* value) { SetOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the access policy for the Elasticsearch domain. See
     * <code>OptionStatus</code> for the status information that's included. </p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AccessPoliciesStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}
    inline AccessPoliciesStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
