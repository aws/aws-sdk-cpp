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
  class AWS_SNOWBALL_API CreateAddressResult
  {
  public:
    CreateAddressResult();
    CreateAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snowball for that
     * job shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snowball for that
     * job shipped to.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressId = value; }

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snowball for that
     * job shipped to.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressId = std::move(value); }

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snowball for that
     * job shipped to.</p>
     */
    inline void SetAddressId(const char* value) { m_addressId.assign(value); }

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snowball for that
     * job shipped to.</p>
     */
    inline CreateAddressResult& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snowball for that
     * job shipped to.</p>
     */
    inline CreateAddressResult& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snowball for that
     * job shipped to.</p>
     */
    inline CreateAddressResult& WithAddressId(const char* value) { SetAddressId(value); return *this;}

  private:

    Aws::String m_addressId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
