/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonName = value; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonName = std::move(value); }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetAddonName(const char* value) { m_addonName.assign(value); }

    /**
     * <p>The name of the add-on.</p>
     */
    inline DescribeAddonConfigurationResult& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the add-on.</p>
     */
    inline DescribeAddonConfigurationResult& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the add-on.</p>
     */
    inline DescribeAddonConfigurationResult& WithAddonName(const char* value) { SetAddonName(value); return *this;}


    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersion = value; }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersion = std::move(value); }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline void SetAddonVersion(const char* value) { m_addonVersion.assign(value); }

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline DescribeAddonConfigurationResult& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline DescribeAddonConfigurationResult& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline DescribeAddonConfigurationResult& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}


    /**
     * <p>A JSON schema that's used to validate the configuration values that you
     * provide when an addon is created or updated.</p>
     */
    inline const Aws::String& GetConfigurationSchema() const{ return m_configurationSchema; }

    /**
     * <p>A JSON schema that's used to validate the configuration values that you
     * provide when an addon is created or updated.</p>
     */
    inline void SetConfigurationSchema(const Aws::String& value) { m_configurationSchema = value; }

    /**
     * <p>A JSON schema that's used to validate the configuration values that you
     * provide when an addon is created or updated.</p>
     */
    inline void SetConfigurationSchema(Aws::String&& value) { m_configurationSchema = std::move(value); }

    /**
     * <p>A JSON schema that's used to validate the configuration values that you
     * provide when an addon is created or updated.</p>
     */
    inline void SetConfigurationSchema(const char* value) { m_configurationSchema.assign(value); }

    /**
     * <p>A JSON schema that's used to validate the configuration values that you
     * provide when an addon is created or updated.</p>
     */
    inline DescribeAddonConfigurationResult& WithConfigurationSchema(const Aws::String& value) { SetConfigurationSchema(value); return *this;}

    /**
     * <p>A JSON schema that's used to validate the configuration values that you
     * provide when an addon is created or updated.</p>
     */
    inline DescribeAddonConfigurationResult& WithConfigurationSchema(Aws::String&& value) { SetConfigurationSchema(std::move(value)); return *this;}

    /**
     * <p>A JSON schema that's used to validate the configuration values that you
     * provide when an addon is created or updated.</p>
     */
    inline DescribeAddonConfigurationResult& WithConfigurationSchema(const char* value) { SetConfigurationSchema(value); return *this;}

  private:

    Aws::String m_addonName;

    Aws::String m_addonVersion;

    Aws::String m_configurationSchema;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
