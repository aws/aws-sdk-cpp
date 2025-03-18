/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/Duration.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents types of timeouts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TcpTimeout">AWS
   * API Reference</a></p>
   */
  class TcpTimeout
  {
  public:
    AWS_APPMESH_API TcpTimeout() = default;
    AWS_APPMESH_API TcpTimeout(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API TcpTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents an idle timeout. An idle timeout bounds the amount
     * of time that a connection may be idle. The default value is none.</p>
     */
    inline const Duration& GetIdle() const { return m_idle; }
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }
    template<typename IdleT = Duration>
    void SetIdle(IdleT&& value) { m_idleHasBeenSet = true; m_idle = std::forward<IdleT>(value); }
    template<typename IdleT = Duration>
    TcpTimeout& WithIdle(IdleT&& value) { SetIdle(std::forward<IdleT>(value)); return *this;}
    ///@}
  private:

    Duration m_idle;
    bool m_idleHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
