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
  class AWS_LIGHTSAIL_API DetachStaticIpResult
  {
  public:
    DetachStaticIpResult();
    DetachStaticIpResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetachStaticIpResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * detach static IP request.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * detach static IP request.</p>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * detach static IP request.</p>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = value; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * detach static IP request.</p>
     */
    inline DetachStaticIpResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * detach static IP request.</p>
     */
    inline DetachStaticIpResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * detach static IP request.</p>
     */
    inline DetachStaticIpResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * detach static IP request.</p>
     */
    inline DetachStaticIpResult& AddOperations(Operation&& value) { m_operations.push_back(value); return *this; }

  private:
    Aws::Vector<Operation> m_operations;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
