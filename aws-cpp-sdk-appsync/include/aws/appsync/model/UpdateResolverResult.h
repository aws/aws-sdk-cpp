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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/Resolver.h>
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
namespace AppSync
{
namespace Model
{
  class AWS_APPSYNC_API UpdateResolverResult
  {
  public:
    UpdateResolverResult();
    UpdateResolverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateResolverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline const Resolver& GetResolver() const{ return m_resolver; }

    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline void SetResolver(const Resolver& value) { m_resolver = value; }

    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline void SetResolver(Resolver&& value) { m_resolver = std::move(value); }

    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline UpdateResolverResult& WithResolver(const Resolver& value) { SetResolver(value); return *this;}

    /**
     * <p>The updated <code>Resolver</code> object.</p>
     */
    inline UpdateResolverResult& WithResolver(Resolver&& value) { SetResolver(std::move(value)); return *this;}

  private:

    Resolver m_resolver;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
