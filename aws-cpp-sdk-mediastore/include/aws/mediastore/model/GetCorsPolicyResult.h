/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediastore/model/CorsRule.h>
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
namespace MediaStore
{
namespace Model
{
  class AWS_MEDIASTORE_API GetCorsPolicyResult
  {
  public:
    GetCorsPolicyResult();
    GetCorsPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCorsPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline const Aws::Vector<CorsRule>& GetCorsPolicy() const{ return m_corsPolicy; }

    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline void SetCorsPolicy(const Aws::Vector<CorsRule>& value) { m_corsPolicy = value; }

    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline void SetCorsPolicy(Aws::Vector<CorsRule>&& value) { m_corsPolicy = std::move(value); }

    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline GetCorsPolicyResult& WithCorsPolicy(const Aws::Vector<CorsRule>& value) { SetCorsPolicy(value); return *this;}

    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline GetCorsPolicyResult& WithCorsPolicy(Aws::Vector<CorsRule>&& value) { SetCorsPolicy(std::move(value)); return *this;}

    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline GetCorsPolicyResult& AddCorsPolicy(const CorsRule& value) { m_corsPolicy.push_back(value); return *this; }

    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline GetCorsPolicyResult& AddCorsPolicy(CorsRule&& value) { m_corsPolicy.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CorsRule> m_corsPolicy;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
