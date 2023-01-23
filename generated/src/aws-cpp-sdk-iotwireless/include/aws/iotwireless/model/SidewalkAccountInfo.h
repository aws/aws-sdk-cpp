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
   * <p>Information about a Sidewalk account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkAccountInfo">AWS
   * API Reference</a></p>
   */
  class SidewalkAccountInfo
  {
  public:
    AWS_IOTWIRELESS_API SidewalkAccountInfo();
    AWS_IOTWIRELESS_API SidewalkAccountInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkAccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline const Aws::String& GetAmazonId() const{ return m_amazonId; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline bool AmazonIdHasBeenSet() const { return m_amazonIdHasBeenSet; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(const Aws::String& value) { m_amazonIdHasBeenSet = true; m_amazonId = value; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(Aws::String&& value) { m_amazonIdHasBeenSet = true; m_amazonId = std::move(value); }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(const char* value) { m_amazonIdHasBeenSet = true; m_amazonId.assign(value); }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkAccountInfo& WithAmazonId(const Aws::String& value) { SetAmazonId(value); return *this;}

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkAccountInfo& WithAmazonId(Aws::String&& value) { SetAmazonId(std::move(value)); return *this;}

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkAccountInfo& WithAmazonId(const char* value) { SetAmazonId(value); return *this;}


    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline const Aws::String& GetAppServerPrivateKey() const{ return m_appServerPrivateKey; }

    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline bool AppServerPrivateKeyHasBeenSet() const { return m_appServerPrivateKeyHasBeenSet; }

    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline void SetAppServerPrivateKey(const Aws::String& value) { m_appServerPrivateKeyHasBeenSet = true; m_appServerPrivateKey = value; }

    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline void SetAppServerPrivateKey(Aws::String&& value) { m_appServerPrivateKeyHasBeenSet = true; m_appServerPrivateKey = std::move(value); }

    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline void SetAppServerPrivateKey(const char* value) { m_appServerPrivateKeyHasBeenSet = true; m_appServerPrivateKey.assign(value); }

    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline SidewalkAccountInfo& WithAppServerPrivateKey(const Aws::String& value) { SetAppServerPrivateKey(value); return *this;}

    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline SidewalkAccountInfo& WithAppServerPrivateKey(Aws::String&& value) { SetAppServerPrivateKey(std::move(value)); return *this;}

    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline SidewalkAccountInfo& WithAppServerPrivateKey(const char* value) { SetAppServerPrivateKey(value); return *this;}

  private:

    Aws::String m_amazonId;
    bool m_amazonIdHasBeenSet = false;

    Aws::String m_appServerPrivateKey;
    bool m_appServerPrivateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
