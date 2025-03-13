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
    AWS_IOTFLEETHUB_API DescribeApplicationResult() = default;
    AWS_IOTFLEETHUB_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETHUB_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique Id of the web application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    DescribeApplicationResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web application.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    DescribeApplicationResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the web application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    DescribeApplicationResult& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the web application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const { return m_applicationDescription; }
    template<typename ApplicationDescriptionT = Aws::String>
    void SetApplicationDescription(ApplicationDescriptionT&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::forward<ApplicationDescriptionT>(value); }
    template<typename ApplicationDescriptionT = Aws::String>
    DescribeApplicationResult& WithApplicationDescription(ApplicationDescriptionT&& value) { SetApplicationDescription(std::forward<ApplicationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the web application.</p>
     */
    inline const Aws::String& GetApplicationUrl() const { return m_applicationUrl; }
    template<typename ApplicationUrlT = Aws::String>
    void SetApplicationUrl(ApplicationUrlT&& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = std::forward<ApplicationUrlT>(value); }
    template<typename ApplicationUrlT = Aws::String>
    DescribeApplicationResult& WithApplicationUrl(ApplicationUrlT&& value) { SetApplicationUrl(std::forward<ApplicationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the web application.</p>
     */
    inline ApplicationState GetApplicationState() const { return m_applicationState; }
    inline void SetApplicationState(ApplicationState value) { m_applicationStateHasBeenSet = true; m_applicationState = value; }
    inline DescribeApplicationResult& WithApplicationState(ApplicationState value) { SetApplicationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in Unix epoch time) when the application was created.</p>
     */
    inline long long GetApplicationCreationDate() const { return m_applicationCreationDate; }
    inline void SetApplicationCreationDate(long long value) { m_applicationCreationDateHasBeenSet = true; m_applicationCreationDate = value; }
    inline DescribeApplicationResult& WithApplicationCreationDate(long long value) { SetApplicationCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date (in Unix epoch time) when the application was last updated.</p>
     */
    inline long long GetApplicationLastUpdateDate() const { return m_applicationLastUpdateDate; }
    inline void SetApplicationLastUpdateDate(long long value) { m_applicationLastUpdateDateHasBeenSet = true; m_applicationLastUpdateDate = value; }
    inline DescribeApplicationResult& WithApplicationLastUpdateDate(long long value) { SetApplicationLastUpdateDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that the web application assumes when it interacts with
     * Amazon Web Services IoT Core.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeApplicationResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Id of the single sign-on client that you use to authenticate and
     * authorize users on the web application.</p>
     */
    inline const Aws::String& GetSsoClientId() const { return m_ssoClientId; }
    template<typename SsoClientIdT = Aws::String>
    void SetSsoClientId(SsoClientIdT&& value) { m_ssoClientIdHasBeenSet = true; m_ssoClientId = std::forward<SsoClientIdT>(value); }
    template<typename SsoClientIdT = Aws::String>
    DescribeApplicationResult& WithSsoClientId(SsoClientIdT&& value) { SetSsoClientId(std::forward<SsoClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that explains any failures included in the
     * <code>applicationState</code> response field. This message explains failures in
     * the <code>CreateApplication</code> and <code>DeleteApplication</code>
     * actions.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeApplicationResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that you can use to manage the web application
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeApplicationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeApplicationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    Aws::String m_applicationUrl;
    bool m_applicationUrlHasBeenSet = false;

    ApplicationState m_applicationState{ApplicationState::NOT_SET};
    bool m_applicationStateHasBeenSet = false;

    long long m_applicationCreationDate{0};
    bool m_applicationCreationDateHasBeenSet = false;

    long long m_applicationLastUpdateDate{0};
    bool m_applicationLastUpdateDateHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_ssoClientId;
    bool m_ssoClientIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
