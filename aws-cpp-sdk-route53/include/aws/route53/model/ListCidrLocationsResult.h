/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/LocationSummary.h>
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
namespace Route53
{
namespace Model
{
  class ListCidrLocationsResult
  {
  public:
    AWS_ROUTE53_API ListCidrLocationsResult();
    AWS_ROUTE53_API ListCidrLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListCidrLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline ListCidrLocationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline ListCidrLocationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline ListCidrLocationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A complex type that contains information about the list of CIDR
     * locations.</p>
     */
    inline const Aws::Vector<LocationSummary>& GetCidrLocations() const{ return m_cidrLocations; }

    /**
     * <p>A complex type that contains information about the list of CIDR
     * locations.</p>
     */
    inline void SetCidrLocations(const Aws::Vector<LocationSummary>& value) { m_cidrLocations = value; }

    /**
     * <p>A complex type that contains information about the list of CIDR
     * locations.</p>
     */
    inline void SetCidrLocations(Aws::Vector<LocationSummary>&& value) { m_cidrLocations = std::move(value); }

    /**
     * <p>A complex type that contains information about the list of CIDR
     * locations.</p>
     */
    inline ListCidrLocationsResult& WithCidrLocations(const Aws::Vector<LocationSummary>& value) { SetCidrLocations(value); return *this;}

    /**
     * <p>A complex type that contains information about the list of CIDR
     * locations.</p>
     */
    inline ListCidrLocationsResult& WithCidrLocations(Aws::Vector<LocationSummary>&& value) { SetCidrLocations(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains information about the list of CIDR
     * locations.</p>
     */
    inline ListCidrLocationsResult& AddCidrLocations(const LocationSummary& value) { m_cidrLocations.push_back(value); return *this; }

    /**
     * <p>A complex type that contains information about the list of CIDR
     * locations.</p>
     */
    inline ListCidrLocationsResult& AddCidrLocations(LocationSummary&& value) { m_cidrLocations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<LocationSummary> m_cidrLocations;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
