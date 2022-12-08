/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
   * <p> Container for response parameters to <code> <a>DeletePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackageResponse">AWS
   * API Reference</a></p>
   */
  class DeletePackageResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DeletePackageResult();
    AWS_ELASTICSEARCHSERVICE_API DeletePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DeletePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p><code>PackageDetails</code></p>
     */
    inline const PackageDetails& GetPackageDetails() const{ return m_packageDetails; }

    /**
     * <p><code>PackageDetails</code></p>
     */
    inline void SetPackageDetails(const PackageDetails& value) { m_packageDetails = value; }

    /**
     * <p><code>PackageDetails</code></p>
     */
    inline void SetPackageDetails(PackageDetails&& value) { m_packageDetails = std::move(value); }

    /**
     * <p><code>PackageDetails</code></p>
     */
    inline DeletePackageResult& WithPackageDetails(const PackageDetails& value) { SetPackageDetails(value); return *this;}

    /**
     * <p><code>PackageDetails</code></p>
     */
    inline DeletePackageResult& WithPackageDetails(PackageDetails&& value) { SetPackageDetails(std::move(value)); return *this;}

  private:

    PackageDetails m_packageDetails;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
