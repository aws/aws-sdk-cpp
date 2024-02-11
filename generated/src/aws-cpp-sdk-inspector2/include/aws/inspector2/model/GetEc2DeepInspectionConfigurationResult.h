/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Ec2DeepInspectionStatus.h>
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
namespace Inspector2
{
namespace Model
{
  class GetEc2DeepInspectionConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API GetEc2DeepInspectionConfigurationResult();
    AWS_INSPECTOR2_API GetEc2DeepInspectionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetEc2DeepInspectionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An error message explaining why Amazon Inspector deep inspection
     * configurations could not be retrieved for your account.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message explaining why Amazon Inspector deep inspection
     * configurations could not be retrieved for your account.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>An error message explaining why Amazon Inspector deep inspection
     * configurations could not be retrieved for your account.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>An error message explaining why Amazon Inspector deep inspection
     * configurations could not be retrieved for your account.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>An error message explaining why Amazon Inspector deep inspection
     * configurations could not be retrieved for your account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message explaining why Amazon Inspector deep inspection
     * configurations could not be retrieved for your account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message explaining why Amazon Inspector deep inspection
     * configurations could not be retrieved for your account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrgPackagePaths() const{ return m_orgPackagePaths; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline void SetOrgPackagePaths(const Aws::Vector<Aws::String>& value) { m_orgPackagePaths = value; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline void SetOrgPackagePaths(Aws::Vector<Aws::String>&& value) { m_orgPackagePaths = std::move(value); }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithOrgPackagePaths(const Aws::Vector<Aws::String>& value) { SetOrgPackagePaths(value); return *this;}

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithOrgPackagePaths(Aws::Vector<Aws::String>&& value) { SetOrgPackagePaths(std::move(value)); return *this;}

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& AddOrgPackagePaths(const Aws::String& value) { m_orgPackagePaths.push_back(value); return *this; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& AddOrgPackagePaths(Aws::String&& value) { m_orgPackagePaths.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your organization.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& AddOrgPackagePaths(const char* value) { m_orgPackagePaths.push_back(value); return *this; }


    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackagePaths() const{ return m_packagePaths; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline void SetPackagePaths(const Aws::Vector<Aws::String>& value) { m_packagePaths = value; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline void SetPackagePaths(Aws::Vector<Aws::String>&& value) { m_packagePaths = std::move(value); }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithPackagePaths(const Aws::Vector<Aws::String>& value) { SetPackagePaths(value); return *this;}

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithPackagePaths(Aws::Vector<Aws::String>&& value) { SetPackagePaths(std::move(value)); return *this;}

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& AddPackagePaths(const Aws::String& value) { m_packagePaths.push_back(value); return *this; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& AddPackagePaths(Aws::String&& value) { m_packagePaths.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Inspector deep inspection custom paths for your account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& AddPackagePaths(const char* value) { m_packagePaths.push_back(value); return *this; }


    /**
     * <p>The activation status of Amazon Inspector deep inspection in your
     * account.</p>
     */
    inline const Ec2DeepInspectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The activation status of Amazon Inspector deep inspection in your
     * account.</p>
     */
    inline void SetStatus(const Ec2DeepInspectionStatus& value) { m_status = value; }

    /**
     * <p>The activation status of Amazon Inspector deep inspection in your
     * account.</p>
     */
    inline void SetStatus(Ec2DeepInspectionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The activation status of Amazon Inspector deep inspection in your
     * account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithStatus(const Ec2DeepInspectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The activation status of Amazon Inspector deep inspection in your
     * account.</p>
     */
    inline GetEc2DeepInspectionConfigurationResult& WithStatus(Ec2DeepInspectionStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEc2DeepInspectionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEc2DeepInspectionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEc2DeepInspectionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_errorMessage;

    Aws::Vector<Aws::String> m_orgPackagePaths;

    Aws::Vector<Aws::String> m_packagePaths;

    Ec2DeepInspectionStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
