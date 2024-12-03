/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetConnectionsFilter
  {
  public:
    AWS_GLUE_API GetConnectionsFilter();
    AWS_GLUE_API GetConnectionsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GetConnectionsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A criteria string that must match the criteria recorded in the connection
     * definition for that connection definition to be returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchCriteria() const{ return m_matchCriteria; }
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
    inline void SetMatchCriteria(const Aws::Vector<Aws::String>& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = value; }
    inline void SetMatchCriteria(Aws::Vector<Aws::String>&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::move(value); }
    inline GetConnectionsFilter& WithMatchCriteria(const Aws::Vector<Aws::String>& value) { SetMatchCriteria(value); return *this;}
    inline GetConnectionsFilter& WithMatchCriteria(Aws::Vector<Aws::String>&& value) { SetMatchCriteria(std::move(value)); return *this;}
    inline GetConnectionsFilter& AddMatchCriteria(const Aws::String& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }
    inline GetConnectionsFilter& AddMatchCriteria(Aws::String&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(std::move(value)); return *this; }
    inline GetConnectionsFilter& AddMatchCriteria(const char* value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of connections to return. Currently, SFTP is not supported.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline GetConnectionsFilter& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline GetConnectionsFilter& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes if the connection was created with schema version 1 or 2.</p>
     */
    inline int GetConnectionSchemaVersion() const{ return m_connectionSchemaVersion; }
    inline bool ConnectionSchemaVersionHasBeenSet() const { return m_connectionSchemaVersionHasBeenSet; }
    inline void SetConnectionSchemaVersion(int value) { m_connectionSchemaVersionHasBeenSet = true; m_connectionSchemaVersion = value; }
    inline GetConnectionsFilter& WithConnectionSchemaVersion(int value) { SetConnectionSchemaVersion(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_matchCriteria;
    bool m_matchCriteriaHasBeenSet = false;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    int m_connectionSchemaVersion;
    bool m_connectionSchemaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
