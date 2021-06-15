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
  class AWS_IOTWIRELESS_API SidewalkAccountInfoWithFingerprint
  {
  public:
    SidewalkAccountInfoWithFingerprint();
    SidewalkAccountInfoWithFingerprint(Aws::Utils::Json::JsonView jsonValue);
    SidewalkAccountInfoWithFingerprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline SidewalkAccountInfoWithFingerprint& WithAmazonId(const Aws::String& value) { SetAmazonId(value); return *this;}

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkAccountInfoWithFingerprint& WithAmazonId(Aws::String&& value) { SetAmazonId(std::move(value)); return *this;}

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkAccountInfoWithFingerprint& WithAmazonId(const char* value) { SetAmazonId(value); return *this;}


    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline const Aws::String& GetFingerprint() const{ return m_fingerprint; }

    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }

    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline void SetFingerprint(const Aws::String& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }

    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline void SetFingerprint(Aws::String&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::move(value); }

    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline void SetFingerprint(const char* value) { m_fingerprintHasBeenSet = true; m_fingerprint.assign(value); }

    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline SidewalkAccountInfoWithFingerprint& WithFingerprint(const Aws::String& value) { SetFingerprint(value); return *this;}

    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline SidewalkAccountInfoWithFingerprint& WithFingerprint(Aws::String&& value) { SetFingerprint(std::move(value)); return *this;}

    /**
     * <p>The fingerprint of the Sidewalk application server private key.</p>
     */
    inline SidewalkAccountInfoWithFingerprint& WithFingerprint(const char* value) { SetFingerprint(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline SidewalkAccountInfoWithFingerprint& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline SidewalkAccountInfoWithFingerprint& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline SidewalkAccountInfoWithFingerprint& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_amazonId;
    bool m_amazonIdHasBeenSet;

    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
