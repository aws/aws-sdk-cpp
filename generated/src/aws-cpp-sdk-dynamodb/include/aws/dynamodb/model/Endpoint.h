/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Endpoint
  {
  public:
    AWS_DYNAMODB_API Endpoint() = default;
    AWS_DYNAMODB_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IP address of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    Endpoint& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint cache time to live (TTL) value.</p>
     */
    inline long long GetCachePeriodInMinutes() const { return m_cachePeriodInMinutes; }
    inline bool CachePeriodInMinutesHasBeenSet() const { return m_cachePeriodInMinutesHasBeenSet; }
    inline void SetCachePeriodInMinutes(long long value) { m_cachePeriodInMinutesHasBeenSet = true; m_cachePeriodInMinutes = value; }
    inline Endpoint& WithCachePeriodInMinutes(long long value) { SetCachePeriodInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    long long m_cachePeriodInMinutes{0};
    bool m_cachePeriodInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
