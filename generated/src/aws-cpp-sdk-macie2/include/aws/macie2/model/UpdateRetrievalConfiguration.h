/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/RetrievalMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the access method and settings to use when retrieving occurrences
   * of sensitive data reported by findings. If your request specifies an Identity
   * and Access Management (IAM) role to assume, Amazon Macie verifies that the role
   * exists and the attached policies are configured correctly. If there's an issue,
   * Macie returns an error. For information about addressing the issue, see <a
   * href="https://docs.aws.amazon.com/macie/latest/user/findings-retrieve-sd-options.html">Configuration
   * options and requirements for retrieving sensitive data samples</a> in the
   * <i>Amazon Macie User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateRetrievalConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateRetrievalConfiguration
  {
  public:
    AWS_MACIE2_API UpdateRetrievalConfiguration();
    AWS_MACIE2_API UpdateRetrievalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UpdateRetrievalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access method to use when retrieving sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie; and,
     * CALLER_CREDENTIALS, use the credentials of the IAM user who requests the
     * sensitive data. If you specify ASSUME_ROLE, also specify the name of an existing
     * IAM role for Macie to assume (roleName).</p> <p>If you change this
     * value from ASSUME_ROLE to CALLER_CREDENTIALS for an existing configuration,
     * Macie permanently deletes the external ID and role name currently specified for
     * the configuration. These settings can't be recovered after they're
     * deleted.</p>
     */
    inline const RetrievalMode& GetRetrievalMode() const{ return m_retrievalMode; }

    /**
     * <p>The access method to use when retrieving sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie; and,
     * CALLER_CREDENTIALS, use the credentials of the IAM user who requests the
     * sensitive data. If you specify ASSUME_ROLE, also specify the name of an existing
     * IAM role for Macie to assume (roleName).</p> <p>If you change this
     * value from ASSUME_ROLE to CALLER_CREDENTIALS for an existing configuration,
     * Macie permanently deletes the external ID and role name currently specified for
     * the configuration. These settings can't be recovered after they're
     * deleted.</p>
     */
    inline bool RetrievalModeHasBeenSet() const { return m_retrievalModeHasBeenSet; }

    /**
     * <p>The access method to use when retrieving sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie; and,
     * CALLER_CREDENTIALS, use the credentials of the IAM user who requests the
     * sensitive data. If you specify ASSUME_ROLE, also specify the name of an existing
     * IAM role for Macie to assume (roleName).</p> <p>If you change this
     * value from ASSUME_ROLE to CALLER_CREDENTIALS for an existing configuration,
     * Macie permanently deletes the external ID and role name currently specified for
     * the configuration. These settings can't be recovered after they're
     * deleted.</p>
     */
    inline void SetRetrievalMode(const RetrievalMode& value) { m_retrievalModeHasBeenSet = true; m_retrievalMode = value; }

    /**
     * <p>The access method to use when retrieving sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie; and,
     * CALLER_CREDENTIALS, use the credentials of the IAM user who requests the
     * sensitive data. If you specify ASSUME_ROLE, also specify the name of an existing
     * IAM role for Macie to assume (roleName).</p> <p>If you change this
     * value from ASSUME_ROLE to CALLER_CREDENTIALS for an existing configuration,
     * Macie permanently deletes the external ID and role name currently specified for
     * the configuration. These settings can't be recovered after they're
     * deleted.</p>
     */
    inline void SetRetrievalMode(RetrievalMode&& value) { m_retrievalModeHasBeenSet = true; m_retrievalMode = std::move(value); }

    /**
     * <p>The access method to use when retrieving sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie; and,
     * CALLER_CREDENTIALS, use the credentials of the IAM user who requests the
     * sensitive data. If you specify ASSUME_ROLE, also specify the name of an existing
     * IAM role for Macie to assume (roleName).</p> <p>If you change this
     * value from ASSUME_ROLE to CALLER_CREDENTIALS for an existing configuration,
     * Macie permanently deletes the external ID and role name currently specified for
     * the configuration. These settings can't be recovered after they're
     * deleted.</p>
     */
    inline UpdateRetrievalConfiguration& WithRetrievalMode(const RetrievalMode& value) { SetRetrievalMode(value); return *this;}

    /**
     * <p>The access method to use when retrieving sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie; and,
     * CALLER_CREDENTIALS, use the credentials of the IAM user who requests the
     * sensitive data. If you specify ASSUME_ROLE, also specify the name of an existing
     * IAM role for Macie to assume (roleName).</p> <p>If you change this
     * value from ASSUME_ROLE to CALLER_CREDENTIALS for an existing configuration,
     * Macie permanently deletes the external ID and role name currently specified for
     * the configuration. These settings can't be recovered after they're
     * deleted.</p>
     */
    inline UpdateRetrievalConfiguration& WithRetrievalMode(RetrievalMode&& value) { SetRetrievalMode(std::move(value)); return *this;}


    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline UpdateRetrievalConfiguration& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline UpdateRetrievalConfiguration& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline UpdateRetrievalConfiguration& WithRoleName(const char* value) { SetRoleName(value); return *this;}

  private:

    RetrievalMode m_retrievalMode;
    bool m_retrievalModeHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
