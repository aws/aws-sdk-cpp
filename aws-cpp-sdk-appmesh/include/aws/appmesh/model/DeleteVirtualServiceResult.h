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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualServiceOutput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API DeleteVirtualServiceResult
  {
  public:
    DeleteVirtualServiceResult();
    DeleteVirtualServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteVirtualServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The virtual service that was deleted.</p>
     */
    inline const VirtualServiceData& GetVirtualService() const{ return m_virtualService; }

    /**
     * <p>The virtual service that was deleted.</p>
     */
    inline void SetVirtualService(const VirtualServiceData& value) { m_virtualService = value; }

    /**
     * <p>The virtual service that was deleted.</p>
     */
    inline void SetVirtualService(VirtualServiceData&& value) { m_virtualService = std::move(value); }

    /**
     * <p>The virtual service that was deleted.</p>
     */
    inline DeleteVirtualServiceResult& WithVirtualService(const VirtualServiceData& value) { SetVirtualService(value); return *this;}

    /**
     * <p>The virtual service that was deleted.</p>
     */
    inline DeleteVirtualServiceResult& WithVirtualService(VirtualServiceData&& value) { SetVirtualService(std::move(value)); return *this;}

  private:

    VirtualServiceData m_virtualService;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
