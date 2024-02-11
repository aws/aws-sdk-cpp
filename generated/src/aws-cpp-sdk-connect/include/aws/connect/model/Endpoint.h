/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EndpointType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_CONNECT_API Endpoint();
    AWS_CONNECT_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of the endpoint.</p>
     */
    inline const EndpointType& GetType() const{ return m_type; }

    /**
     * <p>Type of the endpoint.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of the endpoint.</p>
     */
    inline void SetType(const EndpointType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the endpoint.</p>
     */
    inline void SetType(EndpointType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of the endpoint.</p>
     */
    inline Endpoint& WithType(const EndpointType& value) { SetType(value); return *this;}

    /**
     * <p>Type of the endpoint.</p>
     */
    inline Endpoint& WithType(EndpointType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Address of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>Address of the endpoint.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>Address of the endpoint.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>Address of the endpoint.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>Address of the endpoint.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>Address of the endpoint.</p>
     */
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>Address of the endpoint.</p>
     */
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>Address of the endpoint.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}

  private:

    EndpointType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
