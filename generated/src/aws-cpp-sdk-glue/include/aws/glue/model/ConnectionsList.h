/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies the connections used by a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionsList">AWS
   * API Reference</a></p>
   */
  class ConnectionsList
  {
  public:
    AWS_GLUE_API ConnectionsList() = default;
    AWS_GLUE_API ConnectionsList(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectionsList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of connections used by the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnections() const { return m_connections; }
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }
    template<typename ConnectionsT = Aws::Vector<Aws::String>>
    void SetConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections = std::forward<ConnectionsT>(value); }
    template<typename ConnectionsT = Aws::Vector<Aws::String>>
    ConnectionsList& WithConnections(ConnectionsT&& value) { SetConnections(std::forward<ConnectionsT>(value)); return *this;}
    template<typename ConnectionsT = Aws::String>
    ConnectionsList& AddConnections(ConnectionsT&& value) { m_connectionsHasBeenSet = true; m_connections.emplace_back(std::forward<ConnectionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_connections;
    bool m_connectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
