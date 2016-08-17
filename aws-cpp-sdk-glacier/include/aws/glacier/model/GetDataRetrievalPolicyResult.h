/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/DataRetrievalPolicy.h>

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
   * <p>Contains the Amazon Glacier response to the
   * <code>GetDataRetrievalPolicy</code> request.</p>
   */
  class AWS_GLACIER_API GetDataRetrievalPolicyResult
  {
  public:
    GetDataRetrievalPolicyResult();
    GetDataRetrievalPolicyResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDataRetrievalPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetPolicy(DataRetrievalPolicy&& value) { m_policy = value; }

    /**
     * <p>Contains the returned data retrieval policy in JSON format.</p>
     */
    inline GetDataRetrievalPolicyResult& WithPolicy(const DataRetrievalPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>Contains the returned data retrieval policy in JSON format.</p>
     */
    inline GetDataRetrievalPolicyResult& WithPolicy(DataRetrievalPolicy&& value) { SetPolicy(value); return *this;}

  private:
    DataRetrievalPolicy m_policy;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
