/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/MultiRegionAccessPointRoute.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetMultiRegionAccessPointRoutesResult
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult();
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline const Aws::String& GetMrap() const{ return m_mrap; }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline void SetMrap(const Aws::String& value) { m_mrap = value; }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline void SetMrap(Aws::String&& value) { m_mrap = std::move(value); }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline void SetMrap(const char* value) { m_mrap.assign(value); }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline GetMultiRegionAccessPointRoutesResult& WithMrap(const Aws::String& value) { SetMrap(value); return *this;}

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline GetMultiRegionAccessPointRoutesResult& WithMrap(Aws::String&& value) { SetMrap(std::move(value)); return *this;}

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline GetMultiRegionAccessPointRoutesResult& WithMrap(const char* value) { SetMrap(value); return *this;}


    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline const Aws::Vector<MultiRegionAccessPointRoute>& GetRoutes() const{ return m_routes; }

    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline void SetRoutes(const Aws::Vector<MultiRegionAccessPointRoute>& value) { m_routes = value; }

    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline void SetRoutes(Aws::Vector<MultiRegionAccessPointRoute>&& value) { m_routes = std::move(value); }

    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline GetMultiRegionAccessPointRoutesResult& WithRoutes(const Aws::Vector<MultiRegionAccessPointRoute>& value) { SetRoutes(value); return *this;}

    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline GetMultiRegionAccessPointRoutesResult& WithRoutes(Aws::Vector<MultiRegionAccessPointRoute>&& value) { SetRoutes(std::move(value)); return *this;}

    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline GetMultiRegionAccessPointRoutesResult& AddRoutes(const MultiRegionAccessPointRoute& value) { m_routes.push_back(value); return *this; }

    /**
     * <p>The different routes that make up the route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline GetMultiRegionAccessPointRoutesResult& AddRoutes(MultiRegionAccessPointRoute&& value) { m_routes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_mrap;

    Aws::Vector<MultiRegionAccessPointRoute> m_routes;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
