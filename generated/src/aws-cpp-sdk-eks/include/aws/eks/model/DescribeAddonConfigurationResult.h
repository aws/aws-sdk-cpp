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
    AWS_EKS_API DescribeAddonConfigurationResult();
    AWS_EKS_API DescribeAddonConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DescribeAddonConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline void SetAddonName(const Aws::String& value) { m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonName.assign(value); }
    inline DescribeAddonConfigurationResult& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline DescribeAddonConfigurationResult& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline DescribeAddonConfigurationResult& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersion = value; }
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersion = std::move(value); }
    inline void SetAddonVersion(const char* value) { m_addonVersion.assign(value); }
    inline DescribeAddonConfigurationResult& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}
    inline DescribeAddonConfigurationResult& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}
    inline DescribeAddonConfigurationResult& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON schema that's used to validate the configuration values you provide
     * when an add-on is created or updated.</p>
     */
    inline const Aws::String& GetConfigurationSchema() const{ return m_configurationSchema; }
    inline void SetConfigurationSchema(const Aws::String& value) { m_configurationSchema = value; }
    inline void SetConfigurationSchema(Aws::String&& value) { m_configurationSchema = std::move(value); }
    inline void SetConfigurationSchema(const char* value) { m_configurationSchema.assign(value); }
    inline DescribeAddonConfigurationResult& WithConfigurationSchema(const Aws::String& value) { SetConfigurationSchema(value); return *this;}
    inline DescribeAddonConfigurationResult& WithConfigurationSchema(Aws::String&& value) { SetConfigurationSchema(std::move(value)); return *this;}
    inline DescribeAddonConfigurationResult& WithConfigurationSchema(const char* value) { SetConfigurationSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes service account name used by the addon, and any suggested IAM
     * policies. Use this information to create an IAM Role for the Addon.</p>
     */
    inline const Aws::Vector<AddonPodIdentityConfiguration>& GetPodIdentityConfiguration() const{ return m_podIdentityConfiguration; }
    inline void SetPodIdentityConfiguration(const Aws::Vector<AddonPodIdentityConfiguration>& value) { m_podIdentityConfiguration = value; }
    inline void SetPodIdentityConfiguration(Aws::Vector<AddonPodIdentityConfiguration>&& value) { m_podIdentityConfiguration = std::move(value); }
    inline DescribeAddonConfigurationResult& WithPodIdentityConfiguration(const Aws::Vector<AddonPodIdentityConfiguration>& value) { SetPodIdentityConfiguration(value); return *this;}
    inline DescribeAddonConfigurationResult& WithPodIdentityConfiguration(Aws::Vector<AddonPodIdentityConfiguration>&& value) { SetPodIdentityConfiguration(std::move(value)); return *this;}
    inline DescribeAddonConfigurationResult& AddPodIdentityConfiguration(const AddonPodIdentityConfiguration& value) { m_podIdentityConfiguration.push_back(value); return *this; }
    inline DescribeAddonConfigurationResult& AddPodIdentityConfiguration(AddonPodIdentityConfiguration&& value) { m_podIdentityConfiguration.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAddonConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAddonConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAddonConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_addonName;

    Aws::String m_addonVersion;

    Aws::String m_configurationSchema;

    Aws::Vector<AddonPodIdentityConfiguration> m_podIdentityConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
