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
    AWS_IOTWIRELESS_API SidewalkAccountInfoWithFingerprint();
    AWS_IOTWIRELESS_API SidewalkAccountInfoWithFingerprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkAccountInfoWithFingerprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline const Aws::String& GetAmazonId() const{ return m_amazonId; }
    inline bool AmazonIdHasBeenSet() const { return m_amazonIdHasBeenSet; }
    inline void SetAmazonId(const Aws::String& value) { m_amazonIdHasBeenSet = true; m_amazonId = value; }
    inline void SetAmazonId(Aws::String&& value) { m_amazonIdHasBeenSet = true; m_amazonId = std::move(value); }
    inline void SetAmazonId(const char* value) { m_amazonIdHasBeenSet = true; m_amazonId.assign(value); }
    inline SidewalkAccountInfoWithFingerprint& WithAmazonId(const Aws::String& value) { SetAmazonId(value); return *this;}
    inline SidewalkAccountInfoWithFingerprint& WithAmazonId(Aws::String&& value) { SetAmazonId(std::move(value)); return *this;}
    inline SidewalkAccountInfoWithFingerprint& WithAmazonId(const char* value) { SetAmazonId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline const Aws::String& GetFingerprint() const{ return m_fingerprint; }
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }
    inline void SetFingerprint(const Aws::String& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }
    inline void SetFingerprint(Aws::String&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::move(value); }
    inline void SetFingerprint(const char* value) { m_fingerprintHasBeenSet = true; m_fingerprint.assign(value); }
    inline SidewalkAccountInfoWithFingerprint& WithFingerprint(const Aws::String& value) { SetFingerprint(value); return *this;}
    inline SidewalkAccountInfoWithFingerprint& WithFingerprint(Aws::String&& value) { SetFingerprint(std::move(value)); return *this;}
    inline SidewalkAccountInfoWithFingerprint& WithFingerprint(const char* value) { SetFingerprint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SidewalkAccountInfoWithFingerprint& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SidewalkAccountInfoWithFingerprint& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SidewalkAccountInfoWithFingerprint& WithArn(const char* value) { SetArn(value); return *this;}
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
