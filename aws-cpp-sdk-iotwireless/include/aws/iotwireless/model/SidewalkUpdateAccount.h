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
    AWS_IOTWIRELESS_API SidewalkUpdateAccount();
    AWS_IOTWIRELESS_API SidewalkUpdateAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkUpdateAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline const Aws::String& GetAppServerPrivateKey() const{ return m_appServerPrivateKey; }

    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline bool AppServerPrivateKeyHasBeenSet() const { return m_appServerPrivateKeyHasBeenSet; }

    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline void SetAppServerPrivateKey(const Aws::String& value) { m_appServerPrivateKeyHasBeenSet = true; m_appServerPrivateKey = value; }

    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline void SetAppServerPrivateKey(Aws::String&& value) { m_appServerPrivateKeyHasBeenSet = true; m_appServerPrivateKey = std::move(value); }

    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline void SetAppServerPrivateKey(const char* value) { m_appServerPrivateKeyHasBeenSet = true; m_appServerPrivateKey.assign(value); }

    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline SidewalkUpdateAccount& WithAppServerPrivateKey(const Aws::String& value) { SetAppServerPrivateKey(value); return *this;}

    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline SidewalkUpdateAccount& WithAppServerPrivateKey(Aws::String&& value) { SetAppServerPrivateKey(std::move(value)); return *this;}

    /**
     * <p>The new Sidewalk application server private key.</p>
     */
    inline SidewalkUpdateAccount& WithAppServerPrivateKey(const char* value) { SetAppServerPrivateKey(value); return *this;}

  private:

    Aws::String m_appServerPrivateKey;
    bool m_appServerPrivateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
