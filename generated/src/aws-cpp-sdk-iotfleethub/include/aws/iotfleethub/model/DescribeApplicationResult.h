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


    /**
     * <p>The unique Id of the web application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ARN of the web application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The ARN of the web application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>The ARN of the web application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>The ARN of the web application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>The ARN of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The name of the web application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the web application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }

    /**
     * <p>The name of the web application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }

    /**
     * <p>The name of the web application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }

    /**
     * <p>The name of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>An optional description of the web application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescription = value; }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescription = std::move(value); }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline void SetApplicationDescription(const char* value) { m_applicationDescription.assign(value); }

    /**
     * <p>An optional description of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}

    /**
     * <p>An optional description of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}


    /**
     * <p>The URL of the web application.</p>
     */
    inline const Aws::String& GetApplicationUrl() const{ return m_applicationUrl; }

    /**
     * <p>The URL of the web application.</p>
     */
    inline void SetApplicationUrl(const Aws::String& value) { m_applicationUrl = value; }

    /**
     * <p>The URL of the web application.</p>
     */
    inline void SetApplicationUrl(Aws::String&& value) { m_applicationUrl = std::move(value); }

    /**
     * <p>The URL of the web application.</p>
     */
    inline void SetApplicationUrl(const char* value) { m_applicationUrl.assign(value); }

    /**
     * <p>The URL of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationUrl(const Aws::String& value) { SetApplicationUrl(value); return *this;}

    /**
     * <p>The URL of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationUrl(Aws::String&& value) { SetApplicationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationUrl(const char* value) { SetApplicationUrl(value); return *this;}


    /**
     * <p>The current state of the web application.</p>
     */
    inline const ApplicationState& GetApplicationState() const{ return m_applicationState; }

    /**
     * <p>The current state of the web application.</p>
     */
    inline void SetApplicationState(const ApplicationState& value) { m_applicationState = value; }

    /**
     * <p>The current state of the web application.</p>
     */
    inline void SetApplicationState(ApplicationState&& value) { m_applicationState = std::move(value); }

    /**
     * <p>The current state of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationState(const ApplicationState& value) { SetApplicationState(value); return *this;}

    /**
     * <p>The current state of the web application.</p>
     */
    inline DescribeApplicationResult& WithApplicationState(ApplicationState&& value) { SetApplicationState(std::move(value)); return *this;}


    /**
     * <p>The date (in Unix epoch time) when the application was created.</p>
     */
    inline long long GetApplicationCreationDate() const{ return m_applicationCreationDate; }

    /**
     * <p>The date (in Unix epoch time) when the application was created.</p>
     */
    inline void SetApplicationCreationDate(long long value) { m_applicationCreationDate = value; }

    /**
     * <p>The date (in Unix epoch time) when the application was created.</p>
     */
    inline DescribeApplicationResult& WithApplicationCreationDate(long long value) { SetApplicationCreationDate(value); return *this;}


    /**
     * <p>The date (in Unix epoch time) when the application was last updated.</p>
     */
    inline long long GetApplicationLastUpdateDate() const{ return m_applicationLastUpdateDate; }

    /**
     * <p>The date (in Unix epoch time) when the application was last updated.</p>
     */
    inline void SetApplicationLastUpdateDate(long long value) { m_applicationLastUpdateDate = value; }

    /**
     * <p>The date (in Unix epoch time) when the application was last updated.</p>
     */
    inline DescribeApplicationResult& WithApplicationLastUpdateDate(long long value) { SetApplicationLastUpdateDate(value); return *this;}


    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * AWS IoT Core.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * AWS IoT Core.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * AWS IoT Core.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * AWS IoT Core.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * AWS IoT Core.</p>
     */
    inline DescribeApplicationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * AWS IoT Core.</p>
     */
    inline DescribeApplicationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * AWS IoT Core.</p>
     */
    inline DescribeApplicationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline const Aws::String& GetSsoClientId() const{ return m_ssoClientId; }

    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline void SetSsoClientId(const Aws::String& value) { m_ssoClientId = value; }

    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline void SetSsoClientId(Aws::String&& value) { m_ssoClientId = std::move(value); }

    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline void SetSsoClientId(const char* value) { m_ssoClientId.assign(value); }

    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline DescribeApplicationResult& WithSsoClientId(const Aws::String& value) { SetSsoClientId(value); return *this;}

    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline DescribeApplicationResult& WithSsoClientId(Aws::String&& value) { SetSsoClientId(std::move(value)); return *this;}

    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline DescribeApplicationResult& WithSsoClientId(const char* value) { SetSsoClientId(value); return *this;}


    /**
     * <p>A message indicating why the <code>DescribeApplication</code> API failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message indicating why the <code>DescribeApplication</code> API failed.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>A message indicating why the <code>DescribeApplication</code> API failed.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>A message indicating why the <code>DescribeApplication</code> API failed.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>A message indicating why the <code>DescribeApplication</code> API failed.</p>
     */
    inline DescribeApplicationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message indicating why the <code>DescribeApplication</code> API failed.</p>
     */
    inline DescribeApplicationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message indicating why the <code>DescribeApplication</code> API failed.</p>
     */
    inline DescribeApplicationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline DescribeApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
