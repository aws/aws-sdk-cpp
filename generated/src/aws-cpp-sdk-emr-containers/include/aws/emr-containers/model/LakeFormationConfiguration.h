/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/SecureNamespaceInfo.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>Lake Formation related configuration inputs for the security
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/LakeFormationConfiguration">AWS
   * API Reference</a></p>
   */
  class LakeFormationConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API LakeFormationConfiguration() = default;
    AWS_EMRCONTAINERS_API LakeFormationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API LakeFormationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The session tag to authorize Amazon EMR on EKS for API calls to Lake
     * Formation.</p>
     */
    inline const Aws::String& GetAuthorizedSessionTagValue() const { return m_authorizedSessionTagValue; }
    inline bool AuthorizedSessionTagValueHasBeenSet() const { return m_authorizedSessionTagValueHasBeenSet; }
    template<typename AuthorizedSessionTagValueT = Aws::String>
    void SetAuthorizedSessionTagValue(AuthorizedSessionTagValueT&& value) { m_authorizedSessionTagValueHasBeenSet = true; m_authorizedSessionTagValue = std::forward<AuthorizedSessionTagValueT>(value); }
    template<typename AuthorizedSessionTagValueT = Aws::String>
    LakeFormationConfiguration& WithAuthorizedSessionTagValue(AuthorizedSessionTagValueT&& value) { SetAuthorizedSessionTagValue(std::forward<AuthorizedSessionTagValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace input of the system job.</p>
     */
    inline const SecureNamespaceInfo& GetSecureNamespaceInfo() const { return m_secureNamespaceInfo; }
    inline bool SecureNamespaceInfoHasBeenSet() const { return m_secureNamespaceInfoHasBeenSet; }
    template<typename SecureNamespaceInfoT = SecureNamespaceInfo>
    void SetSecureNamespaceInfo(SecureNamespaceInfoT&& value) { m_secureNamespaceInfoHasBeenSet = true; m_secureNamespaceInfo = std::forward<SecureNamespaceInfoT>(value); }
    template<typename SecureNamespaceInfoT = SecureNamespaceInfo>
    LakeFormationConfiguration& WithSecureNamespaceInfo(SecureNamespaceInfoT&& value) { SetSecureNamespaceInfo(std::forward<SecureNamespaceInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query engine IAM role ARN that is tied to the secure Spark job. The
     * <code>QueryEngine</code> role assumes the <code>JobExecutionRole</code> to
     * execute all the Lake Formation calls.</p>
     */
    inline const Aws::String& GetQueryEngineRoleArn() const { return m_queryEngineRoleArn; }
    inline bool QueryEngineRoleArnHasBeenSet() const { return m_queryEngineRoleArnHasBeenSet; }
    template<typename QueryEngineRoleArnT = Aws::String>
    void SetQueryEngineRoleArn(QueryEngineRoleArnT&& value) { m_queryEngineRoleArnHasBeenSet = true; m_queryEngineRoleArn = std::forward<QueryEngineRoleArnT>(value); }
    template<typename QueryEngineRoleArnT = Aws::String>
    LakeFormationConfiguration& WithQueryEngineRoleArn(QueryEngineRoleArnT&& value) { SetQueryEngineRoleArn(std::forward<QueryEngineRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizedSessionTagValue;
    bool m_authorizedSessionTagValueHasBeenSet = false;

    SecureNamespaceInfo m_secureNamespaceInfo;
    bool m_secureNamespaceInfoHasBeenSet = false;

    Aws::String m_queryEngineRoleArn;
    bool m_queryEngineRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
