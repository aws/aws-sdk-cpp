/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>Represents the information required for client programs to connect to the
   * endpoint for a DAX cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/Endpoint">AWS API
   * Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_DAX_API Endpoint();
    AWS_DAX_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number that applications should use to connect to the endpoint.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that applications should use to connect to the endpoint. The default
     * ports are 8111 for the "dax" protocol and 9111 for the "daxs" protocol.</p>
     */
    inline const Aws::String& GetURL() const{ return m_uRL; }
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }
    inline void SetURL(const Aws::String& value) { m_uRLHasBeenSet = true; m_uRL = value; }
    inline void SetURL(Aws::String&& value) { m_uRLHasBeenSet = true; m_uRL = std::move(value); }
    inline void SetURL(const char* value) { m_uRLHasBeenSet = true; m_uRL.assign(value); }
    inline Endpoint& WithURL(const Aws::String& value) { SetURL(value); return *this;}
    inline Endpoint& WithURL(Aws::String&& value) { SetURL(std::move(value)); return *this;}
    inline Endpoint& WithURL(const char* value) { SetURL(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_uRL;
    bool m_uRLHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
