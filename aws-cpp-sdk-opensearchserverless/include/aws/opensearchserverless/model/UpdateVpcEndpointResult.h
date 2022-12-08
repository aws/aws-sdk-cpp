/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/UpdateVpcEndpointDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class UpdateVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateVpcEndpointResult();
    AWS_OPENSEARCHSERVERLESS_API UpdateVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the updated VPC endpoint.</p>
     */
    inline const UpdateVpcEndpointDetail& GetUpdateVpcEndpointDetail() const{ return m_updateVpcEndpointDetail; }

    /**
     * <p>Details about the updated VPC endpoint.</p>
     */
    inline void SetUpdateVpcEndpointDetail(const UpdateVpcEndpointDetail& value) { m_updateVpcEndpointDetail = value; }

    /**
     * <p>Details about the updated VPC endpoint.</p>
     */
    inline void SetUpdateVpcEndpointDetail(UpdateVpcEndpointDetail&& value) { m_updateVpcEndpointDetail = std::move(value); }

    /**
     * <p>Details about the updated VPC endpoint.</p>
     */
    inline UpdateVpcEndpointResult& WithUpdateVpcEndpointDetail(const UpdateVpcEndpointDetail& value) { SetUpdateVpcEndpointDetail(value); return *this;}

    /**
     * <p>Details about the updated VPC endpoint.</p>
     */
    inline UpdateVpcEndpointResult& WithUpdateVpcEndpointDetail(UpdateVpcEndpointDetail&& value) { SetUpdateVpcEndpointDetail(std::move(value)); return *this;}

  private:

    UpdateVpcEndpointDetail m_updateVpcEndpointDetail;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
