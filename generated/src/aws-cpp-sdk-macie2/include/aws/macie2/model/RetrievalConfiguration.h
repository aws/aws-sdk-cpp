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


    ///@{
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
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline RetrievalConfiguration& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline RetrievalConfiguration& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline RetrievalConfiguration& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access method that's used to retrieve sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie
     * (roleName); and, CALLER_CREDENTIALS, use the credentials of the IAM user who
     * requests the sensitive data.</p>
     */
    inline const RetrievalMode& GetRetrievalMode() const{ return m_retrievalMode; }
    inline bool RetrievalModeHasBeenSet() const { return m_retrievalModeHasBeenSet; }
    inline void SetRetrievalMode(const RetrievalMode& value) { m_retrievalModeHasBeenSet = true; m_retrievalMode = value; }
    inline void SetRetrievalMode(RetrievalMode&& value) { m_retrievalModeHasBeenSet = true; m_retrievalMode = std::move(value); }
    inline RetrievalConfiguration& WithRetrievalMode(const RetrievalMode& value) { SetRetrievalMode(value); return *this;}
    inline RetrievalConfiguration& WithRetrievalMode(RetrievalMode&& value) { SetRetrievalMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }
    inline RetrievalConfiguration& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}
    inline RetrievalConfiguration& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}
    inline RetrievalConfiguration& WithRoleName(const char* value) { SetRoleName(value); return *this;}
    ///@}
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
