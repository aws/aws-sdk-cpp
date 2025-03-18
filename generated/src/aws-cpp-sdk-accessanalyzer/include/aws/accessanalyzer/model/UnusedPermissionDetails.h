/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/accessanalyzer/model/UnusedAction.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about an unused access finding for a permission. IAM
   * Access Analyzer charges for unused access analysis based on the number of IAM
   * roles and users analyzed per month. For more details on pricing, see <a
   * href="https://aws.amazon.com/iam/access-analyzer/pricing">IAM Access Analyzer
   * pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedPermissionDetails">AWS
   * API Reference</a></p>
   */
  class UnusedPermissionDetails
  {
  public:
    AWS_ACCESSANALYZER_API UnusedPermissionDetails() = default;
    AWS_ACCESSANALYZER_API UnusedPermissionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedPermissionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of unused actions for which the unused access finding was
     * generated.</p>
     */
    inline const Aws::Vector<UnusedAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<UnusedAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<UnusedAction>>
    UnusedPermissionDetails& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = UnusedAction>
    UnusedPermissionDetails& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The namespace of the Amazon Web Services service that contains the unused
     * actions.</p>
     */
    inline const Aws::String& GetServiceNamespace() const { return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    template<typename ServiceNamespaceT = Aws::String>
    void SetServiceNamespace(ServiceNamespaceT&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::forward<ServiceNamespaceT>(value); }
    template<typename ServiceNamespaceT = Aws::String>
    UnusedPermissionDetails& WithServiceNamespace(ServiceNamespaceT&& value) { SetServiceNamespace(std::forward<ServiceNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the permission was last accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessed() const { return m_lastAccessed; }
    inline bool LastAccessedHasBeenSet() const { return m_lastAccessedHasBeenSet; }
    template<typename LastAccessedT = Aws::Utils::DateTime>
    void SetLastAccessed(LastAccessedT&& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = std::forward<LastAccessedT>(value); }
    template<typename LastAccessedT = Aws::Utils::DateTime>
    UnusedPermissionDetails& WithLastAccessed(LastAccessedT&& value) { SetLastAccessed(std::forward<LastAccessedT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnusedAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessed{};
    bool m_lastAccessedHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
