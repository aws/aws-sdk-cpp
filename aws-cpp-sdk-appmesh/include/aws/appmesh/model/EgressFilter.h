/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/EgressFilterType.h>
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
   * <p>An object that represents the egress filter rules for a service
   * mesh.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/EgressFilter">AWS
   * API Reference</a></p>
   */
  class EgressFilter
  {
  public:
    AWS_APPMESH_API EgressFilter();
    AWS_APPMESH_API EgressFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API EgressFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows egress only from virtual nodes to other defined resources in the service
     * mesh (and any traffic to <code>*.amazonaws.com</code> for Amazon Web Services
     * API calls). You can set the egress filter type to <code>ALLOW_ALL</code> to
     * allow egress to any endpoint inside or outside of the service mesh.</p>
     */
    inline const EgressFilterType& GetType() const{ return m_type; }

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows egress only from virtual nodes to other defined resources in the service
     * mesh (and any traffic to <code>*.amazonaws.com</code> for Amazon Web Services
     * API calls). You can set the egress filter type to <code>ALLOW_ALL</code> to
     * allow egress to any endpoint inside or outside of the service mesh.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows egress only from virtual nodes to other defined resources in the service
     * mesh (and any traffic to <code>*.amazonaws.com</code> for Amazon Web Services
     * API calls). You can set the egress filter type to <code>ALLOW_ALL</code> to
     * allow egress to any endpoint inside or outside of the service mesh.</p>
     */
    inline void SetType(const EgressFilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows egress only from virtual nodes to other defined resources in the service
     * mesh (and any traffic to <code>*.amazonaws.com</code> for Amazon Web Services
     * API calls). You can set the egress filter type to <code>ALLOW_ALL</code> to
     * allow egress to any endpoint inside or outside of the service mesh.</p>
     */
    inline void SetType(EgressFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows egress only from virtual nodes to other defined resources in the service
     * mesh (and any traffic to <code>*.amazonaws.com</code> for Amazon Web Services
     * API calls). You can set the egress filter type to <code>ALLOW_ALL</code> to
     * allow egress to any endpoint inside or outside of the service mesh.</p>
     */
    inline EgressFilter& WithType(const EgressFilterType& value) { SetType(value); return *this;}

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows egress only from virtual nodes to other defined resources in the service
     * mesh (and any traffic to <code>*.amazonaws.com</code> for Amazon Web Services
     * API calls). You can set the egress filter type to <code>ALLOW_ALL</code> to
     * allow egress to any endpoint inside or outside of the service mesh.</p>
     */
    inline EgressFilter& WithType(EgressFilterType&& value) { SetType(std::move(value)); return *this;}

  private:

    EgressFilterType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
