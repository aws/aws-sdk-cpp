/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/PackageDetails.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response returned by <code> <a>DescribePackages</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribePackagesResponse">AWS
   * API Reference</a></p>
   */
  class DescribePackagesResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesResult();
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of <code>PackageDetails</code> objects.</p>
     */
    inline const Aws::Vector<PackageDetails>& GetPackageDetailsList() const{ return m_packageDetailsList; }

    /**
     * <p>List of <code>PackageDetails</code> objects.</p>
     */
    inline void SetPackageDetailsList(const Aws::Vector<PackageDetails>& value) { m_packageDetailsList = value; }

    /**
     * <p>List of <code>PackageDetails</code> objects.</p>
     */
    inline void SetPackageDetailsList(Aws::Vector<PackageDetails>&& value) { m_packageDetailsList = std::move(value); }

    /**
     * <p>List of <code>PackageDetails</code> objects.</p>
     */
    inline DescribePackagesResult& WithPackageDetailsList(const Aws::Vector<PackageDetails>& value) { SetPackageDetailsList(value); return *this;}

    /**
     * <p>List of <code>PackageDetails</code> objects.</p>
     */
    inline DescribePackagesResult& WithPackageDetailsList(Aws::Vector<PackageDetails>&& value) { SetPackageDetailsList(std::move(value)); return *this;}

    /**
     * <p>List of <code>PackageDetails</code> objects.</p>
     */
    inline DescribePackagesResult& AddPackageDetailsList(const PackageDetails& value) { m_packageDetailsList.push_back(value); return *this; }

    /**
     * <p>List of <code>PackageDetails</code> objects.</p>
     */
    inline DescribePackagesResult& AddPackageDetailsList(PackageDetails&& value) { m_packageDetailsList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribePackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribePackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribePackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PackageDetails> m_packageDetailsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
