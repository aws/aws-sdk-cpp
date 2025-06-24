/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AddonPodIdentityConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{
  class DescribeAddonConfigurationResult
  {
  public:
    AWS_EKS_API DescribeAddonConfigurationResult() = default;
    AWS_EKS_API DescribeAddonConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeAddonConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    DescribeAddonConfigurationResult& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const { return m_addonVersion; }
    template<typename AddonVersionT = Aws::String>
    void SetAddonVersion(AddonVersionT&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::forward<AddonVersionT>(value); }
    template<typename AddonVersionT = Aws::String>
    DescribeAddonConfigurationResult& WithAddonVersion(AddonVersionT&& value) { SetAddonVersion(std::forward<AddonVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON schema that's used to validate the configuration values you provide
     * when an add-on is created or updated.</p>
     */
    inline const Aws::String& GetConfigurationSchema() const { return m_configurationSchema; }
    template<typename ConfigurationSchemaT = Aws::String>
    void SetConfigurationSchema(ConfigurationSchemaT&& value) { m_configurationSchemaHasBeenSet = true; m_configurationSchema = std::forward<ConfigurationSchemaT>(value); }
    template<typename ConfigurationSchemaT = Aws::String>
    DescribeAddonConfigurationResult& WithConfigurationSchema(ConfigurationSchemaT&& value) { SetConfigurationSchema(std::forward<ConfigurationSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes service account name used by the add-on, and any suggested IAM
     * policies. Use this information to create an IAM Role for the add-on.</p>
     */
    inline const Aws::Vector<AddonPodIdentityConfiguration>& GetPodIdentityConfiguration() const { return m_podIdentityConfiguration; }
    template<typename PodIdentityConfigurationT = Aws::Vector<AddonPodIdentityConfiguration>>
    void SetPodIdentityConfiguration(PodIdentityConfigurationT&& value) { m_podIdentityConfigurationHasBeenSet = true; m_podIdentityConfiguration = std::forward<PodIdentityConfigurationT>(value); }
    template<typename PodIdentityConfigurationT = Aws::Vector<AddonPodIdentityConfiguration>>
    DescribeAddonConfigurationResult& WithPodIdentityConfiguration(PodIdentityConfigurationT&& value) { SetPodIdentityConfiguration(std::forward<PodIdentityConfigurationT>(value)); return *this;}
    template<typename PodIdentityConfigurationT = AddonPodIdentityConfiguration>
    DescribeAddonConfigurationResult& AddPodIdentityConfiguration(PodIdentityConfigurationT&& value) { m_podIdentityConfigurationHasBeenSet = true; m_podIdentityConfiguration.emplace_back(std::forward<PodIdentityConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAddonConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet = false;

    Aws::String m_configurationSchema;
    bool m_configurationSchemaHasBeenSet = false;

    Aws::Vector<AddonPodIdentityConfiguration> m_podIdentityConfiguration;
    bool m_podIdentityConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
