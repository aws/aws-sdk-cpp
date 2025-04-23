/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/WebhookScopeType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains configuration information about the scope for a webhook.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ScopeConfiguration">AWS
   * API Reference</a></p>
   */
  class ScopeConfiguration
  {
  public:
    AWS_CODEBUILD_API ScopeConfiguration() = default;
    AWS_CODEBUILD_API ScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of either the group, enterprise, or organization that will send
     * webhook events to CodeBuild, depending on the type of webhook.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScopeConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain of the GitHub Enterprise organization or the GitLab Self Managed
     * group. Note that this parameter is only required if your project's source type
     * is GITHUB_ENTERPRISE or GITLAB_SELF_MANAGED.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ScopeConfiguration& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of scope for a GitHub or GitLab webhook. The scope default is
     * GITHUB_ORGANIZATION.</p>
     */
    inline WebhookScopeType GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(WebhookScopeType value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline ScopeConfiguration& WithScope(WebhookScopeType value) { SetScope(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    WebhookScopeType m_scope{WebhookScopeType::NOT_SET};
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
