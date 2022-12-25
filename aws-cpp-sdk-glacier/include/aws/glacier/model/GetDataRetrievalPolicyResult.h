/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/DataRetrievalPolicy.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to the
   * <code>GetDataRetrievalPolicy</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetDataRetrievalPolicyOutput">AWS
   * API Reference</a></p>
   */
  class GetDataRetrievalPolicyResult
  {
  public:
    AWS_GLACIER_API GetDataRetrievalPolicyResult();
    AWS_GLACIER_API GetDataRetrievalPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API GetDataRetrievalPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the returned data retrieval policy in JSON format.</p>
     */
    inline const DataRetrievalPolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>Contains the returned data retrieval policy in JSON format.</p>
     */
    inline void SetPolicy(const DataRetrievalPolicy& value) { m_policy = value; }

    /**
     * <p>Contains the returned data retrieval policy in JSON format.</p>
     */
    inline void SetPolicy(DataRetrievalPolicy&& value) { m_policy = std::move(value); }

    /**
     * <p>Contains the returned data retrieval policy in JSON format.</p>
     */
    inline GetDataRetrievalPolicyResult& WithPolicy(const DataRetrievalPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>Contains the returned data retrieval policy in JSON format.</p>
     */
    inline GetDataRetrievalPolicyResult& WithPolicy(DataRetrievalPolicy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    DataRetrievalPolicy m_policy;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
