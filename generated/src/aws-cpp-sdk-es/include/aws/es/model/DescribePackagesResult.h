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
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of <code>PackageDetails</code> objects.</p>
     */
    inline const Aws::Vector<PackageDetails>& GetPackageDetailsList() const { return m_packageDetailsList; }
    template<typename PackageDetailsListT = Aws::Vector<PackageDetails>>
    void SetPackageDetailsList(PackageDetailsListT&& value) { m_packageDetailsListHasBeenSet = true; m_packageDetailsList = std::forward<PackageDetailsListT>(value); }
    template<typename PackageDetailsListT = Aws::Vector<PackageDetails>>
    DescribePackagesResult& WithPackageDetailsList(PackageDetailsListT&& value) { SetPackageDetailsList(std::forward<PackageDetailsListT>(value)); return *this;}
    template<typename PackageDetailsListT = PackageDetails>
    DescribePackagesResult& AddPackageDetailsList(PackageDetailsListT&& value) { m_packageDetailsListHasBeenSet = true; m_packageDetailsList.emplace_back(std::forward<PackageDetailsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribePackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PackageDetails> m_packageDetailsList;
    bool m_packageDetailsListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
