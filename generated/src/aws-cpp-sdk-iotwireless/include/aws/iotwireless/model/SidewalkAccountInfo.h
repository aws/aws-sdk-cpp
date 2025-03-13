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
    AWS_IOTWIRELESS_API SidewalkAccountInfo() = default;
    AWS_IOTWIRELESS_API SidewalkAccountInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkAccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline const Aws::String& GetAmazonId() const { return m_amazonId; }
    inline bool AmazonIdHasBeenSet() const { return m_amazonIdHasBeenSet; }
    template<typename AmazonIdT = Aws::String>
    void SetAmazonId(AmazonIdT&& value) { m_amazonIdHasBeenSet = true; m_amazonId = std::forward<AmazonIdT>(value); }
    template<typename AmazonIdT = Aws::String>
    SidewalkAccountInfo& WithAmazonId(AmazonIdT&& value) { SetAmazonId(std::forward<AmazonIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Sidewalk application server private key.</p>
     */
    inline const Aws::String& GetAppServerPrivateKey() const { return m_appServerPrivateKey; }
    inline bool AppServerPrivateKeyHasBeenSet() const { return m_appServerPrivateKeyHasBeenSet; }
    template<typename AppServerPrivateKeyT = Aws::String>
    void SetAppServerPrivateKey(AppServerPrivateKeyT&& value) { m_appServerPrivateKeyHasBeenSet = true; m_appServerPrivateKey = std::forward<AppServerPrivateKeyT>(value); }
    template<typename AppServerPrivateKeyT = Aws::String>
    SidewalkAccountInfo& WithAppServerPrivateKey(AppServerPrivateKeyT&& value) { SetAppServerPrivateKey(std::forward<AppServerPrivateKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amazonId;
    bool m_amazonIdHasBeenSet = false;

    Aws::String m_appServerPrivateKey;
    bool m_appServerPrivateKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
