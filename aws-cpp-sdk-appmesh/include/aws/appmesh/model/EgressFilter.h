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
   * <p>An object representing the egress filter rules for a service
   * mesh.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/EgressFilter">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API EgressFilter
  {
  public:
    EgressFilter();
    EgressFilter(Aws::Utils::Json::JsonView jsonValue);
    EgressFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows
         egress only from virtual nodes to other defined resources in the
     * service mesh (and any
         traffic to <code>*.amazonaws.com</code> for AWS
     * API calls). You can set the egress filter
         type to
     * <code>ALLOW_ALL</code> to allow egress to any endpoint inside or outside of the

     *         service mesh.</p>
     */
    inline const EgressFilterType& GetType() const{ return m_type; }

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows
         egress only from virtual nodes to other defined resources in the
     * service mesh (and any
         traffic to <code>*.amazonaws.com</code> for AWS
     * API calls). You can set the egress filter
         type to
     * <code>ALLOW_ALL</code> to allow egress to any endpoint inside or outside of the

     *         service mesh.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows
         egress only from virtual nodes to other defined resources in the
     * service mesh (and any
         traffic to <code>*.amazonaws.com</code> for AWS
     * API calls). You can set the egress filter
         type to
     * <code>ALLOW_ALL</code> to allow egress to any endpoint inside or outside of the

     *         service mesh.</p>
     */
    inline void SetType(const EgressFilterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows
         egress only from virtual nodes to other defined resources in the
     * service mesh (and any
         traffic to <code>*.amazonaws.com</code> for AWS
     * API calls). You can set the egress filter
         type to
     * <code>ALLOW_ALL</code> to allow egress to any endpoint inside or outside of the

     *         service mesh.</p>
     */
    inline void SetType(EgressFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows
         egress only from virtual nodes to other defined resources in the
     * service mesh (and any
         traffic to <code>*.amazonaws.com</code> for AWS
     * API calls). You can set the egress filter
         type to
     * <code>ALLOW_ALL</code> to allow egress to any endpoint inside or outside of the

     *         service mesh.</p>
     */
    inline EgressFilter& WithType(const EgressFilterType& value) { SetType(value); return *this;}

    /**
     * <p>The egress filter type. By default, the type is <code>DROP_ALL</code>, which
     * allows
         egress only from virtual nodes to other defined resources in the
     * service mesh (and any
         traffic to <code>*.amazonaws.com</code> for AWS
     * API calls). You can set the egress filter
         type to
     * <code>ALLOW_ALL</code> to allow egress to any endpoint inside or outside of the

     *         service mesh.</p>
     */
    inline EgressFilter& WithType(EgressFilterType&& value) { SetType(std::move(value)); return *this;}

  private:

    EgressFilterType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
