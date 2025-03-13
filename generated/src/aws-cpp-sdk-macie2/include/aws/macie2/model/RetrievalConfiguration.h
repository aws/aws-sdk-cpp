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
    AWS_MACIE2_API RetrievalConfiguration() = default;
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
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    RetrievalConfiguration& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access method that's used to retrieve sensitive data from affected S3
     * objects. Valid values are: ASSUME_ROLE, assume an IAM role that is in the
     * affected Amazon Web Services account and delegates access to Amazon Macie
     * (roleName); and, CALLER_CREDENTIALS, use the credentials of the IAM user who
     * requests the sensitive data.</p>
     */
    inline RetrievalMode GetRetrievalMode() const { return m_retrievalMode; }
    inline bool RetrievalModeHasBeenSet() const { return m_retrievalModeHasBeenSet; }
    inline void SetRetrievalMode(RetrievalMode value) { m_retrievalModeHasBeenSet = true; m_retrievalMode = value; }
    inline RetrievalConfiguration& WithRetrievalMode(RetrievalMode value) { SetRetrievalMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. This value is null if the value for
     * retrievalMode is CALLER_CREDENTIALS.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    RetrievalConfiguration& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    RetrievalMode m_retrievalMode{RetrievalMode::NOT_SET};
    bool m_retrievalModeHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
