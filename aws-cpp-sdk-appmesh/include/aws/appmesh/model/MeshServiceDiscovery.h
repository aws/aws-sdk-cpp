/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/IpPreference.h>
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
   * <p>An object that represents the service discovery information for a service
   * mesh.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/MeshServiceDiscovery">AWS
   * API Reference</a></p>
   */
  class MeshServiceDiscovery
  {
  public:
    AWS_APPMESH_API MeshServiceDiscovery();
    AWS_APPMESH_API MeshServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API MeshServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP version to use to control traffic within the mesh.</p>
     */
    inline const IpPreference& GetIpPreference() const{ return m_ipPreference; }

    /**
     * <p>The IP version to use to control traffic within the mesh.</p>
     */
    inline bool IpPreferenceHasBeenSet() const { return m_ipPreferenceHasBeenSet; }

    /**
     * <p>The IP version to use to control traffic within the mesh.</p>
     */
    inline void SetIpPreference(const IpPreference& value) { m_ipPreferenceHasBeenSet = true; m_ipPreference = value; }

    /**
     * <p>The IP version to use to control traffic within the mesh.</p>
     */
    inline void SetIpPreference(IpPreference&& value) { m_ipPreferenceHasBeenSet = true; m_ipPreference = std::move(value); }

    /**
     * <p>The IP version to use to control traffic within the mesh.</p>
     */
    inline MeshServiceDiscovery& WithIpPreference(const IpPreference& value) { SetIpPreference(value); return *this;}

    /**
     * <p>The IP version to use to control traffic within the mesh.</p>
     */
    inline MeshServiceDiscovery& WithIpPreference(IpPreference&& value) { SetIpPreference(std::move(value)); return *this;}

  private:

    IpPreference m_ipPreference;
    bool m_ipPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
