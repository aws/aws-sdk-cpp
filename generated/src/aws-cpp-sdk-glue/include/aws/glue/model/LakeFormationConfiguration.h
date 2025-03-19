/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies Lake Formation configuration settings for the
   * crawler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/LakeFormationConfiguration">AWS
   * API Reference</a></p>
   */
  class LakeFormationConfiguration
  {
  public:
    AWS_GLUE_API LakeFormationConfiguration() = default;
    AWS_GLUE_API LakeFormationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LakeFormationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to use Lake Formation credentials for the crawler instead
     * of the IAM role credentials.</p>
     */
    inline bool GetUseLakeFormationCredentials() const { return m_useLakeFormationCredentials; }
    inline bool UseLakeFormationCredentialsHasBeenSet() const { return m_useLakeFormationCredentialsHasBeenSet; }
    inline void SetUseLakeFormationCredentials(bool value) { m_useLakeFormationCredentialsHasBeenSet = true; m_useLakeFormationCredentials = value; }
    inline LakeFormationConfiguration& WithUseLakeFormationCredentials(bool value) { SetUseLakeFormationCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    LakeFormationConfiguration& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    bool m_useLakeFormationCredentials{false};
    bool m_useLakeFormationCredentialsHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
