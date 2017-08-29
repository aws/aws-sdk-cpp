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
  class AWS_CLOUDDIRECTORY_API GetFacetResult
  {
  public:
    GetFacetResult();
    GetFacetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFacetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
