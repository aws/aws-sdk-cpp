/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/MeshStatusCode.h>
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
   * <p>An object that represents the status of a service mesh.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/MeshStatus">AWS
   * API Reference</a></p>
   */
  class MeshStatus
  {
  public:
    AWS_APPMESH_API MeshStatus();
    AWS_APPMESH_API MeshStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API MeshStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current mesh status.</p>
     */
    inline const MeshStatusCode& GetStatus() const{ return m_status; }

    /**
     * <p>The current mesh status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current mesh status.</p>
     */
    inline void SetStatus(const MeshStatusCode& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current mesh status.</p>
     */
    inline void SetStatus(MeshStatusCode&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current mesh status.</p>
     */
    inline MeshStatus& WithStatus(const MeshStatusCode& value) { SetStatus(value); return *this;}

    /**
     * <p>The current mesh status.</p>
     */
    inline MeshStatus& WithStatus(MeshStatusCode&& value) { SetStatus(std::move(value)); return *this;}

  private:

    MeshStatusCode m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
