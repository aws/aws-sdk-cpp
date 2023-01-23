/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualServiceStatusCode.h>
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
   * <p>An object that represents the status of a virtual service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualServiceStatus">AWS
   * API Reference</a></p>
   */
  class VirtualServiceStatus
  {
  public:
    AWS_APPMESH_API VirtualServiceStatus();
    AWS_APPMESH_API VirtualServiceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualServiceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the virtual service.</p>
     */
    inline const VirtualServiceStatusCode& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the virtual service.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the virtual service.</p>
     */
    inline void SetStatus(const VirtualServiceStatusCode& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the virtual service.</p>
     */
    inline void SetStatus(VirtualServiceStatusCode&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the virtual service.</p>
     */
    inline VirtualServiceStatus& WithStatus(const VirtualServiceStatusCode& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the virtual service.</p>
     */
    inline VirtualServiceStatus& WithStatus(VirtualServiceStatusCode&& value) { SetStatus(std::move(value)); return *this;}

  private:

    VirtualServiceStatusCode m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
