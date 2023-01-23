/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fms/model/App.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>An Firewall Manager applications list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AppsListData">AWS
   * API Reference</a></p>
   */
  class AppsListData
  {
  public:
    AWS_FMS_API AppsListData();
    AWS_FMS_API AppsListData(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AppsListData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline const Aws::String& GetListId() const{ return m_listId; }

    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }

    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline void SetListId(const Aws::String& value) { m_listIdHasBeenSet = true; m_listId = value; }

    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline void SetListId(Aws::String&& value) { m_listIdHasBeenSet = true; m_listId = std::move(value); }

    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline void SetListId(const char* value) { m_listIdHasBeenSet = true; m_listId.assign(value); }

    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline AppsListData& WithListId(const Aws::String& value) { SetListId(value); return *this;}

    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline AppsListData& WithListId(Aws::String&& value) { SetListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline AppsListData& WithListId(const char* value) { SetListId(value); return *this;}


    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline const Aws::String& GetListName() const{ return m_listName; }

    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline bool ListNameHasBeenSet() const { return m_listNameHasBeenSet; }

    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline void SetListName(const Aws::String& value) { m_listNameHasBeenSet = true; m_listName = value; }

    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline void SetListName(Aws::String&& value) { m_listNameHasBeenSet = true; m_listName = std::move(value); }

    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline void SetListName(const char* value) { m_listNameHasBeenSet = true; m_listName.assign(value); }

    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline AppsListData& WithListName(const Aws::String& value) { SetListName(value); return *this;}

    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline AppsListData& WithListName(Aws::String&& value) { SetListName(std::move(value)); return *this;}

    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline AppsListData& WithListName(const char* value) { SetListName(value); return *this;}


    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline const Aws::String& GetListUpdateToken() const{ return m_listUpdateToken; }

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline bool ListUpdateTokenHasBeenSet() const { return m_listUpdateTokenHasBeenSet; }

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline void SetListUpdateToken(const Aws::String& value) { m_listUpdateTokenHasBeenSet = true; m_listUpdateToken = value; }

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline void SetListUpdateToken(Aws::String&& value) { m_listUpdateTokenHasBeenSet = true; m_listUpdateToken = std::move(value); }

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline void SetListUpdateToken(const char* value) { m_listUpdateTokenHasBeenSet = true; m_listUpdateToken.assign(value); }

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline AppsListData& WithListUpdateToken(const Aws::String& value) { SetListUpdateToken(value); return *this;}

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline AppsListData& WithListUpdateToken(Aws::String&& value) { SetListUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline AppsListData& WithListUpdateToken(const char* value) { SetListUpdateToken(value); return *this;}


    /**
     * <p>The time that the Firewall Manager applications list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time that the Firewall Manager applications list was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time that the Firewall Manager applications list was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time that the Firewall Manager applications list was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time that the Firewall Manager applications list was created.</p>
     */
    inline AppsListData& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time that the Firewall Manager applications list was created.</p>
     */
    inline AppsListData& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time that the Firewall Manager applications list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The time that the Firewall Manager applications list was last updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The time that the Firewall Manager applications list was last updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The time that the Firewall Manager applications list was last updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The time that the Firewall Manager applications list was last updated.</p>
     */
    inline AppsListData& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The time that the Firewall Manager applications list was last updated.</p>
     */
    inline AppsListData& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline const Aws::Vector<App>& GetAppsList() const{ return m_appsList; }

    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline bool AppsListHasBeenSet() const { return m_appsListHasBeenSet; }

    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline void SetAppsList(const Aws::Vector<App>& value) { m_appsListHasBeenSet = true; m_appsList = value; }

    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline void SetAppsList(Aws::Vector<App>&& value) { m_appsListHasBeenSet = true; m_appsList = std::move(value); }

    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline AppsListData& WithAppsList(const Aws::Vector<App>& value) { SetAppsList(value); return *this;}

    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline AppsListData& WithAppsList(Aws::Vector<App>&& value) { SetAppsList(std::move(value)); return *this;}

    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline AppsListData& AddAppsList(const App& value) { m_appsListHasBeenSet = true; m_appsList.push_back(value); return *this; }

    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline AppsListData& AddAppsList(App&& value) { m_appsListHasBeenSet = true; m_appsList.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<App>>& GetPreviousAppsList() const{ return m_previousAppsList; }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline bool PreviousAppsListHasBeenSet() const { return m_previousAppsListHasBeenSet; }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline void SetPreviousAppsList(const Aws::Map<Aws::String, Aws::Vector<App>>& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList = value; }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline void SetPreviousAppsList(Aws::Map<Aws::String, Aws::Vector<App>>&& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList = std::move(value); }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline AppsListData& WithPreviousAppsList(const Aws::Map<Aws::String, Aws::Vector<App>>& value) { SetPreviousAppsList(value); return *this;}

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline AppsListData& WithPreviousAppsList(Aws::Map<Aws::String, Aws::Vector<App>>&& value) { SetPreviousAppsList(std::move(value)); return *this;}

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline AppsListData& AddPreviousAppsList(const Aws::String& key, const Aws::Vector<App>& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList.emplace(key, value); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline AppsListData& AddPreviousAppsList(Aws::String&& key, const Aws::Vector<App>& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline AppsListData& AddPreviousAppsList(const Aws::String& key, Aws::Vector<App>&& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline AppsListData& AddPreviousAppsList(Aws::String&& key, Aws::Vector<App>&& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline AppsListData& AddPreviousAppsList(const char* key, Aws::Vector<App>&& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline AppsListData& AddPreviousAppsList(const char* key, const Aws::Vector<App>& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList.emplace(key, value); return *this; }

  private:

    Aws::String m_listId;
    bool m_listIdHasBeenSet = false;

    Aws::String m_listName;
    bool m_listNameHasBeenSet = false;

    Aws::String m_listUpdateToken;
    bool m_listUpdateTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Vector<App> m_appsList;
    bool m_appsListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<App>> m_previousAppsList;
    bool m_previousAppsListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
