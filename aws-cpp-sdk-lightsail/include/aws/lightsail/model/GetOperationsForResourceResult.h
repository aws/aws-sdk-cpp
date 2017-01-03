﻿/*
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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Operation.h>

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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetOperationsForResourceResult
  {
  public:
    GetOperationsForResourceResult();
    GetOperationsForResourceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOperationsForResourceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get operations for resource request.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get operations for resource request.</p>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get operations for resource request.</p>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = value; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get operations for resource request.</p>
     */
    inline GetOperationsForResourceResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get operations for resource request.</p>
     */
    inline GetOperationsForResourceResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get operations for resource request.</p>
     */
    inline GetOperationsForResourceResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get operations for resource request.</p>
     */
    inline GetOperationsForResourceResult& AddOperations(Operation&& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>Returns the number of pages of results that remain.</p>
     */
    inline const Aws::String& GetNextPageCount() const{ return m_nextPageCount; }

    /**
     * <p>Returns the number of pages of results that remain.</p>
     */
    inline void SetNextPageCount(const Aws::String& value) { m_nextPageCount = value; }

    /**
     * <p>Returns the number of pages of results that remain.</p>
     */
    inline void SetNextPageCount(Aws::String&& value) { m_nextPageCount = value; }

    /**
     * <p>Returns the number of pages of results that remain.</p>
     */
    inline void SetNextPageCount(const char* value) { m_nextPageCount.assign(value); }

    /**
     * <p>Returns the number of pages of results that remain.</p>
     */
    inline GetOperationsForResourceResult& WithNextPageCount(const Aws::String& value) { SetNextPageCount(value); return *this;}

    /**
     * <p>Returns the number of pages of results that remain.</p>
     */
    inline GetOperationsForResourceResult& WithNextPageCount(Aws::String&& value) { SetNextPageCount(value); return *this;}

    /**
     * <p>Returns the number of pages of results that remain.</p>
     */
    inline GetOperationsForResourceResult& WithNextPageCount(const char* value) { SetNextPageCount(value); return *this;}

  private:
    Aws::Vector<Operation> m_operations;
    Aws::String m_nextPageCount;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
