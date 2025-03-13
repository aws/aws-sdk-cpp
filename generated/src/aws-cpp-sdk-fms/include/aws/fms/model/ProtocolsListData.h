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
   * <p>An Firewall Manager protocols list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ProtocolsListData">AWS
   * API Reference</a></p>
   */
  class ProtocolsListData
  {
  public:
    AWS_FMS_API ProtocolsListData() = default;
    AWS_FMS_API ProtocolsListData(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ProtocolsListData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline const Aws::String& GetListId() const { return m_listId; }
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }
    template<typename ListIdT = Aws::String>
    void SetListId(ListIdT&& value) { m_listIdHasBeenSet = true; m_listId = std::forward<ListIdT>(value); }
    template<typename ListIdT = Aws::String>
    ProtocolsListData& WithListId(ListIdT&& value) { SetListId(std::forward<ListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline const Aws::String& GetListName() const { return m_listName; }
    inline bool ListNameHasBeenSet() const { return m_listNameHasBeenSet; }
    template<typename ListNameT = Aws::String>
    void SetListName(ListNameT&& value) { m_listNameHasBeenSet = true; m_listName = std::forward<ListNameT>(value); }
    template<typename ListNameT = Aws::String>
    ProtocolsListData& WithListName(ListNameT&& value) { SetListName(std::forward<ListNameT>(value)); return *this;}
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
    ProtocolsListData& WithListUpdateToken(ListUpdateTokenT&& value) { SetListUpdateToken(std::forward<ListUpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Firewall Manager protocols list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ProtocolsListData& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Firewall Manager protocols list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    ProtocolsListData& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocolsList() const { return m_protocolsList; }
    inline bool ProtocolsListHasBeenSet() const { return m_protocolsListHasBeenSet; }
    template<typename ProtocolsListT = Aws::Vector<Aws::String>>
    void SetProtocolsList(ProtocolsListT&& value) { m_protocolsListHasBeenSet = true; m_protocolsList = std::forward<ProtocolsListT>(value); }
    template<typename ProtocolsListT = Aws::Vector<Aws::String>>
    ProtocolsListData& WithProtocolsList(ProtocolsListT&& value) { SetProtocolsList(std::forward<ProtocolsListT>(value)); return *this;}
    template<typename ProtocolsListT = Aws::String>
    ProtocolsListData& AddProtocolsList(ProtocolsListT&& value) { m_protocolsListHasBeenSet = true; m_protocolsList.emplace_back(std::forward<ProtocolsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetPreviousProtocolsList() const { return m_previousProtocolsList; }
    inline bool PreviousProtocolsListHasBeenSet() const { return m_previousProtocolsListHasBeenSet; }
    template<typename PreviousProtocolsListT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetPreviousProtocolsList(PreviousProtocolsListT&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList = std::forward<PreviousProtocolsListT>(value); }
    template<typename PreviousProtocolsListT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    ProtocolsListData& WithPreviousProtocolsList(PreviousProtocolsListT&& value) { SetPreviousProtocolsList(std::forward<PreviousProtocolsListT>(value)); return *this;}
    template<typename PreviousProtocolsListKeyT = Aws::String, typename PreviousProtocolsListValueT = Aws::Vector<Aws::String>>
    ProtocolsListData& AddPreviousProtocolsList(PreviousProtocolsListKeyT&& key, PreviousProtocolsListValueT&& value) {
      m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(std::forward<PreviousProtocolsListKeyT>(key), std::forward<PreviousProtocolsListValueT>(value)); return *this;
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

    Aws::Vector<Aws::String> m_protocolsList;
    bool m_protocolsListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_previousProtocolsList;
    bool m_previousProtocolsListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
