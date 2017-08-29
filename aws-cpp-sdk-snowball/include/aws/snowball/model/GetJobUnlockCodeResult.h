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
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API GetJobUnlockCodeResult
  {
  public:
    GetJobUnlockCodeResult();
    GetJobUnlockCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetJobUnlockCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>UnlockCode</code> value for the specified job. The
     * <code>UnlockCode</code> value can be accessed for up to 90 days after the job
     * has been created.</p>
     */
    inline const Aws::String& GetUnlockCode() const{ return m_unlockCode; }

    /**
     * <p>The <code>UnlockCode</code> value for the specified job. The
     * <code>UnlockCode</code> value can be accessed for up to 90 days after the job
     * has been created.</p>
     */
    inline void SetUnlockCode(const Aws::String& value) { m_unlockCode = value; }

    /**
     * <p>The <code>UnlockCode</code> value for the specified job. The
     * <code>UnlockCode</code> value can be accessed for up to 90 days after the job
     * has been created.</p>
     */
    inline void SetUnlockCode(Aws::String&& value) { m_unlockCode = std::move(value); }

    /**
     * <p>The <code>UnlockCode</code> value for the specified job. The
     * <code>UnlockCode</code> value can be accessed for up to 90 days after the job
     * has been created.</p>
     */
    inline void SetUnlockCode(const char* value) { m_unlockCode.assign(value); }

    /**
     * <p>The <code>UnlockCode</code> value for the specified job. The
     * <code>UnlockCode</code> value can be accessed for up to 90 days after the job
     * has been created.</p>
     */
    inline GetJobUnlockCodeResult& WithUnlockCode(const Aws::String& value) { SetUnlockCode(value); return *this;}

    /**
     * <p>The <code>UnlockCode</code> value for the specified job. The
     * <code>UnlockCode</code> value can be accessed for up to 90 days after the job
     * has been created.</p>
     */
    inline GetJobUnlockCodeResult& WithUnlockCode(Aws::String&& value) { SetUnlockCode(std::move(value)); return *this;}

    /**
     * <p>The <code>UnlockCode</code> value for the specified job. The
     * <code>UnlockCode</code> value can be accessed for up to 90 days after the job
     * has been created.</p>
     */
    inline GetJobUnlockCodeResult& WithUnlockCode(const char* value) { SetUnlockCode(value); return *this;}

  private:

    Aws::String m_unlockCode;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
