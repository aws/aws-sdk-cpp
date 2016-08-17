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
#include <aws/core/utils/memory/stl/AWSVector.h>

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
  class AWS_INSPECTOR_API LocalizeTextResult
  {
  public:
    LocalizeTextResult();
    LocalizeTextResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    LocalizeTextResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline LocalizeTextResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline LocalizeTextResult& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>Confirmation details of the action performed.</p>
     */
    inline LocalizeTextResult& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>The resulting list of user-readable texts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResults() const{ return m_results; }

    /**
     * <p>The resulting list of user-readable texts.</p>
     */
    inline void SetResults(const Aws::Vector<Aws::String>& value) { m_results = value; }

    /**
     * <p>The resulting list of user-readable texts.</p>
     */
    inline void SetResults(Aws::Vector<Aws::String>&& value) { m_results = value; }

    /**
     * <p>The resulting list of user-readable texts.</p>
     */
    inline LocalizeTextResult& WithResults(const Aws::Vector<Aws::String>& value) { SetResults(value); return *this;}

    /**
     * <p>The resulting list of user-readable texts.</p>
     */
    inline LocalizeTextResult& WithResults(Aws::Vector<Aws::String>&& value) { SetResults(value); return *this;}

    /**
     * <p>The resulting list of user-readable texts.</p>
     */
    inline LocalizeTextResult& AddResults(const Aws::String& value) { m_results.push_back(value); return *this; }

    /**
     * <p>The resulting list of user-readable texts.</p>
     */
    inline LocalizeTextResult& AddResults(Aws::String&& value) { m_results.push_back(value); return *this; }

    /**
     * <p>The resulting list of user-readable texts.</p>
     */
    inline LocalizeTextResult& AddResults(const char* value) { m_results.push_back(value); return *this; }

  private:
    Aws::String m_message;
    Aws::Vector<Aws::String> m_results;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
