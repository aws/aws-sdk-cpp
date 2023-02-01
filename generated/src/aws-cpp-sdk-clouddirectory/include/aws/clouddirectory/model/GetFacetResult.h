/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/Facet.h>
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
namespace CloudDirectory
{
namespace Model
{
  class GetFacetResult
  {
  public:
    AWS_CLOUDDIRECTORY_API GetFacetResult();
    AWS_CLOUDDIRECTORY_API GetFacetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API GetFacetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a>Facet</a> structure that is associated with the facet.</p>
     */
    inline const Facet& GetFacet() const{ return m_facet; }

    /**
     * <p>The <a>Facet</a> structure that is associated with the facet.</p>
     */
    inline void SetFacet(const Facet& value) { m_facet = value; }

    /**
     * <p>The <a>Facet</a> structure that is associated with the facet.</p>
     */
    inline void SetFacet(Facet&& value) { m_facet = std::move(value); }

    /**
     * <p>The <a>Facet</a> structure that is associated with the facet.</p>
     */
    inline GetFacetResult& WithFacet(const Facet& value) { SetFacet(value); return *this;}

    /**
     * <p>The <a>Facet</a> structure that is associated with the facet.</p>
     */
    inline GetFacetResult& WithFacet(Facet&& value) { SetFacet(std::move(value)); return *this;}

  private:

    Facet m_facet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
