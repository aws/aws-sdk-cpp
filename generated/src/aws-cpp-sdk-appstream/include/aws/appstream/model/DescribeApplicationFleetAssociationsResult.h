/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ApplicationFleetAssociation.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeApplicationFleetAssociationsResult
  {
  public:
    AWS_APPSTREAM_API DescribeApplicationFleetAssociationsResult();
    AWS_APPSTREAM_API DescribeApplicationFleetAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeApplicationFleetAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application fleet associations in the list.</p>
     */
    inline const Aws::Vector<ApplicationFleetAssociation>& GetApplicationFleetAssociations() const{ return m_applicationFleetAssociations; }

    /**
     * <p>The application fleet associations in the list.</p>
     */
    inline void SetApplicationFleetAssociations(const Aws::Vector<ApplicationFleetAssociation>& value) { m_applicationFleetAssociations = value; }

    /**
     * <p>The application fleet associations in the list.</p>
     */
    inline void SetApplicationFleetAssociations(Aws::Vector<ApplicationFleetAssociation>&& value) { m_applicationFleetAssociations = std::move(value); }

    /**
     * <p>The application fleet associations in the list.</p>
     */
    inline DescribeApplicationFleetAssociationsResult& WithApplicationFleetAssociations(const Aws::Vector<ApplicationFleetAssociation>& value) { SetApplicationFleetAssociations(value); return *this;}

    /**
     * <p>The application fleet associations in the list.</p>
     */
    inline DescribeApplicationFleetAssociationsResult& WithApplicationFleetAssociations(Aws::Vector<ApplicationFleetAssociation>&& value) { SetApplicationFleetAssociations(std::move(value)); return *this;}

    /**
     * <p>The application fleet associations in the list.</p>
     */
    inline DescribeApplicationFleetAssociationsResult& AddApplicationFleetAssociations(const ApplicationFleetAssociation& value) { m_applicationFleetAssociations.push_back(value); return *this; }

    /**
     * <p>The application fleet associations in the list.</p>
     */
    inline DescribeApplicationFleetAssociationsResult& AddApplicationFleetAssociations(ApplicationFleetAssociation&& value) { m_applicationFleetAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeApplicationFleetAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeApplicationFleetAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeApplicationFleetAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationFleetAssociation> m_applicationFleetAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
