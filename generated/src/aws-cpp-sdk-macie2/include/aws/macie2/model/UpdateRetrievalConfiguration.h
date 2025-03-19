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
   * options for retrieving sensitive data samples</a> in the <i>Amazon Macie User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateRetrievalConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateRetrievalConfiguration
  {
  public:
    AWS_MACIE2_API UpdateRetrievalConfiguration() = default;
    AWS_MACIE2_API UpdateRetrievalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UpdateRetrievalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline RetrievalMode GetRetrievalMode() const { return m_retrievalMode; }
    inline bool RetrievalModeHasBeenSet() const { return m_retrievalModeHasBeenSet; }
    inline void SetRetrievalMode(RetrievalMode value) { m_retrievalModeHasBeenSet = true; m_retrievalMode = value; }
    inline UpdateRetrievalConfiguration& WithRetrievalMode(RetrievalMode value) { SetRetrievalMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role that is in the affected Amazon Web Services account
     * and Amazon Macie is allowed to assume when retrieving sensitive data from
     * affected S3 objects for the account. The trust and permissions policies for the
     * role must meet all requirements for Macie to assume the role.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    UpdateRetrievalConfiguration& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}
  private:

    RetrievalMode m_retrievalMode{RetrievalMode::NOT_SET};
    bool m_retrievalModeHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
