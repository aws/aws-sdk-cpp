/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/IntegrationType.h>
#include <aws/inspector2/model/IntegrationStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Inspector2
{
namespace Model
{
  class GetCodeSecurityIntegrationResult
  {
  public:
    AWS_INSPECTOR2_API GetCodeSecurityIntegrationResult() = default;
    AWS_INSPECTOR2_API GetCodeSecurityIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetCodeSecurityIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the code security integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
    template<typename IntegrationArnT = Aws::String>
    void SetIntegrationArn(IntegrationArnT&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::forward<IntegrationArnT>(value); }
    template<typename IntegrationArnT = Aws::String>
    GetCodeSecurityIntegrationResult& WithIntegrationArn(IntegrationArnT&& value) { SetIntegrationArn(std::forward<IntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the code security integration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCodeSecurityIntegrationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of repository provider for the integration.</p>
     */
    inline IntegrationType GetType() const { return m_type; }
    inline void SetType(IntegrationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetCodeSecurityIntegrationResult& WithType(IntegrationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the code security integration.</p>
     */
    inline IntegrationStatus GetStatus() const { return m_status; }
    inline void SetStatus(IntegrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCodeSecurityIntegrationResult& WithStatus(IntegrationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the code security integration.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetCodeSecurityIntegrationResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code security integration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    GetCodeSecurityIntegrationResult& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code security integration was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateOn() const { return m_lastUpdateOn; }
    template<typename LastUpdateOnT = Aws::Utils::DateTime>
    void SetLastUpdateOn(LastUpdateOnT&& value) { m_lastUpdateOnHasBeenSet = true; m_lastUpdateOn = std::forward<LastUpdateOnT>(value); }
    template<typename LastUpdateOnT = Aws::Utils::DateTime>
    GetCodeSecurityIntegrationResult& WithLastUpdateOn(LastUpdateOnT&& value) { SetLastUpdateOn(std::forward<LastUpdateOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the code security integration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetCodeSecurityIntegrationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetCodeSecurityIntegrationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The URL used to authorize the integration with the repository provider. This
     * is only returned if reauthorization is required to fix a connection issue.
     * Otherwise, it is null.</p>
     */
    inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
    template<typename AuthorizationUrlT = Aws::String>
    void SetAuthorizationUrl(AuthorizationUrlT&& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = std::forward<AuthorizationUrlT>(value); }
    template<typename AuthorizationUrlT = Aws::String>
    GetCodeSecurityIntegrationResult& WithAuthorizationUrl(AuthorizationUrlT&& value) { SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCodeSecurityIntegrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IntegrationType m_type{IntegrationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    IntegrationStatus m_status{IntegrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateOn{};
    bool m_lastUpdateOnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_authorizationUrl;
    bool m_authorizationUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
