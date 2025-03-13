/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Sidewalk update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkUpdateAccount">AWS
   * API Reference</a></p>
   */
  class SidewalkUpdateAccount
  {
  public:
    AWS_IOTWIRELESS_API SidewalkUpdateAccount() = default;
    AWS_IOTWIRELESS_API SidewalkUpdateAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkUpdateAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline const Aws::String& GetAppServerPrivateKey() const { return m_appServerPrivateKey; }
    inline bool AppServerPrivateKeyHasBeenSet() const { return m_appServerPrivateKeyHasBeenSet; }
    template<typename AppServerPrivateKeyT = Aws::String>
    void SetAppServerPrivateKey(AppServerPrivateKeyT&& value) { m_appServerPrivateKeyHasBeenSet = true; m_appServerPrivateKey = std::forward<AppServerPrivateKeyT>(value); }
    template<typename AppServerPrivateKeyT = Aws::String>
    SidewalkUpdateAccount& WithAppServerPrivateKey(AppServerPrivateKeyT&& value) { SetAppServerPrivateKey(std::forward<AppServerPrivateKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appServerPrivateKey;
    bool m_appServerPrivateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
