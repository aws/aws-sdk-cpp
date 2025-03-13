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
    AWS_FMS_API AppsListData() = default;
    AWS_FMS_API AppsListData(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AppsListData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Firewall Manager applications list.</p>
     */
    inline const Aws::String& GetListId() const { return m_listId; }
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }
    template<typename ListIdT = Aws::String>
    void SetListId(ListIdT&& value) { m_listIdHasBeenSet = true; m_listId = std::forward<ListIdT>(value); }
    template<typename ListIdT = Aws::String>
    AppsListData& WithListId(ListIdT&& value) { SetListId(std::forward<ListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Firewall Manager applications list.</p>
     */
    inline const Aws::String& GetListName() const { return m_listName; }
    inline bool ListNameHasBeenSet() const { return m_listNameHasBeenSet; }
    template<typename ListNameT = Aws::String>
    void SetListName(ListNameT&& value) { m_listNameHasBeenSet = true; m_listName = std::forward<ListNameT>(value); }
    template<typename ListNameT = Aws::String>
    AppsListData& WithListName(ListNameT&& value) { SetListName(std::forward<ListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline const Aws::String& GetListUpdateToken() const { return m_listUpdateToken; }
    inline bool ListUpdateTokenHasBeenSet() const { return m_listUpdateTokenHasBeenSet; }
    template<typename ListUpdateTokenT = Aws::String>
    void SetListUpdateToken(ListUpdateTokenT&& value) { m_listUpdateTokenHasBeenSet = true; m_listUpdateToken = std::forward<ListUpdateTokenT>(value); }
    template<typename ListUpdateTokenT = Aws::String>
    AppsListData& WithListUpdateToken(ListUpdateTokenT&& value) { SetListUpdateToken(std::forward<ListUpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Firewall Manager applications list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    AppsListData& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Firewall Manager applications list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    AppsListData& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of applications in the Firewall Manager applications list.</p>
     */
    inline const Aws::Vector<App>& GetAppsList() const { return m_appsList; }
    inline bool AppsListHasBeenSet() const { return m_appsListHasBeenSet; }
    template<typename AppsListT = Aws::Vector<App>>
    void SetAppsList(AppsListT&& value) { m_appsListHasBeenSet = true; m_appsList = std::forward<AppsListT>(value); }
    template<typename AppsListT = Aws::Vector<App>>
    AppsListData& WithAppsList(AppsListT&& value) { SetAppsList(std::forward<AppsListT>(value)); return *this;}
    template<typename AppsListT = App>
    AppsListData& AddAppsList(AppsListT&& value) { m_appsListHasBeenSet = true; m_appsList.emplace_back(std::forward<AppsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of previous version numbers to their corresponding <code>App</code>
     * object arrays.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<App>>& GetPreviousAppsList() const { return m_previousAppsList; }
    inline bool PreviousAppsListHasBeenSet() const { return m_previousAppsListHasBeenSet; }
    template<typename PreviousAppsListT = Aws::Map<Aws::String, Aws::Vector<App>>>
    void SetPreviousAppsList(PreviousAppsListT&& value) { m_previousAppsListHasBeenSet = true; m_previousAppsList = std::forward<PreviousAppsListT>(value); }
    template<typename PreviousAppsListT = Aws::Map<Aws::String, Aws::Vector<App>>>
    AppsListData& WithPreviousAppsList(PreviousAppsListT&& value) { SetPreviousAppsList(std::forward<PreviousAppsListT>(value)); return *this;}
    template<typename PreviousAppsListKeyT = Aws::String, typename PreviousAppsListValueT = Aws::Vector<App>>
    AppsListData& AddPreviousAppsList(PreviousAppsListKeyT&& key, PreviousAppsListValueT&& value) {
      m_previousAppsListHasBeenSet = true; m_previousAppsList.emplace(std::forward<PreviousAppsListKeyT>(key), std::forward<PreviousAppsListValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_listId;
    bool m_listIdHasBeenSet = false;

    Aws::String m_listName;
    bool m_listNameHasBeenSet = false;

    Aws::String m_listUpdateToken;
    bool m_listUpdateTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Vector<App> m_appsList;
    bool m_appsListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<App>> m_previousAppsList;
    bool m_previousAppsListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
