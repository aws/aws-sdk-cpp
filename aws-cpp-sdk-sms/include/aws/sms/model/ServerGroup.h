/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/Server.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>A logical grouping of servers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerGroup">AWS API
   * Reference</a></p>
   */
  class AWS_SMS_API ServerGroup
  {
  public:
    ServerGroup();
    ServerGroup(Aws::Utils::Json::JsonView jsonValue);
    ServerGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of a server group.</p>
     */
    inline const Aws::String& GetServerGroupId() const{ return m_serverGroupId; }

    /**
     * <p>Identifier of a server group.</p>
     */
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }

    /**
     * <p>Identifier of a server group.</p>
     */
    inline void SetServerGroupId(const Aws::String& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = value; }

    /**
     * <p>Identifier of a server group.</p>
     */
    inline void SetServerGroupId(Aws::String&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::move(value); }

    /**
     * <p>Identifier of a server group.</p>
     */
    inline void SetServerGroupId(const char* value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId.assign(value); }

    /**
     * <p>Identifier of a server group.</p>
     */
    inline ServerGroup& WithServerGroupId(const Aws::String& value) { SetServerGroupId(value); return *this;}

    /**
     * <p>Identifier of a server group.</p>
     */
    inline ServerGroup& WithServerGroupId(Aws::String&& value) { SetServerGroupId(std::move(value)); return *this;}

    /**
     * <p>Identifier of a server group.</p>
     */
    inline ServerGroup& WithServerGroupId(const char* value) { SetServerGroupId(value); return *this;}


    /**
     * <p>Name of a server group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of a server group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of a server group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of a server group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of a server group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of a server group.</p>
     */
    inline ServerGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of a server group.</p>
     */
    inline ServerGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of a server group.</p>
     */
    inline ServerGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>List of servers belonging to a server group.</p>
     */
    inline const Aws::Vector<Server>& GetServerList() const{ return m_serverList; }

    /**
     * <p>List of servers belonging to a server group.</p>
     */
    inline bool ServerListHasBeenSet() const { return m_serverListHasBeenSet; }

    /**
     * <p>List of servers belonging to a server group.</p>
     */
    inline void SetServerList(const Aws::Vector<Server>& value) { m_serverListHasBeenSet = true; m_serverList = value; }

    /**
     * <p>List of servers belonging to a server group.</p>
     */
    inline void SetServerList(Aws::Vector<Server>&& value) { m_serverListHasBeenSet = true; m_serverList = std::move(value); }

    /**
     * <p>List of servers belonging to a server group.</p>
     */
    inline ServerGroup& WithServerList(const Aws::Vector<Server>& value) { SetServerList(value); return *this;}

    /**
     * <p>List of servers belonging to a server group.</p>
     */
    inline ServerGroup& WithServerList(Aws::Vector<Server>&& value) { SetServerList(std::move(value)); return *this;}

    /**
     * <p>List of servers belonging to a server group.</p>
     */
    inline ServerGroup& AddServerList(const Server& value) { m_serverListHasBeenSet = true; m_serverList.push_back(value); return *this; }

    /**
     * <p>List of servers belonging to a server group.</p>
     */
    inline ServerGroup& AddServerList(Server&& value) { m_serverListHasBeenSet = true; m_serverList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Server> m_serverList;
    bool m_serverListHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
