/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Represents an available endpoint against which to make API calls against, as
   * well as the TTL for that endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_TIMESTREAMQUERY_API Endpoint();
    AWS_TIMESTREAMQUERY_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An endpoint address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>An endpoint address.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>An endpoint address.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>An endpoint address.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>An endpoint address.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>An endpoint address.</p>
     */
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>An endpoint address.</p>
     */
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>An endpoint address.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The TTL for the endpoint, in minutes.</p>
     */
    inline long long GetCachePeriodInMinutes() const{ return m_cachePeriodInMinutes; }

    /**
     * <p>The TTL for the endpoint, in minutes.</p>
     */
    inline bool CachePeriodInMinutesHasBeenSet() const { return m_cachePeriodInMinutesHasBeenSet; }

    /**
     * <p>The TTL for the endpoint, in minutes.</p>
     */
    inline void SetCachePeriodInMinutes(long long value) { m_cachePeriodInMinutesHasBeenSet = true; m_cachePeriodInMinutes = value; }

    /**
     * <p>The TTL for the endpoint, in minutes.</p>
     */
    inline Endpoint& WithCachePeriodInMinutes(long long value) { SetCachePeriodInMinutes(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    long long m_cachePeriodInMinutes;
    bool m_cachePeriodInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
