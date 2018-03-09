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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API CopyProductResult
  {
  public:
    CopyProductResult();
    CopyProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CopyProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline const Aws::String& GetCopyProductToken() const{ return m_copyProductToken; }

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline void SetCopyProductToken(const Aws::String& value) { m_copyProductToken = value; }

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline void SetCopyProductToken(Aws::String&& value) { m_copyProductToken = std::move(value); }

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline void SetCopyProductToken(const char* value) { m_copyProductToken.assign(value); }

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline CopyProductResult& WithCopyProductToken(const Aws::String& value) { SetCopyProductToken(value); return *this;}

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline CopyProductResult& WithCopyProductToken(Aws::String&& value) { SetCopyProductToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline CopyProductResult& WithCopyProductToken(const char* value) { SetCopyProductToken(value); return *this;}

  private:

    Aws::String m_copyProductToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
