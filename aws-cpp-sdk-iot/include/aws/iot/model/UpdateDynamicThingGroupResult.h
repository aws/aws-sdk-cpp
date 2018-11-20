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
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API UpdateDynamicThingGroupResult
  {
  public:
    UpdateDynamicThingGroupResult();
    UpdateDynamicThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDynamicThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The dynamic thing group version.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The dynamic thing group version.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The dynamic thing group version.</p>
     */
    inline UpdateDynamicThingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}

  private:

    long long m_version;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
