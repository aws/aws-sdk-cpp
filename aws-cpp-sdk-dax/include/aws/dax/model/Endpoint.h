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
   * configuration endpoint for a DAX cluster, or to an individual node within the
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/Endpoint">AWS API
   * Reference</a></p>
   */
  class AWS_DAX_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(Aws::Utils::Json::JsonView jsonValue);
    Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline Endpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline Endpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The DNS hostname of the endpoint.</p>
     */
    inline Endpoint& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The port number that applications should use to connect to the endpoint.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number that applications should use to connect to the endpoint.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number that applications should use to connect to the endpoint.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number that applications should use to connect to the endpoint.</p>
     */
    inline Endpoint& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
