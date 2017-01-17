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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Stack.h>

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
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API UpdateStackResult
  {
  public:
    UpdateStackResult();
    UpdateStackResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateStackResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of stack details.</p>
     */
    inline const Stack& GetStack() const{ return m_stack; }

    /**
     * <p>A list of stack details.</p>
     */
    inline void SetStack(const Stack& value) { m_stack = value; }

    /**
     * <p>A list of stack details.</p>
     */
    inline void SetStack(Stack&& value) { m_stack = value; }

    /**
     * <p>A list of stack details.</p>
     */
    inline UpdateStackResult& WithStack(const Stack& value) { SetStack(value); return *this;}

    /**
     * <p>A list of stack details.</p>
     */
    inline UpdateStackResult& WithStack(Stack&& value) { SetStack(value); return *this;}

  private:
    Stack m_stack;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
