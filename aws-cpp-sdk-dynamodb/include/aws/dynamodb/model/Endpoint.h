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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>An endpoint information details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Endpoint">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(Aws::Utils::Json::JsonView jsonValue);
    Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IP address of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>IP address of the endpoint.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>IP address of the endpoint.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>IP address of the endpoint.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>IP address of the endpoint.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>IP address of the endpoint.</p>
     */
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>IP address of the endpoint.</p>
     */
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>IP address of the endpoint.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>Endpoint cache time to live (TTL) value.</p>
     */
    inline long long GetCachePeriodInMinutes() const{ return m_cachePeriodInMinutes; }

    /**
     * <p>Endpoint cache time to live (TTL) value.</p>
     */
    inline bool CachePeriodInMinutesHasBeenSet() const { return m_cachePeriodInMinutesHasBeenSet; }

    /**
     * <p>Endpoint cache time to live (TTL) value.</p>
     */
    inline void SetCachePeriodInMinutes(long long value) { m_cachePeriodInMinutesHasBeenSet = true; m_cachePeriodInMinutes = value; }

    /**
     * <p>Endpoint cache time to live (TTL) value.</p>
     */
    inline Endpoint& WithCachePeriodInMinutes(long long value) { SetCachePeriodInMinutes(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    long long m_cachePeriodInMinutes;
    bool m_cachePeriodInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
