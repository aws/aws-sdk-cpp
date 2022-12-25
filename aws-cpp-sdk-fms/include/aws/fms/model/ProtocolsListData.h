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


    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline const Aws::String& GetListId() const{ return m_listId; }

    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }

    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline void SetListId(const Aws::String& value) { m_listIdHasBeenSet = true; m_listId = value; }

    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline void SetListId(Aws::String&& value) { m_listIdHasBeenSet = true; m_listId = std::move(value); }

    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline void SetListId(const char* value) { m_listIdHasBeenSet = true; m_listId.assign(value); }

    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& WithListId(const Aws::String& value) { SetListId(value); return *this;}

    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& WithListId(Aws::String&& value) { SetListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& WithListId(const char* value) { SetListId(value); return *this;}


    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline const Aws::String& GetListName() const{ return m_listName; }

    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline bool ListNameHasBeenSet() const { return m_listNameHasBeenSet; }

    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline void SetListName(const Aws::String& value) { m_listNameHasBeenSet = true; m_listName = value; }

    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline void SetListName(Aws::String&& value) { m_listNameHasBeenSet = true; m_listName = std::move(value); }

    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline void SetListName(const char* value) { m_listNameHasBeenSet = true; m_listName.assign(value); }

    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& WithListName(const Aws::String& value) { SetListName(value); return *this;}

    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& WithListName(Aws::String&& value) { SetListName(std::move(value)); return *this;}

    /**
     * <p>The name of the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& WithListName(const char* value) { SetListName(value); return *this;}


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
    inline ProtocolsListData& WithListUpdateToken(const Aws::String& value) { SetListUpdateToken(value); return *this;}

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline ProtocolsListData& WithListUpdateToken(Aws::String&& value) { SetListUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for each update to the list. When you update the list,
     * the update token must match the token of the current version of the application
     * list. You can retrieve the update token by getting the list. </p>
     */
    inline ProtocolsListData& WithListUpdateToken(const char* value) { SetListUpdateToken(value); return *this;}


    /**
     * <p>The time that the Firewall Manager protocols list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time that the Firewall Manager protocols list was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time that the Firewall Manager protocols list was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time that the Firewall Manager protocols list was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time that the Firewall Manager protocols list was created.</p>
     */
    inline ProtocolsListData& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time that the Firewall Manager protocols list was created.</p>
     */
    inline ProtocolsListData& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time that the Firewall Manager protocols list was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The time that the Firewall Manager protocols list was last updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The time that the Firewall Manager protocols list was last updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The time that the Firewall Manager protocols list was last updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The time that the Firewall Manager protocols list was last updated.</p>
     */
    inline ProtocolsListData& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The time that the Firewall Manager protocols list was last updated.</p>
     */
    inline ProtocolsListData& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocolsList() const{ return m_protocolsList; }

    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline bool ProtocolsListHasBeenSet() const { return m_protocolsListHasBeenSet; }

    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline void SetProtocolsList(const Aws::Vector<Aws::String>& value) { m_protocolsListHasBeenSet = true; m_protocolsList = value; }

    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline void SetProtocolsList(Aws::Vector<Aws::String>&& value) { m_protocolsListHasBeenSet = true; m_protocolsList = std::move(value); }

    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& WithProtocolsList(const Aws::Vector<Aws::String>& value) { SetProtocolsList(value); return *this;}

    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& WithProtocolsList(Aws::Vector<Aws::String>&& value) { SetProtocolsList(std::move(value)); return *this;}

    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& AddProtocolsList(const Aws::String& value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(value); return *this; }

    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& AddProtocolsList(Aws::String&& value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of protocols in the Firewall Manager protocols list.</p>
     */
    inline ProtocolsListData& AddProtocolsList(const char* value) { m_protocolsListHasBeenSet = true; m_protocolsList.push_back(value); return *this; }


    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetPreviousProtocolsList() const{ return m_previousProtocolsList; }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline bool PreviousProtocolsListHasBeenSet() const { return m_previousProtocolsListHasBeenSet; }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline void SetPreviousProtocolsList(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList = value; }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline void SetPreviousProtocolsList(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList = std::move(value); }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline ProtocolsListData& WithPreviousProtocolsList(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetPreviousProtocolsList(value); return *this;}

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline ProtocolsListData& WithPreviousProtocolsList(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetPreviousProtocolsList(std::move(value)); return *this;}

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline ProtocolsListData& AddPreviousProtocolsList(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(key, value); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline ProtocolsListData& AddPreviousProtocolsList(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline ProtocolsListData& AddPreviousProtocolsList(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline ProtocolsListData& AddPreviousProtocolsList(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline ProtocolsListData& AddPreviousProtocolsList(const char* key, Aws::Vector<Aws::String>&& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of previous version numbers to their corresponding protocol arrays.</p>
     */
    inline ProtocolsListData& AddPreviousProtocolsList(const char* key, const Aws::Vector<Aws::String>& value) { m_previousProtocolsListHasBeenSet = true; m_previousProtocolsList.emplace(key, value); return *this; }

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
