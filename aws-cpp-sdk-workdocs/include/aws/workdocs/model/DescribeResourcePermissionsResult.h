/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/Principal.h>
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
namespace WorkDocs
{
namespace Model
{
  class DescribeResourcePermissionsResult
  {
  public:
    AWS_WORKDOCS_API DescribeResourcePermissionsResult();
    AWS_WORKDOCS_API DescribeResourcePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeResourcePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The principals.</p>
     */
    inline const Aws::Vector<Principal>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The principals.</p>
     */
    inline void SetPrincipals(const Aws::Vector<Principal>& value) { m_principals = value; }

    /**
     * <p>The principals.</p>
     */
    inline void SetPrincipals(Aws::Vector<Principal>&& value) { m_principals = std::move(value); }

    /**
     * <p>The principals.</p>
     */
    inline DescribeResourcePermissionsResult& WithPrincipals(const Aws::Vector<Principal>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The principals.</p>
     */
    inline DescribeResourcePermissionsResult& WithPrincipals(Aws::Vector<Principal>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>The principals.</p>
     */
    inline DescribeResourcePermissionsResult& AddPrincipals(const Principal& value) { m_principals.push_back(value); return *this; }

    /**
     * <p>The principals.</p>
     */
    inline DescribeResourcePermissionsResult& AddPrincipals(Principal&& value) { m_principals.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeResourcePermissionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeResourcePermissionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeResourcePermissionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<Principal> m_principals;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
