/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleethub/model/ApplicationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoTFleetHub
{
namespace Model
{
  class DescribeApplicationResult
  {
  public:
    AWS_IOTFLEETHUB_API DescribeApplicationResult();
    AWS_IOTFLEETHUB_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETHUB_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique Id of the web application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline DescribeApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline DescribeApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline DescribeApplicationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline DescribeApplicationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the web application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }
    inline DescribeApplicationResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline DescribeApplicationResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the web application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescription = value; }
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescription = std::move(value); }
    inline void SetApplicationDescription(const char* value) { m_applicationDescription.assign(value); }
    inline DescribeApplicationResult& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}
    inline DescribeApplicationResult& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the web application.</p>
     */
    inline const Aws::String& GetApplicationUrl() const{ return m_applicationUrl; }
    inline void SetApplicationUrl(const Aws::String& value) { m_applicationUrl = value; }
    inline void SetApplicationUrl(Aws::String&& value) { m_applicationUrl = std::move(value); }
    inline void SetApplicationUrl(const char* value) { m_applicationUrl.assign(value); }
    inline DescribeApplicationResult& WithApplicationUrl(const Aws::String& value) { SetApplicationUrl(value); return *this;}
    inline DescribeApplicationResult& WithApplicationUrl(Aws::String&& value) { SetApplicationUrl(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithApplicationUrl(const char* value) { SetApplicationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the web application.</p>
     */
    inline const ApplicationState& GetApplicationState() const{ return m_applicationState; }
    inline void SetApplicationState(const ApplicationState& value) { m_applicationState = value; }
    inline void SetApplicationState(ApplicationState&& value) { m_applicationState = std::move(value); }
    inline DescribeApplicationResult& WithApplicationState(const ApplicationState& value) { SetApplicationState(value); return *this;}
    inline DescribeApplicationResult& WithApplicationState(ApplicationState&& value) { SetApplicationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in Unix epoch time) when the application was created.</p>
     */
    inline long long GetApplicationCreationDate() const{ return m_applicationCreationDate; }
    inline void SetApplicationCreationDate(long long value) { m_applicationCreationDate = value; }
    inline DescribeApplicationResult& WithApplicationCreationDate(long long value) { SetApplicationCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in Unix epoch time) when the application was last updated.</p>
     */
    inline long long GetApplicationLastUpdateDate() const{ return m_applicationLastUpdateDate; }
    inline void SetApplicationLastUpdateDate(long long value) { m_applicationLastUpdateDate = value; }
    inline DescribeApplicationResult& WithApplicationLastUpdateDate(long long value) { SetApplicationLastUpdateDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * Amazon Web Services IoT Core.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeApplicationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeApplicationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline const Aws::String& GetSsoClientId() const{ return m_ssoClientId; }
    inline void SetSsoClientId(const Aws::String& value) { m_ssoClientId = value; }
    inline void SetSsoClientId(Aws::String&& value) { m_ssoClientId = std::move(value); }
    inline void SetSsoClientId(const char* value) { m_ssoClientId.assign(value); }
    inline DescribeApplicationResult& WithSsoClientId(const Aws::String& value) { SetSsoClientId(value); return *this;}
    inline DescribeApplicationResult& WithSsoClientId(Aws::String&& value) { SetSsoClientId(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithSsoClientId(const char* value) { SetSsoClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that explains any failures included in the
     * <code>applicationState</code> response field. This message explains failures in
     * the <code>CreateApplication</code> and <code>DeleteApplication</code>
     * actions.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeApplicationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeApplicationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_applicationArn;

    Aws::String m_applicationName;

    Aws::String m_applicationDescription;

    Aws::String m_applicationUrl;

    ApplicationState m_applicationState;

    long long m_applicationCreationDate;

    long long m_applicationLastUpdateDate;

    Aws::String m_roleArn;

    Aws::String m_ssoClientId;

    Aws::String m_errorMessage;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
