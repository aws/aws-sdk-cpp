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
    AWS_EMRCONTAINERS_API LakeFormationConfiguration();
    AWS_EMRCONTAINERS_API LakeFormationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API LakeFormationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The session tag to authorize Amazon EMR on EKS for API calls to Lake
     * Formation.</p>
     */
    inline const Aws::String& GetAuthorizedSessionTagValue() const{ return m_authorizedSessionTagValue; }
    inline bool AuthorizedSessionTagValueHasBeenSet() const { return m_authorizedSessionTagValueHasBeenSet; }
    inline void SetAuthorizedSessionTagValue(const Aws::String& value) { m_authorizedSessionTagValueHasBeenSet = true; m_authorizedSessionTagValue = value; }
    inline void SetAuthorizedSessionTagValue(Aws::String&& value) { m_authorizedSessionTagValueHasBeenSet = true; m_authorizedSessionTagValue = std::move(value); }
    inline void SetAuthorizedSessionTagValue(const char* value) { m_authorizedSessionTagValueHasBeenSet = true; m_authorizedSessionTagValue.assign(value); }
    inline LakeFormationConfiguration& WithAuthorizedSessionTagValue(const Aws::String& value) { SetAuthorizedSessionTagValue(value); return *this;}
    inline LakeFormationConfiguration& WithAuthorizedSessionTagValue(Aws::String&& value) { SetAuthorizedSessionTagValue(std::move(value)); return *this;}
    inline LakeFormationConfiguration& WithAuthorizedSessionTagValue(const char* value) { SetAuthorizedSessionTagValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace input of the system job.</p>
     */
    inline const SecureNamespaceInfo& GetSecureNamespaceInfo() const{ return m_secureNamespaceInfo; }
    inline bool SecureNamespaceInfoHasBeenSet() const { return m_secureNamespaceInfoHasBeenSet; }
    inline void SetSecureNamespaceInfo(const SecureNamespaceInfo& value) { m_secureNamespaceInfoHasBeenSet = true; m_secureNamespaceInfo = value; }
    inline void SetSecureNamespaceInfo(SecureNamespaceInfo&& value) { m_secureNamespaceInfoHasBeenSet = true; m_secureNamespaceInfo = std::move(value); }
    inline LakeFormationConfiguration& WithSecureNamespaceInfo(const SecureNamespaceInfo& value) { SetSecureNamespaceInfo(value); return *this;}
    inline LakeFormationConfiguration& WithSecureNamespaceInfo(SecureNamespaceInfo&& value) { SetSecureNamespaceInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query engine IAM role ARN that is tied to the secure Spark job. The
     * <code>QueryEngine</code> role assumes the <code>JobExecutionRole</code> to
     * execute all the Lake Formation calls.</p>
     */
    inline const Aws::String& GetQueryEngineRoleArn() const{ return m_queryEngineRoleArn; }
    inline bool QueryEngineRoleArnHasBeenSet() const { return m_queryEngineRoleArnHasBeenSet; }
    inline void SetQueryEngineRoleArn(const Aws::String& value) { m_queryEngineRoleArnHasBeenSet = true; m_queryEngineRoleArn = value; }
    inline void SetQueryEngineRoleArn(Aws::String&& value) { m_queryEngineRoleArnHasBeenSet = true; m_queryEngineRoleArn = std::move(value); }
    inline void SetQueryEngineRoleArn(const char* value) { m_queryEngineRoleArnHasBeenSet = true; m_queryEngineRoleArn.assign(value); }
    inline LakeFormationConfiguration& WithQueryEngineRoleArn(const Aws::String& value) { SetQueryEngineRoleArn(value); return *this;}
    inline LakeFormationConfiguration& WithQueryEngineRoleArn(Aws::String&& value) { SetQueryEngineRoleArn(std::move(value)); return *this;}
    inline LakeFormationConfiguration& WithQueryEngineRoleArn(const char* value) { SetQueryEngineRoleArn(value); return *this;}
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
