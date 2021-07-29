﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RegisteredUserDashboardEmbeddingConfiguration.h>
#include <aws/quicksight/model/RegisteredUserQuickSightConsoleEmbeddingConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The type of experience you want to embed. For registered users, you can embed
   * an Amazon QuickSight dashboard or the Amazon QuickSight console.</p> 
   * <p>Exactly one of the experience configurations is required. You can choose
   * <code>Dashboard</code> or <code>QuickSightConsole</code>. You cannot choose more
   * than one experience configuraton.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserEmbeddingExperienceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API RegisteredUserEmbeddingExperienceConfiguration
  {
  public:
    RegisteredUserEmbeddingExperienceConfiguration();
    RegisteredUserEmbeddingExperienceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    RegisteredUserEmbeddingExperienceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration details for providing a dashboard embedding experience.</p>
     */
    inline const RegisteredUserDashboardEmbeddingConfiguration& GetDashboard() const{ return m_dashboard; }

    /**
     * <p>The configuration details for providing a dashboard embedding experience.</p>
     */
    inline bool DashboardHasBeenSet() const { return m_dashboardHasBeenSet; }

    /**
     * <p>The configuration details for providing a dashboard embedding experience.</p>
     */
    inline void SetDashboard(const RegisteredUserDashboardEmbeddingConfiguration& value) { m_dashboardHasBeenSet = true; m_dashboard = value; }

    /**
     * <p>The configuration details for providing a dashboard embedding experience.</p>
     */
    inline void SetDashboard(RegisteredUserDashboardEmbeddingConfiguration&& value) { m_dashboardHasBeenSet = true; m_dashboard = std::move(value); }

    /**
     * <p>The configuration details for providing a dashboard embedding experience.</p>
     */
    inline RegisteredUserEmbeddingExperienceConfiguration& WithDashboard(const RegisteredUserDashboardEmbeddingConfiguration& value) { SetDashboard(value); return *this;}

    /**
     * <p>The configuration details for providing a dashboard embedding experience.</p>
     */
    inline RegisteredUserEmbeddingExperienceConfiguration& WithDashboard(RegisteredUserDashboardEmbeddingConfiguration&& value) { SetDashboard(std::move(value)); return *this;}


    /**
     * <p>The configuration details for providing an Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code>GenerateEmbedUrlForRegisteredUser</code> where you
     * want to provide an authoring portal that allows users to create data sources,
     * datasets, analyses, and dashboards. The users who accesses an embedded Amazon
     * QuickSight console needs to belong to the author or admin security cohort. If
     * you want to restrict permissions to some of these features, add a custom
     * permissions profile to the user with the <code> <a>UpdateUser</a> </code> API
     * operation. Use <code> <a>RegisterUser</a> </code> API operation to add a new
     * user with a custom permission profile attached. For more information, see the
     * following sections in the <i>Amazon QuickSight User Guide</i>:</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-full-console-for-authenticated-users.html">Embedding
     * the Full Functionality of the Amazon QuickSight Console for Authenticated
     * Users</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> </p> </li> </ul> <p>For more
     * information about the high-level steps for embedding and for an interactive demo
     * of the ways you can customize embedding, visit the <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
     * QuickSight Developer Portal</a>.</p>
     */
    inline const RegisteredUserQuickSightConsoleEmbeddingConfiguration& GetQuickSightConsole() const{ return m_quickSightConsole; }

    /**
     * <p>The configuration details for providing an Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code>GenerateEmbedUrlForRegisteredUser</code> where you
     * want to provide an authoring portal that allows users to create data sources,
     * datasets, analyses, and dashboards. The users who accesses an embedded Amazon
     * QuickSight console needs to belong to the author or admin security cohort. If
     * you want to restrict permissions to some of these features, add a custom
     * permissions profile to the user with the <code> <a>UpdateUser</a> </code> API
     * operation. Use <code> <a>RegisterUser</a> </code> API operation to add a new
     * user with a custom permission profile attached. For more information, see the
     * following sections in the <i>Amazon QuickSight User Guide</i>:</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-full-console-for-authenticated-users.html">Embedding
     * the Full Functionality of the Amazon QuickSight Console for Authenticated
     * Users</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> </p> </li> </ul> <p>For more
     * information about the high-level steps for embedding and for an interactive demo
     * of the ways you can customize embedding, visit the <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
     * QuickSight Developer Portal</a>.</p>
     */
    inline bool QuickSightConsoleHasBeenSet() const { return m_quickSightConsoleHasBeenSet; }

    /**
     * <p>The configuration details for providing an Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code>GenerateEmbedUrlForRegisteredUser</code> where you
     * want to provide an authoring portal that allows users to create data sources,
     * datasets, analyses, and dashboards. The users who accesses an embedded Amazon
     * QuickSight console needs to belong to the author or admin security cohort. If
     * you want to restrict permissions to some of these features, add a custom
     * permissions profile to the user with the <code> <a>UpdateUser</a> </code> API
     * operation. Use <code> <a>RegisterUser</a> </code> API operation to add a new
     * user with a custom permission profile attached. For more information, see the
     * following sections in the <i>Amazon QuickSight User Guide</i>:</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-full-console-for-authenticated-users.html">Embedding
     * the Full Functionality of the Amazon QuickSight Console for Authenticated
     * Users</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> </p> </li> </ul> <p>For more
     * information about the high-level steps for embedding and for an interactive demo
     * of the ways you can customize embedding, visit the <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
     * QuickSight Developer Portal</a>.</p>
     */
    inline void SetQuickSightConsole(const RegisteredUserQuickSightConsoleEmbeddingConfiguration& value) { m_quickSightConsoleHasBeenSet = true; m_quickSightConsole = value; }

    /**
     * <p>The configuration details for providing an Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code>GenerateEmbedUrlForRegisteredUser</code> where you
     * want to provide an authoring portal that allows users to create data sources,
     * datasets, analyses, and dashboards. The users who accesses an embedded Amazon
     * QuickSight console needs to belong to the author or admin security cohort. If
     * you want to restrict permissions to some of these features, add a custom
     * permissions profile to the user with the <code> <a>UpdateUser</a> </code> API
     * operation. Use <code> <a>RegisterUser</a> </code> API operation to add a new
     * user with a custom permission profile attached. For more information, see the
     * following sections in the <i>Amazon QuickSight User Guide</i>:</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-full-console-for-authenticated-users.html">Embedding
     * the Full Functionality of the Amazon QuickSight Console for Authenticated
     * Users</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> </p> </li> </ul> <p>For more
     * information about the high-level steps for embedding and for an interactive demo
     * of the ways you can customize embedding, visit the <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
     * QuickSight Developer Portal</a>.</p>
     */
    inline void SetQuickSightConsole(RegisteredUserQuickSightConsoleEmbeddingConfiguration&& value) { m_quickSightConsoleHasBeenSet = true; m_quickSightConsole = std::move(value); }

    /**
     * <p>The configuration details for providing an Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code>GenerateEmbedUrlForRegisteredUser</code> where you
     * want to provide an authoring portal that allows users to create data sources,
     * datasets, analyses, and dashboards. The users who accesses an embedded Amazon
     * QuickSight console needs to belong to the author or admin security cohort. If
     * you want to restrict permissions to some of these features, add a custom
     * permissions profile to the user with the <code> <a>UpdateUser</a> </code> API
     * operation. Use <code> <a>RegisterUser</a> </code> API operation to add a new
     * user with a custom permission profile attached. For more information, see the
     * following sections in the <i>Amazon QuickSight User Guide</i>:</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-full-console-for-authenticated-users.html">Embedding
     * the Full Functionality of the Amazon QuickSight Console for Authenticated
     * Users</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> </p> </li> </ul> <p>For more
     * information about the high-level steps for embedding and for an interactive demo
     * of the ways you can customize embedding, visit the <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
     * QuickSight Developer Portal</a>.</p>
     */
    inline RegisteredUserEmbeddingExperienceConfiguration& WithQuickSightConsole(const RegisteredUserQuickSightConsoleEmbeddingConfiguration& value) { SetQuickSightConsole(value); return *this;}

    /**
     * <p>The configuration details for providing an Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code>GenerateEmbedUrlForRegisteredUser</code> where you
     * want to provide an authoring portal that allows users to create data sources,
     * datasets, analyses, and dashboards. The users who accesses an embedded Amazon
     * QuickSight console needs to belong to the author or admin security cohort. If
     * you want to restrict permissions to some of these features, add a custom
     * permissions profile to the user with the <code> <a>UpdateUser</a> </code> API
     * operation. Use <code> <a>RegisterUser</a> </code> API operation to add a new
     * user with a custom permission profile attached. For more information, see the
     * following sections in the <i>Amazon QuickSight User Guide</i>:</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-full-console-for-authenticated-users.html">Embedding
     * the Full Functionality of the Amazon QuickSight Console for Authenticated
     * Users</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> </p> </li> </ul> <p>For more
     * information about the high-level steps for embedding and for an interactive demo
     * of the ways you can customize embedding, visit the <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
     * QuickSight Developer Portal</a>.</p>
     */
    inline RegisteredUserEmbeddingExperienceConfiguration& WithQuickSightConsole(RegisteredUserQuickSightConsoleEmbeddingConfiguration&& value) { SetQuickSightConsole(std::move(value)); return *this;}

  private:

    RegisteredUserDashboardEmbeddingConfiguration m_dashboard;
    bool m_dashboardHasBeenSet;

    RegisteredUserQuickSightConsoleEmbeddingConfiguration m_quickSightConsole;
    bool m_quickSightConsoleHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
