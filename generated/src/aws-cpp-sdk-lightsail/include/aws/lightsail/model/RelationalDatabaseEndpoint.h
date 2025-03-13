/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an endpoint for a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabaseEndpoint">AWS
   * API Reference</a></p>
   */
  class RelationalDatabaseEndpoint
  {
  public:
    AWS_LIGHTSAIL_API RelationalDatabaseEndpoint() = default;
    AWS_LIGHTSAIL_API RelationalDatabaseEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the port that the database is listening on.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RelationalDatabaseEndpoint& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS address of the database.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    RelationalDatabaseEndpoint& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
