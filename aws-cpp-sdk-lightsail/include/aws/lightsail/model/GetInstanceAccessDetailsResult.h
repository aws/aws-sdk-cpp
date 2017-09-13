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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceAccessDetails.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetInstanceAccessDetailsResult
  {
  public:
    GetInstanceAccessDetailsResult();
    GetInstanceAccessDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstanceAccessDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline const InstanceAccessDetails& GetAccessDetails() const{ return m_accessDetails; }

    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline void SetAccessDetails(const InstanceAccessDetails& value) { m_accessDetails = value; }

    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline void SetAccessDetails(InstanceAccessDetails&& value) { m_accessDetails = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline GetInstanceAccessDetailsResult& WithAccessDetails(const InstanceAccessDetails& value) { SetAccessDetails(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about a get instance
     * access request.</p>
     */
    inline GetInstanceAccessDetailsResult& WithAccessDetails(InstanceAccessDetails&& value) { SetAccessDetails(std::move(value)); return *this;}

  private:

    InstanceAccessDetails m_accessDetails;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
