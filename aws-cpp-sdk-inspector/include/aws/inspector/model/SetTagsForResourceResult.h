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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API SetTagsForResourceResult
  {
  public:
    SetTagsForResourceResult();
    SetTagsForResourceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SetTagsForResourceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = value; }

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline SetTagsForResourceResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline SetTagsForResourceResult& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline SetTagsForResourceResult& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    Aws::String m_message;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
