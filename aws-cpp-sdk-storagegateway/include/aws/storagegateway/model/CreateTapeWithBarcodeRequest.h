﻿/*
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>CreateTapeWithBarcodeInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapeWithBarcodeInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CreateTapeWithBarcodeRequest : public StorageGatewayRequest
  {
  public:
    CreateTapeWithBarcodeRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTapeWithBarcode"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tape with. Use the <a>ListGateways</a> operation to return
     * a list of gateways for your account and region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tape with. Use the <a>ListGateways</a> operation to return
     * a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tape with. Use the <a>ListGateways</a> operation to return
     * a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tape with. Use the <a>ListGateways</a> operation to return
     * a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tape with. Use the <a>ListGateways</a> operation to return
     * a list of gateways for your account and region.</p>
     */
    inline CreateTapeWithBarcodeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tape with. Use the <a>ListGateways</a> operation to return
     * a list of gateways for your account and region.</p>
     */
    inline CreateTapeWithBarcodeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tape with. Use the <a>ListGateways</a> operation to return
     * a list of gateways for your account and region.</p>
     */
    inline CreateTapeWithBarcodeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The size, in bytes, of the virtual tape that you want to create.</p> <note>
     * <p>The size must be aligned by gigabyte (1024*1024*1024 byte).</p> </note>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the virtual tape that you want to create.</p> <note>
     * <p>The size must be aligned by gigabyte (1024*1024*1024 byte).</p> </note>
     */
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the virtual tape that you want to create.</p> <note>
     * <p>The size must be aligned by gigabyte (1024*1024*1024 byte).</p> </note>
     */
    inline CreateTapeWithBarcodeRequest& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}


    /**
     * <p>The barcode that you want to assign to the tape.</p> <note> <p>Barcodes
     * cannot be reused. This includes barcodes used for tapes that have been
     * deleted.</p> </note>
     */
    inline const Aws::String& GetTapeBarcode() const{ return m_tapeBarcode; }

    /**
     * <p>The barcode that you want to assign to the tape.</p> <note> <p>Barcodes
     * cannot be reused. This includes barcodes used for tapes that have been
     * deleted.</p> </note>
     */
    inline void SetTapeBarcode(const Aws::String& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }

    /**
     * <p>The barcode that you want to assign to the tape.</p> <note> <p>Barcodes
     * cannot be reused. This includes barcodes used for tapes that have been
     * deleted.</p> </note>
     */
    inline void SetTapeBarcode(Aws::String&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = std::move(value); }

    /**
     * <p>The barcode that you want to assign to the tape.</p> <note> <p>Barcodes
     * cannot be reused. This includes barcodes used for tapes that have been
     * deleted.</p> </note>
     */
    inline void SetTapeBarcode(const char* value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode.assign(value); }

    /**
     * <p>The barcode that you want to assign to the tape.</p> <note> <p>Barcodes
     * cannot be reused. This includes barcodes used for tapes that have been
     * deleted.</p> </note>
     */
    inline CreateTapeWithBarcodeRequest& WithTapeBarcode(const Aws::String& value) { SetTapeBarcode(value); return *this;}

    /**
     * <p>The barcode that you want to assign to the tape.</p> <note> <p>Barcodes
     * cannot be reused. This includes barcodes used for tapes that have been
     * deleted.</p> </note>
     */
    inline CreateTapeWithBarcodeRequest& WithTapeBarcode(Aws::String&& value) { SetTapeBarcode(std::move(value)); return *this;}

    /**
     * <p>The barcode that you want to assign to the tape.</p> <note> <p>Barcodes
     * cannot be reused. This includes barcodes used for tapes that have been
     * deleted.</p> </note>
     */
    inline CreateTapeWithBarcodeRequest& WithTapeBarcode(const char* value) { SetTapeBarcode(value); return *this;}


    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline CreateTapeWithBarcodeRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS Key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS Key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS Key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS Key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS Key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateTapeWithBarcodeRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS Key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateTapeWithBarcodeRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS Key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateTapeWithBarcodeRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet;

    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet;

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
