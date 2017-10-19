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
#include <aws/ssm/SSM_EXPORTS.h>

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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API PutParameterResult
  {
  public:
    PutParameterResult();
    PutParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new version number of a parameter. If you edit a parameter value,
     * Parameter Store automatically creates a new version and assigns this new version
     * a unique ID. You can reference a parameter version ID in API actions or in
     * Systems Manager documents (SSM documents). By default, if you don't specify a
     * specific version, the system returns the latest parameter value when a parameter
     * is called.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The new version number of a parameter. If you edit a parameter value,
     * Parameter Store automatically creates a new version and assigns this new version
     * a unique ID. You can reference a parameter version ID in API actions or in
     * Systems Manager documents (SSM documents). By default, if you don't specify a
     * specific version, the system returns the latest parameter value when a parameter
     * is called.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The new version number of a parameter. If you edit a parameter value,
     * Parameter Store automatically creates a new version and assigns this new version
     * a unique ID. You can reference a parameter version ID in API actions or in
     * Systems Manager documents (SSM documents). By default, if you don't specify a
     * specific version, the system returns the latest parameter value when a parameter
     * is called.</p>
     */
    inline PutParameterResult& WithVersion(long long value) { SetVersion(value); return *this;}

  private:

    long long m_version;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
