/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/PackageDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Container for response returned by <code> <a>UpdatePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdatePackageResponse">AWS
   * API Reference</a></p>
   */
  class UpdatePackageResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API UpdatePackageResult();
    AWS_ELASTICSEARCHSERVICE_API UpdatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API UpdatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the package <code>PackageDetails</code>.</p>
     */
    inline const PackageDetails& GetPackageDetails() const{ return m_packageDetails; }

    /**
     * <p>Information about the package <code>PackageDetails</code>.</p>
     */
    inline void SetPackageDetails(const PackageDetails& value) { m_packageDetails = value; }

    /**
     * <p>Information about the package <code>PackageDetails</code>.</p>
     */
    inline void SetPackageDetails(PackageDetails&& value) { m_packageDetails = std::move(value); }

    /**
     * <p>Information about the package <code>PackageDetails</code>.</p>
     */
    inline UpdatePackageResult& WithPackageDetails(const PackageDetails& value) { SetPackageDetails(value); return *this;}

    /**
     * <p>Information about the package <code>PackageDetails</code>.</p>
     */
    inline UpdatePackageResult& WithPackageDetails(PackageDetails&& value) { SetPackageDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PackageDetails m_packageDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
