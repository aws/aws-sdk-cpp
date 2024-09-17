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
    AWS_ACCESSANALYZER_API UnusedPermissionDetails();
    AWS_ACCESSANALYZER_API UnusedPermissionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedPermissionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of unused actions for which the unused access finding was
     * generated.</p>
     */
    inline const Aws::Vector<UnusedAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<UnusedAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<UnusedAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline UnusedPermissionDetails& WithActions(const Aws::Vector<UnusedAction>& value) { SetActions(value); return *this;}
    inline UnusedPermissionDetails& WithActions(Aws::Vector<UnusedAction>&& value) { SetActions(std::move(value)); return *this;}
    inline UnusedPermissionDetails& AddActions(const UnusedAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline UnusedPermissionDetails& AddActions(UnusedAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The namespace of the Amazon Web Services service that contains the unused
     * actions.</p>
     */
    inline const Aws::String& GetServiceNamespace() const{ return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    inline void SetServiceNamespace(const Aws::String& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }
    inline void SetServiceNamespace(Aws::String&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }
    inline void SetServiceNamespace(const char* value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace.assign(value); }
    inline UnusedPermissionDetails& WithServiceNamespace(const Aws::String& value) { SetServiceNamespace(value); return *this;}
    inline UnusedPermissionDetails& WithServiceNamespace(Aws::String&& value) { SetServiceNamespace(std::move(value)); return *this;}
    inline UnusedPermissionDetails& WithServiceNamespace(const char* value) { SetServiceNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the permission was last accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessed() const{ return m_lastAccessed; }
    inline bool LastAccessedHasBeenSet() const { return m_lastAccessedHasBeenSet; }
    inline void SetLastAccessed(const Aws::Utils::DateTime& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = value; }
    inline void SetLastAccessed(Aws::Utils::DateTime&& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = std::move(value); }
    inline UnusedPermissionDetails& WithLastAccessed(const Aws::Utils::DateTime& value) { SetLastAccessed(value); return *this;}
    inline UnusedPermissionDetails& WithLastAccessed(Aws::Utils::DateTime&& value) { SetLastAccessed(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnusedAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessed;
    bool m_lastAccessedHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
