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
#include <aws/appmesh/model/EgressFilter.h>
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
   * <p>An object representing the specification of a service mesh.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/MeshSpec">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API MeshSpec
  {
  public:
    MeshSpec();
    MeshSpec(Aws::Utils::Json::JsonView jsonValue);
    MeshSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline const EgressFilter& GetEgressFilter() const{ return m_egressFilter; }

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline bool EgressFilterHasBeenSet() const { return m_egressFilterHasBeenSet; }

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline void SetEgressFilter(const EgressFilter& value) { m_egressFilterHasBeenSet = true; m_egressFilter = value; }

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline void SetEgressFilter(EgressFilter&& value) { m_egressFilterHasBeenSet = true; m_egressFilter = std::move(value); }

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline MeshSpec& WithEgressFilter(const EgressFilter& value) { SetEgressFilter(value); return *this;}

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline MeshSpec& WithEgressFilter(EgressFilter&& value) { SetEgressFilter(std::move(value)); return *this;}

  private:

    EgressFilter m_egressFilter;
    bool m_egressFilterHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
