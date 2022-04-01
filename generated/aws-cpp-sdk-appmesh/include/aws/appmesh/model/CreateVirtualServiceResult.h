﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualServiceData.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualServiceOutput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API CreateVirtualServiceResult
  {
  public:
    CreateVirtualServiceResult();
    CreateVirtualServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateVirtualServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline const VirtualServiceData& GetVirtualService() const{ return m_virtualService; }

    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline void SetVirtualService(const VirtualServiceData& value) { m_virtualService = value; }

    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline void SetVirtualService(VirtualServiceData&& value) { m_virtualService = std::move(value); }

    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline CreateVirtualServiceResult& WithVirtualService(const VirtualServiceData& value) { SetVirtualService(value); return *this;}

    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline CreateVirtualServiceResult& WithVirtualService(VirtualServiceData&& value) { SetVirtualService(std::move(value)); return *this;}

  private:

    VirtualServiceData m_virtualService;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
