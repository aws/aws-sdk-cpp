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
   * <p>CreateTapesInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapesInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CreateTapesRequest : public StorageGatewayRequest
  {
  public:
    CreateTapesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTapes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tapes with. Use the <a>ListGateways</a> operation to
     * return a list of gateways for your account and region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tapes with. Use the <a>ListGateways</a> operation to
     * return a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tapes with. Use the <a>ListGateways</a> operation to
     * return a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tapes with. Use the <a>ListGateways</a> operation to
     * return a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tapes with. Use the <a>ListGateways</a> operation to
     * return a list of gateways for your account and region.</p>
     */
    inline CreateTapesRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tapes with. Use the <a>ListGateways</a> operation to
     * return a list of gateways for your account and region.</p>
     */
    inline CreateTapesRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tapes with. Use the <a>ListGateways</a> operation to
     * return a list of gateways for your account and region.</p>
     */
    inline CreateTapesRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The size, in bytes, of the virtual tapes that you want to create.</p> <note>
     * <p>The size must be aligned by gigabyte (1024*1024*1024 byte).</p> </note>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the virtual tapes that you want to create.</p> <note>
     * <p>The size must be aligned by gigabyte (1024*1024*1024 byte).</p> </note>
     */
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the virtual tapes that you want to create.</p> <note>
     * <p>The size must be aligned by gigabyte (1024*1024*1024 byte).</p> </note>
     */
    inline CreateTapesRequest& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}


    /**
     * <p>A unique identifier that you use to retry a request. If you retry a request,
     * use the same <code>ClientToken</code> you specified in the initial request.</p>
     * <note> <p>Using the same <code>ClientToken</code> prevents creating the tape
     * multiple times.</p> </note>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier that you use to retry a request. If you retry a request,
     * use the same <code>ClientToken</code> you specified in the initial request.</p>
     * <note> <p>Using the same <code>ClientToken</code> prevents creating the tape
     * multiple times.</p> </note>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier that you use to retry a request. If you retry a request,
     * use the same <code>ClientToken</code> you specified in the initial request.</p>
     * <note> <p>Using the same <code>ClientToken</code> prevents creating the tape
     * multiple times.</p> </note>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier that you use to retry a request. If you retry a request,
     * use the same <code>ClientToken</code> you specified in the initial request.</p>
     * <note> <p>Using the same <code>ClientToken</code> prevents creating the tape
     * multiple times.</p> </note>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier that you use to retry a request. If you retry a request,
     * use the same <code>ClientToken</code> you specified in the initial request.</p>
     * <note> <p>Using the same <code>ClientToken</code> prevents creating the tape
     * multiple times.</p> </note>
     */
    inline CreateTapesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier that you use to retry a request. If you retry a request,
     * use the same <code>ClientToken</code> you specified in the initial request.</p>
     * <note> <p>Using the same <code>ClientToken</code> prevents creating the tape
     * multiple times.</p> </note>
     */
    inline CreateTapesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you use to retry a request. If you retry a request,
     * use the same <code>ClientToken</code> you specified in the initial request.</p>
     * <note> <p>Using the same <code>ClientToken</code> prevents creating the tape
     * multiple times.</p> </note>
     */
    inline CreateTapesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The number of virtual tapes that you want to create.</p>
     */
    inline int GetNumTapesToCreate() const{ return m_numTapesToCreate; }

    /**
     * <p>The number of virtual tapes that you want to create.</p>
     */
    inline void SetNumTapesToCreate(int value) { m_numTapesToCreateHasBeenSet = true; m_numTapesToCreate = value; }

    /**
     * <p>The number of virtual tapes that you want to create.</p>
     */
    inline CreateTapesRequest& WithNumTapesToCreate(int value) { SetNumTapesToCreate(value); return *this;}


    /**
     * <p>A prefix that you append to the barcode of the virtual tape you are creating.
     * This prefix makes the barcode unique.</p> <note> <p>The prefix must be 1 to 4
     * characters in length and must be one of the uppercase letters from A to Z.</p>
     * </note>
     */
    inline const Aws::String& GetTapeBarcodePrefix() const{ return m_tapeBarcodePrefix; }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape you are creating.
     * This prefix makes the barcode unique.</p> <note> <p>The prefix must be 1 to 4
     * characters in length and must be one of the uppercase letters from A to Z.</p>
     * </note>
     */
    inline void SetTapeBarcodePrefix(const Aws::String& value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix = value; }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape you are creating.
     * This prefix makes the barcode unique.</p> <note> <p>The prefix must be 1 to 4
     * characters in length and must be one of the uppercase letters from A to Z.</p>
     * </note>
     */
    inline void SetTapeBarcodePrefix(Aws::String&& value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix = std::move(value); }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape you are creating.
     * This prefix makes the barcode unique.</p> <note> <p>The prefix must be 1 to 4
     * characters in length and must be one of the uppercase letters from A to Z.</p>
     * </note>
     */
    inline void SetTapeBarcodePrefix(const char* value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix.assign(value); }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape you are creating.
     * This prefix makes the barcode unique.</p> <note> <p>The prefix must be 1 to 4
     * characters in length and must be one of the uppercase letters from A to Z.</p>
     * </note>
     */
    inline CreateTapesRequest& WithTapeBarcodePrefix(const Aws::String& value) { SetTapeBarcodePrefix(value); return *this;}

    /**
     * <p>A prefix that you append to the barcode of the virtual tape you are creating.
     * This prefix makes the barcode unique.</p> <note> <p>The prefix must be 1 to 4
     * characters in length and must be one of the uppercase letters from A to Z.</p>
     * </note>
     */
    inline CreateTapesRequest& WithTapeBarcodePrefix(Aws::String&& value) { SetTapeBarcodePrefix(std::move(value)); return *this;}

    /**
     * <p>A prefix that you append to the barcode of the virtual tape you are creating.
     * This prefix makes the barcode unique.</p> <note> <p>The prefix must be 1 to 4
     * characters in length and must be one of the uppercase letters from A to Z.</p>
     * </note>
     */
    inline CreateTapesRequest& WithTapeBarcodePrefix(const char* value) { SetTapeBarcodePrefix(value); return *this;}


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
    inline CreateTapesRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateTapesRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateTapesRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS key used for Amazon S3 server
     * side encryption. This value can only be set when KMSEncrypted is true.
     * Optional.</p>
     */
    inline CreateTapesRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    int m_numTapesToCreate;
    bool m_numTapesToCreateHasBeenSet;

    Aws::String m_tapeBarcodePrefix;
    bool m_tapeBarcodePrefixHasBeenSet;

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
