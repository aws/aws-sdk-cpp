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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Filters the connection definitions that are returned by the
   * <code>GetConnections</code> API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnectionsFilter">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API GetConnectionsFilter
  {
  public:
    GetConnectionsFilter();
    GetConnectionsFilter(Aws::Utils::Json::JsonView jsonValue);
    GetConnectionsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchCriteria() const{ return m_matchCriteria; }

    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }

    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline void SetMatchCriteria(const Aws::Vector<Aws::String>& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = value; }

    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline void SetMatchCriteria(Aws::Vector<Aws::String>&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::move(value); }

    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline GetConnectionsFilter& WithMatchCriteria(const Aws::Vector<Aws::String>& value) { SetMatchCriteria(value); return *this;}

    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline GetConnectionsFilter& WithMatchCriteria(Aws::Vector<Aws::String>&& value) { SetMatchCriteria(std::move(value)); return *this;}

    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline GetConnectionsFilter& AddMatchCriteria(const Aws::String& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }

    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline GetConnectionsFilter& AddMatchCriteria(Aws::String&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(std::move(value)); return *this; }

    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline GetConnectionsFilter& AddMatchCriteria(const char* value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }


    /**
     * <p>The type of connections to return. Currently, only JDBC is supported; SFTP is
     * not supported.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The type of connections to return. Currently, only JDBC is supported; SFTP is
     * not supported.</p>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The type of connections to return. Currently, only JDBC is supported; SFTP is
     * not supported.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The type of connections to return. Currently, only JDBC is supported; SFTP is
     * not supported.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The type of connections to return. Currently, only JDBC is supported; SFTP is
     * not supported.</p>
     */
    inline GetConnectionsFilter& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of connections to return. Currently, only JDBC is supported; SFTP is
     * not supported.</p>
     */
    inline GetConnectionsFilter& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_matchCriteria;
    bool m_matchCriteriaHasBeenSet;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
