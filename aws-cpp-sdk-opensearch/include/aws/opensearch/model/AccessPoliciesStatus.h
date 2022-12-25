/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/OptionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The configured access rules for the domain's search endpoint, and the current
   * status of those rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AccessPoliciesStatus">AWS
   * API Reference</a></p>
   */
  class AccessPoliciesStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API AccessPoliciesStatus();
    AWS_OPENSEARCHSERVICE_API AccessPoliciesStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AccessPoliciesStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access policy configured for the domain. Access policies can be
     * resource-based, IP-based, or IAM-based. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-access-policies">Configuring
     * access policies</a>.</p>
     */
    inline const Aws::String& GetOptions() const{ return m_options; }

    /**
     * <p>The access policy configured for the domain. Access policies can be
     * resource-based, IP-based, or IAM-based. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-access-policies">Configuring
     * access policies</a>.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The access policy configured for the domain. Access policies can be
     * resource-based, IP-based, or IAM-based. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-access-policies">Configuring
     * access policies</a>.</p>
     */
    inline void SetOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The access policy configured for the domain. Access policies can be
     * resource-based, IP-based, or IAM-based. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-access-policies">Configuring
     * access policies</a>.</p>
     */
    inline void SetOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The access policy configured for the domain. Access policies can be
     * resource-based, IP-based, or IAM-based. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-access-policies">Configuring
     * access policies</a>.</p>
     */
    inline void SetOptions(const char* value) { m_optionsHasBeenSet = true; m_options.assign(value); }

    /**
     * <p>The access policy configured for the domain. Access policies can be
     * resource-based, IP-based, or IAM-based. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-access-policies">Configuring
     * access policies</a>.</p>
     */
    inline AccessPoliciesStatus& WithOptions(const Aws::String& value) { SetOptions(value); return *this;}

    /**
     * <p>The access policy configured for the domain. Access policies can be
     * resource-based, IP-based, or IAM-based. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-access-policies">Configuring
     * access policies</a>.</p>
     */
    inline AccessPoliciesStatus& WithOptions(Aws::String&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The access policy configured for the domain. Access policies can be
     * resource-based, IP-based, or IAM-based. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-access-policies">Configuring
     * access policies</a>.</p>
     */
    inline AccessPoliciesStatus& WithOptions(const char* value) { SetOptions(value); return *this;}


    /**
     * <p>The status of the access policy for the domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the access policy for the domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the access policy for the domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access policy for the domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the access policy for the domain.</p>
     */
    inline AccessPoliciesStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the access policy for the domain.</p>
     */
    inline AccessPoliciesStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
