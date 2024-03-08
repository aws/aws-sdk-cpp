/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/RetrievalMode.h>
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
   * <p>Provides information about the access method and settings that are used to
   * retrieve occurrences of sensitive data reported by findings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/RetrievalConfiguration">AWS
   * API Reference</a></p>
   */
  class RetrievalConfiguration
  {
  public:
    AWS_MACIE2_API RetrievalConfiguration();
    AWS_MACIE2_API RetrievalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API RetrievalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The external ID to specify in the trust policy for the IAM role to assume
     * when retrieving sensitive data from affected S3 objects (roleName). This value
     * is null if the value for retrievalMode is CALLER_CREDENTIALS.</p> <p>This ID is
     * a unique alphanumeric string that Amazon Macie generates automatically after you
     * configure it to assume an IAM role. For a Macie administrator to retrieve
     * sensitive data from an affected S3 object for a member account, the trust policy
     * for the role in the member account must include an sts:ExternalId condition that
     * requires this ID.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID to specify in the trust policy for the IAM role to assume
     * when retrieving sensitive data from affected S3 objects (roleName). This value
     * is null if the value for retrievalMode is CALLER_CREDENTIALS.</p> <p>This ID is
     * a unique alphanumeric string that Amazon Macie generates automatically after you
     * configure it to assume an IAM role. For a Macie administrator to retrieve
     * sensitive data from an affected S3 object for a member account, the trust policy
     * for the role in the member account must include an sts:ExternalId condition that
     * requires this ID.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID to specify in the trust policy for the IAM role to assume
     * when retrieving sensitive data from affected S3 objects (roleName). This value
     * is null if the value for retrievalMode is CALLER_CREDENTIALS.</p> <p>This ID is
     * a unique alphanumeric string that Amazon Macie generates automatically after you
     * configure it to assume an IAM role. For a Macie administrator to retrieve
     * sensitive data from an affected S3 object for a member account, the trust policy
     * for the role in the member account must include an sts:ExternalId condition that
     * requires this ID.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID to specify in the trust policy for the IAM role to assume
     * when retrieving sensitive data from affected S3 objects (roleName). This value
     * is null if the value for retrievalMode is CALLER_CREDENTIALS.</p> <p>This ID is
     * a unique alphanumeric string that Amazon Macie generates automatically after you
     * configure it to assume an IAM role. For a Macie administrator to retrieve
     * sensitive data from an affected S3 object for a member account, the trust policy
     * for the role in the member account must include an sts:ExternalId condition that
     * requires this ID.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID to specify in the trust policy for the IAM role to assume
     * when retrieving sensitive data from affected S3 objects (roleName). This value
     * is null if the value for retrievalMode is CALLER_CREDENTIALS.</p> <p>This ID is
     * a unique alphanumeric string that Amazon Macie generates automatically after you
     * configure it to assume an IAM role. For a Macie administrator to retrieve
     * sensitive data from an affected S3 object for a member account, the trust policy
     * for the role in the member account must include an sts:ExternalId condition that
     * requires this ID.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID to specify in the trust policy for the IAM role to assume
     * when retrieving sensitive data from affected S3 objects (roleName). This value
     * is null if the value for retrievalMode is CALLER_CREDENTIALS.</p> <p>This ID is
     * a unique alphanumeric string that Amazon Macie generates automatically after you
     * configure it to assume an IAM role. For a Macie administrator to retrieve
     * sensitive data from an affected S3 object for a member account, the trust policy
     * for the role in the member account must include an sts:ExternalId condition that
     * requires this ID.</p>
     */
    inline RetrievalConfiguration& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID to specify in the trust policy for the IAM role to assume
     * when retrieving sensitive data from affected S3 objects (roleName). This value
     * is null if the value for retrievalMode is CALLER_CREDENTIALS.</p> <p>This ID is
     * a unique alphanumeric string that Amazon Macie generates automatically after you
     * configure it to assume an IAM role. For a Macie administrator to retrieve
     * sensitive data from an affected S3 object for a member account, the trust policy
     * for the role in the member account must include an sts:ExternalId condition that
     * requires this ID.</p>
     */
    inline RetrievalConfiguration& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID to specify in the trust policy for the IAM role to assume
     * when retrieving sensitive data from affected S3 objects (roleName). This value
     * is null if the value for retrievalMode is CALLER_CREDENTIALS.</p> <p>This ID is
     * a unique alphanumeric string that Amazon Macie generates automatically after you
     * configure it to assume an IAM role. For a Macie administrator to retrieve
     * sensitive data from an affected S3 object for a member account, the trust policy
     * for the role in the member account must include an sts:ExternalId condition that
     * requires this ID.</p>
     */
    inline RetrievalConfiguration& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The access method that's used to retrieve sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie
     * (roleName); and, CALLER_CREDENTIALS, use the credentials of the IAM user who
     * requests the sensitive data.</p>
     */
    inline const RetrievalMode& GetRetrievalMode() const{ return m_retrievalMode; }

    /**
     * <p>The access method that's used to retrieve sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie
     * (roleName); and, CALLER_CREDENTIALS, use the credentials of the IAM user who
     * requests the sensitive data.</p>
     */
    inline bool RetrievalModeHasBeenSet() const { return m_retrievalModeHasBeenSet; }

    /**
     * <p>The access method that's used to retrieve sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie
     * (roleName); and, CALLER_CREDENTIALS, use the credentials of the IAM user who
     * requests the sensitive data.</p>
     */
    inline void SetRetrievalMode(const RetrievalMode& value) { m_retrievalModeHasBeenSet = true; m_retrievalMode = value; }

    /**
     * <p>The access method that's used to retrieve sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie
     * (roleName); and, CALLER_CREDENTIALS, use the credentials of the IAM user who
     * requests the sensitive data.</p>
     */
    inline void SetRetrievalMode(RetrievalMode&& value) { m_retrievalModeHasBeenSet = true; m_retrievalMode = std::move(value); }

    /**
     * <p>The access method that's used to retrieve sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie
     * (roleName); and, CALLER_CREDENTIALS, use the credentials of the IAM user who
     * requests the sensitive data.</p>
     */
    inline RetrievalConfiguration& WithRetrievalMode(const RetrievalMode& value) { SetRetrievalMode(value); return *this;}

    /**
     * <p>The access method that's used to retrieve sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie
     * (roleName); and, CALLER_CREDENTIALS, use the credentials of the IAM user who
     * requests the sensitive data.</p>
     */
    inline RetrievalConfiguration& WithRetrievalMode(RetrievalMode&& value) { SetRetrievalMode(std::move(value)); return *this;}


    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline RetrievalConfiguration& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline RetrievalConfiguration& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline RetrievalConfiguration& WithRoleName(const char* value) { SetRoleName(value); return *this;}

  private:

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    RetrievalMode m_retrievalMode;
    bool m_retrievalModeHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
