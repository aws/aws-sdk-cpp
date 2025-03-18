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
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkAccountInfoWithFingerprint">AWS
   * API Reference</a></p>
   */
  class SidewalkAccountInfoWithFingerprint
  {
  public:
    AWS_IOTWIRELESS_API SidewalkAccountInfoWithFingerprint() = default;
    AWS_IOTWIRELESS_API SidewalkAccountInfoWithFingerprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkAccountInfoWithFingerprint& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    SidewalkAccountInfoWithFingerprint& WithAmazonId(AmazonIdT&& value) { SetAmazonId(std::forward<AmazonIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline const Aws::String& GetFingerprint() const { return m_fingerprint; }
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }
    template<typename FingerprintT = Aws::String>
    void SetFingerprint(FingerprintT&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::forward<FingerprintT>(value); }
    template<typename FingerprintT = Aws::String>
    SidewalkAccountInfoWithFingerprint& WithFingerprint(FingerprintT&& value) { SetFingerprint(std::forward<FingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SidewalkAccountInfoWithFingerprint& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amazonId;
    bool m_amazonIdHasBeenSet = false;

    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
