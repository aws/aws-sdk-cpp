﻿/*
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
#include <aws/appsync/model/Type.h>
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
  class AWS_APPSYNC_API CreateTypeResult
  {
  public:
    CreateTypeResult();
    CreateTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline void SetType(const Type& value) { m_type = value; }

    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline void SetType(Type&& value) { m_type = std::move(value); }

    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline CreateTypeResult& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline CreateTypeResult& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Type m_type;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
