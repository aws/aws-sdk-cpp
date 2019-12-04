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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API UpdateDomainResult
  {
  public:
    UpdateDomainResult();
    UpdateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The domain Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }

    /**
     * <p>The domain Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(const Aws::String& value) { m_domainArn = value; }

    /**
     * <p>The domain Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(Aws::String&& value) { m_domainArn = std::move(value); }

    /**
     * <p>The domain Amazon Resource Name (ARN).</p>
     */
    inline void SetDomainArn(const char* value) { m_domainArn.assign(value); }

    /**
     * <p>The domain Amazon Resource Name (ARN).</p>
     */
    inline UpdateDomainResult& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}

    /**
     * <p>The domain Amazon Resource Name (ARN).</p>
     */
    inline UpdateDomainResult& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}

    /**
     * <p>The domain Amazon Resource Name (ARN).</p>
     */
    inline UpdateDomainResult& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}

  private:

    Aws::String m_domainArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
