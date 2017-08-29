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
#include <aws/snowball/model/Address.h>
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
  class AWS_SNOWBALL_API DescribeAddressResult
  {
  public:
    DescribeAddressResult();
    DescribeAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The address that you want the Snowball or Snowballs associated with a
     * specific job to be shipped to.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }

    /**
     * <p>The address that you want the Snowball or Snowballs associated with a
     * specific job to be shipped to.</p>
     */
    inline void SetAddress(const Address& value) { m_address = value; }

    /**
     * <p>The address that you want the Snowball or Snowballs associated with a
     * specific job to be shipped to.</p>
     */
    inline void SetAddress(Address&& value) { m_address = std::move(value); }

    /**
     * <p>The address that you want the Snowball or Snowballs associated with a
     * specific job to be shipped to.</p>
     */
    inline DescribeAddressResult& WithAddress(const Address& value) { SetAddress(value); return *this;}

    /**
     * <p>The address that you want the Snowball or Snowballs associated with a
     * specific job to be shipped to.</p>
     */
    inline DescribeAddressResult& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}

  private:

    Address m_address;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
