/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RegisteredUserDashboardEmbeddingConfiguration.h>
#include <aws/quicksight/model/RegisteredUserQuickSightConsoleEmbeddingConfiguration.h>
#include <aws/quicksight/model/RegisteredUserQSearchBarEmbeddingConfiguration.h>
#include <aws/quicksight/model/RegisteredUserDashboardVisualEmbeddingConfiguration.h>
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
   * Amazon QuickSight dashboards or the Amazon QuickSight console.</p> 
   * <p>Exactly one of the experience configurations is required. You can choose
   * <code>Dashboard</code> or <code>QuickSightConsole</code>. You cannot choose more
   * than one experience configuration.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserEmbeddingExperienceConfiguration">AWS
   * API Reference</a></p>
   */
  class RegisteredUserEmbeddingExperienceConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserEmbeddingExperienceConfiguration();
    AWS_QUICKSIGHT_API RegisteredUserEmbeddingExperienceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserEmbeddingExperienceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The configuration details for providing each Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html">GenerateEmbedUrlForRegisteredUser</a>
     * </code> where you want to provide an authoring portal that allows users to
     * create data sources, datasets, analyses, and dashboards. The users who accesses
     * an embedded Amazon QuickSight console needs to belong to the author or admin
     * security cohort. If you want to restrict permissions to some of these features,
     * add a custom permissions profile to the user with the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
     * </code> API operation. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
     * </code> API operation to add a new user with a custom permission profile
     * attached. For more information, see the following sections in the <i>Amazon
     * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
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
     * <p>The configuration details for providing each Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html">GenerateEmbedUrlForRegisteredUser</a>
     * </code> where you want to provide an authoring portal that allows users to
     * create data sources, datasets, analyses, and dashboards. The users who accesses
     * an embedded Amazon QuickSight console needs to belong to the author or admin
     * security cohort. If you want to restrict permissions to some of these features,
     * add a custom permissions profile to the user with the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
     * </code> API operation. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
     * </code> API operation to add a new user with a custom permission profile
     * attached. For more information, see the following sections in the <i>Amazon
     * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
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
     * <p>The configuration details for providing each Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html">GenerateEmbedUrlForRegisteredUser</a>
     * </code> where you want to provide an authoring portal that allows users to
     * create data sources, datasets, analyses, and dashboards. The users who accesses
     * an embedded Amazon QuickSight console needs to belong to the author or admin
     * security cohort. If you want to restrict permissions to some of these features,
     * add a custom permissions profile to the user with the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
     * </code> API operation. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
     * </code> API operation to add a new user with a custom permission profile
     * attached. For more information, see the following sections in the <i>Amazon
     * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
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
     * <p>The configuration details for providing each Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html">GenerateEmbedUrlForRegisteredUser</a>
     * </code> where you want to provide an authoring portal that allows users to
     * create data sources, datasets, analyses, and dashboards. The users who accesses
     * an embedded Amazon QuickSight console needs to belong to the author or admin
     * security cohort. If you want to restrict permissions to some of these features,
     * add a custom permissions profile to the user with the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
     * </code> API operation. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
     * </code> API operation to add a new user with a custom permission profile
     * attached. For more information, see the following sections in the <i>Amazon
     * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
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
     * <p>The configuration details for providing each Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html">GenerateEmbedUrlForRegisteredUser</a>
     * </code> where you want to provide an authoring portal that allows users to
     * create data sources, datasets, analyses, and dashboards. The users who accesses
     * an embedded Amazon QuickSight console needs to belong to the author or admin
     * security cohort. If you want to restrict permissions to some of these features,
     * add a custom permissions profile to the user with the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
     * </code> API operation. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
     * </code> API operation to add a new user with a custom permission profile
     * attached. For more information, see the following sections in the <i>Amazon
     * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
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
     * <p>The configuration details for providing each Amazon QuickSight console
     * embedding experience. This can be used along with custom permissions to restrict
     * access to certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html">GenerateEmbedUrlForRegisteredUser</a>
     * </code> where you want to provide an authoring portal that allows users to
     * create data sources, datasets, analyses, and dashboards. The users who accesses
     * an embedded Amazon QuickSight console needs to belong to the author or admin
     * security cohort. If you want to restrict permissions to some of these features,
     * add a custom permissions profile to the user with the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
     * </code> API operation. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
     * </code> API operation to add a new user with a custom permission profile
     * attached. For more information, see the following sections in the <i>Amazon
     * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
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


    /**
     * <p>The configuration details for embedding the Q search bar.</p> <p>For more
     * information about embedding the Q search bar, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-overview.html">Embedding
     * Overview</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const RegisteredUserQSearchBarEmbeddingConfiguration& GetQSearchBar() const{ return m_qSearchBar; }

    /**
     * <p>The configuration details for embedding the Q search bar.</p> <p>For more
     * information about embedding the Q search bar, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-overview.html">Embedding
     * Overview</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool QSearchBarHasBeenSet() const { return m_qSearchBarHasBeenSet; }

    /**
     * <p>The configuration details for embedding the Q search bar.</p> <p>For more
     * information about embedding the Q search bar, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-overview.html">Embedding
     * Overview</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetQSearchBar(const RegisteredUserQSearchBarEmbeddingConfiguration& value) { m_qSearchBarHasBeenSet = true; m_qSearchBar = value; }

    /**
     * <p>The configuration details for embedding the Q search bar.</p> <p>For more
     * information about embedding the Q search bar, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-overview.html">Embedding
     * Overview</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetQSearchBar(RegisteredUserQSearchBarEmbeddingConfiguration&& value) { m_qSearchBarHasBeenSet = true; m_qSearchBar = std::move(value); }

    /**
     * <p>The configuration details for embedding the Q search bar.</p> <p>For more
     * information about embedding the Q search bar, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-overview.html">Embedding
     * Overview</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline RegisteredUserEmbeddingExperienceConfiguration& WithQSearchBar(const RegisteredUserQSearchBarEmbeddingConfiguration& value) { SetQSearchBar(value); return *this;}

    /**
     * <p>The configuration details for embedding the Q search bar.</p> <p>For more
     * information about embedding the Q search bar, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-overview.html">Embedding
     * Overview</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline RegisteredUserEmbeddingExperienceConfiguration& WithQSearchBar(RegisteredUserQSearchBarEmbeddingConfiguration&& value) { SetQSearchBar(std::move(value)); return *this;}


    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline const RegisteredUserDashboardVisualEmbeddingConfiguration& GetDashboardVisual() const{ return m_dashboardVisual; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline bool DashboardVisualHasBeenSet() const { return m_dashboardVisualHasBeenSet; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline void SetDashboardVisual(const RegisteredUserDashboardVisualEmbeddingConfiguration& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = value; }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline void SetDashboardVisual(RegisteredUserDashboardVisualEmbeddingConfiguration&& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = std::move(value); }

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline RegisteredUserEmbeddingExperienceConfiguration& WithDashboardVisual(const RegisteredUserDashboardVisualEmbeddingConfiguration& value) { SetDashboardVisual(value); return *this;}

    /**
     * <p>The type of embedding experience. In this case, Amazon QuickSight
     * visuals.</p>
     */
    inline RegisteredUserEmbeddingExperienceConfiguration& WithDashboardVisual(RegisteredUserDashboardVisualEmbeddingConfiguration&& value) { SetDashboardVisual(std::move(value)); return *this;}

  private:

    RegisteredUserDashboardEmbeddingConfiguration m_dashboard;
    bool m_dashboardHasBeenSet = false;

    RegisteredUserQuickSightConsoleEmbeddingConfiguration m_quickSightConsole;
    bool m_quickSightConsoleHasBeenSet = false;

    RegisteredUserQSearchBarEmbeddingConfiguration m_qSearchBar;
    bool m_qSearchBarHasBeenSet = false;

    RegisteredUserDashboardVisualEmbeddingConfiguration m_dashboardVisual;
    bool m_dashboardVisualHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
