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
    AWS_GLUE_API ConnectionsList();
    AWS_GLUE_API ConnectionsList(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectionsList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of connections used by the job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnections() const{ return m_connections; }

    /**
     * <p>A list of connections used by the job.</p>
     */
    inline bool ConnectionsHasBeenSet() const { return m_connectionsHasBeenSet; }

    /**
     * <p>A list of connections used by the job.</p>
     */
    inline void SetConnections(const Aws::Vector<Aws::String>& value) { m_connectionsHasBeenSet = true; m_connections = value; }

    /**
     * <p>A list of connections used by the job.</p>
     */
    inline void SetConnections(Aws::Vector<Aws::String>&& value) { m_connectionsHasBeenSet = true; m_connections = std::move(value); }

    /**
     * <p>A list of connections used by the job.</p>
     */
    inline ConnectionsList& WithConnections(const Aws::Vector<Aws::String>& value) { SetConnections(value); return *this;}

    /**
     * <p>A list of connections used by the job.</p>
     */
    inline ConnectionsList& WithConnections(Aws::Vector<Aws::String>&& value) { SetConnections(std::move(value)); return *this;}

    /**
     * <p>A list of connections used by the job.</p>
     */
    inline ConnectionsList& AddConnections(const Aws::String& value) { m_connectionsHasBeenSet = true; m_connections.push_back(value); return *this; }

    /**
     * <p>A list of connections used by the job.</p>
     */
    inline ConnectionsList& AddConnections(Aws::String&& value) { m_connectionsHasBeenSet = true; m_connections.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of connections used by the job.</p>
     */
    inline ConnectionsList& AddConnections(const char* value) { m_connectionsHasBeenSet = true; m_connections.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_connections;
    bool m_connectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
