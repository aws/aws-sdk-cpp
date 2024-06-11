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
    AWS_FMS_API ProtocolsListData();
    AWS_FMS_API ProtocolsListData(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ProtocolsListData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline const Aws::String& GetListId() const{ return m_listId; }
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }
    inline void SetListId(const Aws::String& value) { m_listIdHasBeenSet = true; m_listId = value; }
    inline void SetListId(Aws::String&& value) { m_listIdHasBeenSet = true; m_listId = std::move(value); }
    inline void SetListId(const char* value) { m_listIdHasBeenSet = true; m_listId.assign(value); }
    inline ProtocolsListData& WithListId(const Aws::String& value) { SetListId(value); return *this;}
    inline ProtocolsListData& WithListId(Aws::String&& value) { SetListId(std::move(value)); return *this;}
    inline ProtocolsListData& WithListId(const char* value) { SetListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline const Aws::String& GetListName() const{ return m_listName; }
    inline bool ListNameHasBeenSet() const { return m_listNameHasBeenSet; }
    inline void SetListName(const Aws::String& value) { m_listNameHasBeenSet = true; m_listName = value; }
    inline void SetListName(Aws::String&& value) { m_listNameHasBeenSet = true; m_listName = std::move(value); }
    inline void SetListName(const char* value) { m_listNameHasBeenSet = true; m_listName.assign(value); }
    inline ProtocolsListData& WithListName(const Aws::String& value) { SetListName(value); return *this;}
    inline ProtocolsListData& WithListName(Aws::String&& value) { SetListName(std::move(value)); return *this;}
    inline ProtocolsListData& WithListName(const char* value) { SetListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline const Aws::String& GetListUpdateToken() const{ return m_listUpdateToken; }
    inline bool ListUpdateTokenHasBeenSet() const { return m_listUpdateTokenHasBeenSet; }
    inline void SetListUpdateToken(const Aws::String& value) { m_listUpdateTokenHasBeenSet = true; m_listUpdateToken = value; }
    inline void SetListUpdateToken(Aws::String&& value) { m_listUpdateTokenHasBeenSet = true; m_listUpdateToken = std::move(value); }
    inline void SetListUpdateToken(const char* value) { m_listUpdateTokenHasBeenSet = true; m_listUpdateToken.assign(value); }
    inline ProtocolsListData& WithListUpdateToken(const Aws::String& value) { SetListUpdateToken(value); return *this;}
    inline ProtocolsListData& WithListUpdateToken(Aws::String&& value) { SetListUpdateToken(std::move(value)); return *this;}
    inline ProtocolsListData& WithListUpdateToken(const char* value) { SetListUpdateToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Firewall Manager protocols list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ProtocolsListData& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ProtocolsListData& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Firewall Manager protocols list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline ProtocolsListData& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline ProtocolsListData& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocolsList() const{ return m_protocolsList; }
    inline bool ProtocolsListHasBeenSet() const { return m_protocolsListHasBeenSet; }
    inline void SetProtocolsList(const Aws::Vector<Aws::String>& value) { m_protocolsListHasBeenSet = true; m_protocolsList = value; }
    inline void SetProtocolsList(Aws::Vector<Aws::String>&& value) { m_protocolsListHasBeenSet = true; m_protocolsList = std::move(value); }
    inline ProtocolsListData& WithProtocolsList(const Aws::Vector<Aws::String>& value) { SetProtocolsList(value); return *this;}
    inline ProtocolsListData& WithProtocolsList(Aws::Vector<Aws::String>&& value) { SetProtocolsList(std::move(value)); return *this;}
    inline ProtocolsListData& AddProtocolsList(const Aws::String& value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(value); return *this; }
    inline ProtocolsListData& AddProtocolsList(Aws::String&& value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(std::move(value)); return *this; }
    inline ProtocolsListData& AddProtocolsList(const char* value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetPreviousProtocolsList() const{ return m_previousProtocolsList; }
    inline bool PreviousProtocolsListHasBeenSet() const { return m_previousProtocolsListHasBeenSet; }
    inline void SetPreviousProtocolsList(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList = value; }
    inline void SetPreviousProtocolsList(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList = std::move(value); }
    inline ProtocolsListData& WithPreviousProtocolsList(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetPreviousProtocolsList(value); return *this;}
    inline ProtocolsListData& WithPreviousProtocolsList(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetPreviousProtocolsList(std::move(value)); return *this;}
    inline ProtocolsListData& AddPreviousProtocolsList(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(key, value); return *this; }
    inline ProtocolsListData& AddPreviousProtocolsList(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(std::move(key), value); return *this; }
    inline ProtocolsListData& AddPreviousProtocolsList(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(key, std::move(value)); return *this; }
    inline ProtocolsListData& AddPreviousProtocolsList(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(std::move(key), std::move(value)); return *this; }
    inline ProtocolsListData& AddPreviousProtocolsList(const char* key, Aws::Vector<Aws::String>&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(key, std::move(value)); return *this; }
    inline ProtocolsListData& AddPreviousProtocolsList(const char* key, const Aws::Vector<Aws::String>& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(key, value); return *this; }
    ///@}
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

    Aws::Vector<Aws::String> m_protocolsList;
    bool m_protocolsListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_previousProtocolsList;
    bool m_previousProtocolsListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
